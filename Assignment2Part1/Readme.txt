README
*************
Jesus Adrian Guerra 1000453615
*************
File(s) included:Guerra_3615.c and earthquake3.txt
*************
This program takes a file from http://earthquake.usgs.gov/earthquakes/feed/v1.0/csv.php and sorts the earthquake data by latitude, in ascending order. The
file is included and is called earthquake3.txt. The program sorts using a two loop bubble sort and outputs the time it takes to sort the file. An output file called sorted_quake2.txt is created that will contain all the sorted data. The user is prompted to enter how many processes he or she would like to run concurrently to do the sort. 

*************
Compilation instructions:
-> In the terminal of Lubuntu virtual machine:
	gcc -g Guerra_3615.c
	./a.out
*************
Sample output 1:

student@cse1325:/media/sf_Object_Projects$ gcc -g Guerra_3615.c
student@cse1325:/media/sf_Object_Projects$ ./a.out
Please enter the number of processes you want:1
Driver Time: Thu Oct 22 18:48:43 2020

Driver after fork, parent: 1772
Driver after fork, child: 0
Driver Time again: Thu Oct 22 18:49:19 2020

Execution time = 36.000000 seconds
student@cse1325:/media/sf_Object_Projects$ Driver Time again: Thu Oct 22 18:49:19 2020

Execution time = 36.000000 seconds



Sample output 2:

student@cse1325:/media/sf_Object_Projects$ gcc -g Guerra_3615.c
student@cse1325:/media/sf_Object_Projects$ ./a.out
Please enter the number of processes you want:2
Driver Time: Thu Oct 22 18:51:09 2020

Driver after fork, parent: 1782
Driver after fork, child: 0
Driver after fork, parent: 1785
Driver after fork, child: 0
Driver Time again: Thu Oct 22 18:51:50 2020

Execution time = 41.000000 seconds
student@cse1325:/media/sf_Object_Projects$ Driver Time again: Thu Oct 22 18:51:50 2020

Execution time = 41.000000 seconds
Driver after fork, parent: 1786
Driver after fork, child: 0
Driver Time again: Thu Oct 22 18:51:50 2020

Execution time = 41.000000 seconds
Driver Time again: Thu Oct 22 18:51:50 2020

Execution time = 41.000000 seconds


Sample output 3:

student@cse1325:/media/sf_Object_Projects$ gcc -g Guerra_3615.c
student@cse1325:/media/sf_Object_Projects$ ./a.out
Please enter the number of processes you want:4
Driver Time: Thu Oct 22 18:53:18 2020

Driver after fork, child: 0
Driver after fork, parent: 1797
Driver after fork, child: 0
Driver after fork, parent: 1799
Driver after fork, parent: 1798
Driver after fork, child: 0
Driver after fork, child: 0
Driver after fork, parent: 1802
Driver after fork, parent: 1801
Driver after fork, child: 0
Driver after fork, parent: 1800
Driver after fork, child: 0
Driver after fork, child: 0
Driver after fork, parent: 1803
Driver after fork, parent: 1804
Driver after fork, parent: 1806
Driver after fork, parent: 1805
Driver after fork, child: 0
Driver after fork, parent: 1807
Driver after fork, child: 0
Driver after fork, child: 0
Driver after fork, child: 0
Driver Time again: Thu Oct 22 18:54:23 2020

Execution time = 65.000000 seconds
Driver Time again: Thu Oct 22 18:54:23 2020

Execution time = 65.000000 seconds
Driver Time again: Thu Oct 22 18:54:23 2020

Execution time = 65.000000 seconds
Driver Time again: Thu Oct 22 18:54:23 2020

Execution time = 65.000000 seconds
student@cse1325:/media/sf_Object_Projects$ Driver Time again: Thu Oct 22 18:54:23 2020

Execution time = 65.000000 seconds
Driver Time again: Thu Oct 22 18:54:23 2020

Execution time = 65.000000 seconds
Driver Time again: Thu Oct 22 18:54:23 2020

Execution time = 65.000000 seconds
Driver Time again: Thu Oct 22 18:54:23 2020

Execution time = 65.000000 seconds
Driver after fork, child: 0
Driver after fork, parent: 1809
Driver after fork, child: 0
Driver after fork, parent: 1808
Driver after fork, child: 0
Driver after fork, parent: 1810
Driver after fork, parent: 1811
Driver after fork, child: 0
Driver Time again: Thu Oct 22 18:54:24 2020

Execution time = 66.000000 seconds
Driver Time again: Thu Oct 22 18:54:24 2020

Execution time = 66.000000 seconds
Driver Time again: Thu Oct 22 18:54:24 2020

Execution time = 66.000000 seconds
Driver Time again: Thu Oct 22 18:54:24 2020

Execution time = 66.000000 seconds
Driver Time again: Thu Oct 22 18:54:24 2020

Execution time = 66.000000 seconds
Driver Time again: Thu Oct 22 18:54:24 2020

Execution time = 66.000000 seconds
Driver Time again: Thu Oct 22 18:54:24 2020

Execution time = 66.000000 seconds
Driver Time again: Thu Oct 22 18:54:24 2020

Execution time = 66.000000 seconds


*************