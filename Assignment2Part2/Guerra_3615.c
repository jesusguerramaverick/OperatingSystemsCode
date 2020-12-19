/*Program from Jesus Adrian Guerra, ID 1000453615, CSE 3320-001*/
#include <pthread.h>
#include <time.h>
#include <stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include<stdio.h>
#define MAX 198020//number of elements in array and number of threads
#define Num_of_Threads 2


struct quakes // struct for file storage

{
      char start[255];  //stores the latitude, contents of file before latitude, and after
      char ending[255];      
      float latitude;     
} e_quakes[400000];

int p = 0;

// merge function for parts
void merge(int lowpart, int middlepart, int highpart)
{   
    int* firstpart = (int*) malloc( (middlepart - lowpart + 1) * sizeof(int));
    int* nextpart = (int*) malloc( (highpart - middlepart) * sizeof(int));


    int number1 = middlepart - lowpart + 1,
    number2 = highpart - middlepart,
    i, j;

    
    for (i = 0; i < number1; i++)// loop that stores values in firstpart part
        firstpart[i] = e_quakes[i + lowpart].latitude;

    
    for (i = 0; i < number2; i++)// loop that stores values in nextpart part
        nextpart[i] = e_quakes[i + middlepart + 1].latitude;

    int k = lowpart;
    i = j = 0;

    
    while (i < number1 && j < number2) { //while loop that merges firstpart and nextpart in ascending order
        if (firstpart[i] <= nextpart[j])
            e_quakes[k++].latitude = firstpart[i++];
        else
            e_quakes[k++].latitude = nextpart[j++];
    }

    
    while (i < number1) {
        e_quakes[k++].latitude = firstpart[i++];
    }

    
    while (j < number2) {
        e_quakes[k++].latitude = nextpart[j++];
    }

    free(firstpart);
    free(nextpart);
}


void merge_sort(int lowpart, int highpart)//function for merge sort 
{
    int middlepart = lowpart + (highpart - lowpart) / 2;//get the middlepart of array
    if (lowpart < highpart) {

        
        merge_sort(lowpart, middlepart);//function call for first part
        merge_sort(middlepart + 1, highpart);//function call for second part
        merge(lowpart, middlepart, highpart);//merge the two parts together
    }
}


void* multimerge(void* arg)//multithreading function
{
    int thread_part = p++;
    int lowpart = thread_part * (MAX / Num_of_Threads);
    int highpart = (thread_part + 1) * (MAX / Num_of_Threads) - 1;
    int middlepart = lowpart + (highpart - lowpart) / 2;
    if (lowpart < highpart) {
        merge_sort(lowpart, middlepart);
        merge_sort(middlepart + 1, highpart);
        merge(lowpart, middlepart, highpart);
    }
    return 0;
}


int main()//main code
{
    	int times;
	printf("Please enter the number of processes you want:");
	scanf("%i", &times);
	double difference;//initiate variables
	time_t t, ending;
	t=time(NULL);
	printf("Driver Time: %s\n", ctime(&t));
 	FILE *infile = fopen("earthquake5.txt", "r"); // Open files
     	FILE *outfile = fopen("sorted_quake5.txt", "w");

      	int i=0;
      	struct quakes temp; //temporary struct

      	char chara;
      	char header[255];

      	fscanf(infile, "%s", header); //reads the column names from the file
      	fprintf(outfile, "%s\n", header); //writes hearder to the output file
      	chara = fgetc(infile);
      	char line[255];
      	while(chara != EOF) //loop until end of file

      {
            fscanf(infile, "%s", line);//reads file by line
            strcpy(e_quakes[i].start, strtok(line, ","));//splits by commas into 3 parts
            e_quakes[i].latitude =  atof(strtok(NULL,","));//stores into proper structure
            strcpy(e_quakes[i].ending, strtok(NULL, ""));
            chara = fgetc(infile);

            i++;

      }
 	int size = i;


    	pthread_t threads[Num_of_Threads];
    	for (int i = 0; i < Num_of_Threads; i++)//loop for creatign threads
        	pthread_create(&threads[i], NULL, multimerge,(void*)NULL);

    	for (int i = 0; i < Num_of_Threads; i++)//for loop for joing the threads
        	pthread_join(threads[i], NULL);
    		merge(0, (MAX / 2 - 1) / 2, MAX / 2 - 1);
    		merge(MAX / 2, MAX/2 + (MAX-1-MAX/2)/2, MAX - 1);
    		merge(0, (MAX - 1)/2, MAX - 1);

   	for(i=0; i<size; i++)//writes sorted data to output file//output sorted array
            	fprintf(outfile, "%s,%f,%s\n", e_quakes[i].start, e_quakes[i].latitude, e_quakes[i].ending);
 		ending=time(NULL);
	      	printf("Driver Time again: %s\n", ctime(&ending));
	      	difference = difftime(ending, t);
	      	printf("Execution time = %f seconds\n", difference);
    	return 0;
}