/*Program from Jesus Adrian Guerra, ID 1000453615, CSE 3320-001*/
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>



struct quakes // struct for file storage

{
      char start[255];  //stores the latitude, contents of file before latitude, and after
      char ending[255];      
      float latitude;     
} e_quakes[50000];

int main()

{
	int times;
	int k;
	time_t t, ending;
	double difference;
	t=time(NULL);
	pid_t p;
	p=getpid();
	printf("Please enter the number of processes you want:");
	scanf("%i", &times);
	printf("Driver Time: %s\n", ctime(&t));

      FILE *infile = fopen("earthquake3.txt", "r"); // Open files
      FILE *outfile = fopen("sorted_quake2.txt", "w");

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

      // Bubble sort to sort in ascendinging order based on latitude
	for (int k=0; k<times; k++){
      p=fork();	
      for(i=1; i<size; i++)
            for(int j=0; j<size-i; j++)
                  if (e_quakes[j+1].latitude < e_quakes[j].latitude)
                  {
                        temp = e_quakes[j];
                        e_quakes[j] = e_quakes[j+1];
                        e_quakes[j+1] = temp;
                  }
	      if (p == 0){
		      printf("Driver after fork, child: %d\n", p);
		      }
	      else{
		      printf("Driver after fork, parent: %d\n", p);
		      }
		}

    

      

      for(i=0; i<size; i++)//writes sorted data to output file
            fprintf(outfile, "%s,%f,%s\n", e_quakes[i].start, e_quakes[i].latitude, e_quakes[i].ending);
    	      ending=time(NULL);
	      printf("Driver Time again: %s\n", ctime(&ending));
	      difference = difftime(ending, t);
	      printf("Execution time = %f seconds\n", difference);

      return 0;

}