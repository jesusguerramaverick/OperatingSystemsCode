README
*************
Jesus Adrian Guerra 1000453615
*************
File(s) included:Guerra_3615.c, earthquake5.txt, sorted_quake5.txt, and Readme.txt
*************
This program takes a file from http://earthquake.usgs.gov/earthquakes/feed/v1.0/csv.php and sorts the earthquake data by latitude, in ascending order. The
file is included and is called earthquake5.txt. The program sorts using a two loop sort and outputs the time it takes to sort the file. An output file called sorted_quake5.txt is created that will contain all the sorted data. The user is prompted to enter how many threads he or she would like to run concurrently to do the sort. 
*************
Compilation instructions:
-> In the terminal of Lubuntu virtual machine:
	gcc -g Guerra_3615.c -lpthread
	./a.out
*************
Sample output:

student@cse1325:/media/sf_Object_Projects$ gcc -g Guerra_3615.c -lpthread
student@cse1325:/media/sf_Object_Projects$ ./a.out
Please enter the number of processes you want:2
Driver Time: Fri Oct 30 21:56:50 2020

Driver Time again: Fri Oct 30 21:56:52 2020

Execution time = 2.000000 seconds


student@cse1325:/media/sf_Object_Projects$ gcc -g Guerra_3615.c -lpthread
student@cse1325:/media/sf_Object_Projects$ ./a.out
Please enter the number of processes you want:4
Driver Time: Fri Oct 30 21:58:23 2020

Driver Time again: Fri Oct 30 21:58:24 2020

Execution time = 1.000000 seconds



**************

