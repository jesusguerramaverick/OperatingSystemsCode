README
*************
Jesus Adrian Guerra 1000453615
*************
File(s) included:Guerra_3615.c
*************
This program displays the contents of the current directory being used by the user. The contents of the directory are shown in groups of 5 at a time prompting the user to hit space to continue until all contents of the directory have been displayed. The program then prompts the user for a letter that goes to a set of options. Option d will display a file that the user enters, option q will exit the program, option e will edit a file, option r will run a program, option c will change to a directory number entered by the user and whose number was shown in the directory list, option s will either sort the directory by size or by date, option m will move a file that the user inputs to a directory number of the user's choice, and option R will remove a file from the current directory. The only part of this hw unfinished is the P for previous portion which I ran out of time for. I spent extra time doing all the options as suggested by Dr. Levine even though the assignment only asked for options for edit, run, change, and sort. 
*************
Compilation instructions:
-> In the terminal of Lubuntu virtual machine:
	gcc -g Guerra_3615.c
	./a.out
*************
Sample output:

Time: Tue Sep 15 19:51:33 2020

-----------------------------------------------

Current Directory: /media/sf_Object_Projects 
 ( 0 Directory:  . ) 
 ( 1 Directory:  .. ) 
 ( 2 Directory:  hello.txt ) 
 ( 3 Directory:  HW1 ) 
 ( 4 Directory:  HW2 ) 
 ( 5 Directory:  HW3 ) 
 ( 6 Directory:  HW4 ) 
 ( 7 Directory:  HW5 ) 
 ( 8 Directory:  HW6 ) 
-----------------------------------------
Hit Space for Next

Hit Space for Next

 ( 0 File:  a.out ) 
 ( 1 File:  al1 ) 
 ( 2 File:  al1.c ) 
 ( 3 File:  algorithmslab2.c ) 
 ( 4 File:  algorithmslab22.c ) 
Hit Space for Next

 ( 5 File:  attempt1.cpp ) 
 ( 6 File:  bank.cpp ) 
 ( 7 File:  chili.cpp ) 
 ( 8 File:  chili2.cpp ) 
 ( 9 File:  chipotle.cpp ) 
Hit Space for Next

 ( 10 File:  class0.cpp ) 
 ( 11 File:  cse_1325_HW2.zip ) 
 ( 12 File:  data.txt ) 
 ( 13 File:  data2.txt ) 
 ( 14 File:  df.save ) 
Hit Space for Next

 ( 15 File:  example1.c ) 
 ( 16 File:  Guerra_3615.c ) 
 ( 17 File:  height.cpp ) 
 ( 18 File:  height1.cpp ) 
 ( 19 File:  hello ) 
Hit Space for Next

 ( 20 File:  hello.c ) 
 ( 21 File:  HW1.zip ) 
 ( 22 File:  HW2.zip ) 
 ( 23 File:  HW3.zip ) 
 ( 24 File:  HW4.zip ) 
Hit Space for Next

Hit Space for Next

 ( 25 File:  HW5.zip ) 
 ( 26 File:  HW6.zip ) 
 ( 27 File:  in.dat ) 
 ( 28 File:  in0.dat ) 
 ( 29 File:  in1.dat ) 
Hit Space for Next

 ( 30 File:  in2.dat ) 
 ( 31 File:  in3.dat ) 
 ( 32 File:  laundry.cpp ) 
 ( 33 File:  marbles.cpp ) 
 ( 34 File:  money.cpp ) 
Hit Space for Next

 ( 35 File:  money1.cpp ) 
 ( 36 File:  out.dat ) 
 ( 37 File:  problem 5.txt ) 
 ( 38 File:  shapes.cpp ) 
 ( 39 File:  shapes2.cpp ) 
Hit Space for Next

 ( 40 File:  test1prob.c ) 
 ( 41 File:  testdir.txt ) 
 ( 42 File:  totalmade.txt ) 
 ( 43 File:  watches.cpp ) 
 ( 44 File:  weight.cpp ) 
Hit Space for Next

 ( 45 File:  weight2.cpp ) 
 ( 46 File:  weight3.cpp ) 
 ( 47 File:  yourtotal.txt ) 
-----------------------------------------
Operation: d Display
           e Edit
           r Run
           c Change Directory
           s Sort Directory listing
           m Move to Directory
           R Remove File
           q Quit

Enter an option:
r
Run what?:al1
-- table --
  0   0
  1   1
  2   1
  3   1
  4   2
  5   4
  6   4
  7   6
  8   6
  9   6
 10  10
 11  12
 12  12
 13  12
 14  12
 15  15
 16  15
 17  17
 18  17
 19  18
key  first  last  count
 -1     0    -1     0
  0     0     0     1
  1     1     3     3
  2     4     4     1
  3     5     4     0
  4     5     6     2
  5     7     6     0
  6     7     9     3
  7    10     9     0
  8    10     9     0
  9    10     9     0
 10    10    10     1
 11    11    10     0
 12    11    14     4
 13    15    14     0
 14    15    14     0
 15    15    16     2
 16    17    16     0
 17    17    18     2
 18    19    19     1
 19    20    19     0
 20    20    19     0
Time: Tue Sep 15 19:51:48 2020

-----------------------------------------------

Current Directory: /media/sf_Object_Projects 
 ( 0 Directory:  . ) 
 ( 1 Directory:  .. ) 
 ( 2 Directory:  hello.txt ) 
 ( 3 Directory:  HW1 ) 
 ( 4 Directory:  HW2 ) 
 ( 5 Directory:  HW3 ) 
 ( 6 Directory:  HW4 ) 
 ( 7 Directory:  HW5 ) 
 ( 8 Directory:  HW6 ) 
-----------------------------------------
Hit Space for Next
Hit Space for Next

 ( 0 File:  a.out ) 
 ( 1 File:  al1 ) 
 ( 2 File:  al1.c ) 
 ( 3 File:  algorithmslab2.c ) 
 ( 4 File:  algorithmslab22.c ) 
Hit Space for Next

 ( 5 File:  attempt1.cpp ) 
 ( 6 File:  bank.cpp ) 
 ( 7 File:  chili.cpp ) 
 ( 8 File:  chili2.cpp ) 
 ( 9 File:  chipotle.cpp ) 
Hit Space for Next

 ( 10 File:  class0.cpp ) 
 ( 11 File:  cse_1325_HW2.zip ) 
 ( 12 File:  data.txt ) 
 ( 13 File:  data2.txt ) 
 ( 14 File:  df.save ) 
Hit Space for Next

 ( 15 File:  example1.c ) 
 ( 16 File:  Guerra_3615.c ) 
 ( 17 File:  height.cpp ) 
 ( 18 File:  height1.cpp ) 
 ( 19 File:  hello ) 
Hit Space for Next

 ( 20 File:  hello.c ) 
 ( 21 File:  HW1.zip ) 
 ( 22 File:  HW2.zip ) 
 ( 23 File:  HW3.zip ) 
 ( 24 File:  HW4.zip ) 
Hit Space for Next

Hit Space for Next

 ( 25 File:  HW5.zip ) 
 ( 26 File:  HW6.zip ) 
 ( 27 File:  in.dat ) 
 ( 28 File:  in0.dat ) 
 ( 29 File:  in1.dat ) 
Hit Space for Next

 ( 30 File:  in2.dat ) 
 ( 31 File:  in3.dat ) 
 ( 32 File:  laundry.cpp ) 
 ( 33 File:  marbles.cpp ) 
 ( 34 File:  money.cpp ) 
Hit Space for Next

 ( 35 File:  money1.cpp ) 
 ( 36 File:  out.dat ) 
 ( 37 File:  problem 5.txt ) 
 ( 38 File:  shapes.cpp ) 
 ( 39 File:  shapes2.cpp ) 
Hit Space for Next

 ( 40 File:  test1prob.c ) 
 ( 41 File:  testdir.txt ) 
 ( 42 File:  totalmade.txt ) 
 ( 43 File:  watches.cpp ) 
 ( 44 File:  weight.cpp ) 
Hit Space for Next

 ( 45 File:  weight2.cpp ) 
 ( 46 File:  weight3.cpp ) 
 ( 47 File:  yourtotal.txt ) 
-----------------------------------------
Operation: d Display
           e Edit
           r Run
           c Change Directory
           s Sort Directory listing
           m Move to Directory
           R Remove File
           q Quit

Enter an option:
s
Sort by size or date?:size
total 248
-rwxrwx--- 1 root vboxsf 18956 Feb 19  2020  cse_1325_HW2.zip
-rwxrwx--- 1 root vboxsf 16928 Sep 15 19:51  a.out
-rwxrwx--- 1 root vboxsf 16660 Feb 16  2020  HW2.zip
-rwxrwx--- 1 root vboxsf 15935 Aug  4 22:10  HW5.zip
-rwxrwx--- 1 root vboxsf 15203 Mar  1  2020  HW3.zip
-rwxrwx--- 1 root vboxsf 14729 Jul 26 22:19  HW4.zip
-rwxrwx--- 1 root vboxsf 14616 Aug 13 22:07  HW6.zip
-rwxrwx--- 1 root vboxsf 13922 Feb  2  2020  HW1.zip
-rwxrwx--- 1 root vboxsf  8536 Sep  9 21:21  al1
-rwxrwx--- 1 root vboxsf  8304 Sep 14 09:51  hello
drwxrwx--- 1 root vboxsf  8192 Sep 15 19:51  .
-rwxrwx--- 1 root vboxsf  4666 Mar  1  2020  chili.cpp
-rwxrwx--- 1 root vboxsf  4658 Mar  1  2020  chili2.cpp
-rwxrwx--- 1 root vboxsf  4282 Jul  4 14:58 'problem 5.txt'
drwxr-xr-x 6 root root    4096 Jan 22  2020  ..
-rwxrwx--- 1 root vboxsf  4029 Sep 15 19:51  Guerra_3615.c
-rwxrwx--- 1 root vboxsf  3690 Feb 15  2020  height1.cpp
-rwxrwx--- 1 root vboxsf  3676 Feb 16  2020  money.cpp
-rwxrwx--- 1 root vboxsf  3010 Jul  9 23:53  chipotle.cpp
-rwxrwx--- 1 root vboxsf  2978 Feb 16  2020  money1.cpp
-rwxrwx--- 1 root vboxsf  2512 Feb 16  2020  height.cpp
-rwxrwx--- 1 root vboxsf  2485 Mar 22 13:48  algorithmslab22.c
-rwxrwx--- 1 root vboxsf  1802 Feb  5  2020  al1.c
-rwxrwx--- 1 root vboxsf  1781 Mar 21 16:12  algorithmslab2.c
-rwxrwx--- 1 root vboxsf  1642 Feb  2  2020  weight.cpp
-rwxrwx--- 1 root vboxsf  1639 Feb  2  2020  shapes.cpp
-rwxrwx--- 1 root vboxsf  1377 Jul 26 21:34  watches.cpp
-rwxrwx--- 1 root vboxsf  1269 Jan 30  2020  weight3.cpp
-rwxrwx--- 1 root vboxsf  1236 Aug  4 22:18  marbles.cpp
-rwxrwx--- 1 root vboxsf  1190 Jan 30  2020  weight2.cpp
-rwxrwx--- 1 root vboxsf  1030 Feb  1  2020  shapes2.cpp
-rwxrwx--- 1 root vboxsf  1020 Feb  7  2020  example1.c
-rwxrwx--- 1 root vboxsf   973 Jul  1 19:48  attempt1.cpp
-rwxrwx--- 1 root vboxsf   947 Aug  4 21:31  bank.cpp
-rwxrwx--- 1 root vboxsf   496 Jul 26 21:58  laundry.cpp
-rwxrwx--- 1 root vboxsf   291 Jan 23  2020  class0.cpp
-rwxrwx--- 1 root vboxsf   165 Sep 14 09:57  test1prob.c
-rwxrwx--- 1 root vboxsf    81 Mar  1  2020  data.txt
-rwxrwx--- 1 root vboxsf    81 Sep 15 17:01  testdir.txt
-rwxrwx--- 1 root vboxsf    73 Mar 22 13:48  out.dat
-rwxrwx--- 1 root vboxsf    67 Sep 14 09:46  hello.c
-rwxrwx--- 1 root vboxsf    63 Jul  9 23:01  data2.txt
-rwxrwx--- 1 root vboxsf    37 Mar 20 15:14  in.dat
-rwxrwx--- 1 root vboxsf    33 Mar 20 15:17  in0.dat
-rwxrwx--- 1 root vboxsf    30 Jul  9 23:52  yourtotal.txt
-rwxrwx--- 1 root vboxsf    24 Mar 20 15:18  in3.dat
-rwxrwx--- 1 root vboxsf    21 Mar 20 15:18  in2.dat
-rwxrwx--- 1 root vboxsf    19 Mar 20 15:17  in1.dat
-rwxrwx--- 1 root vboxsf    10 Jul  9 23:22  totalmade.txt
-rwxrwx--- 1 root vboxsf     6 Sep  9 14:14  df.save
drwxrwx--- 1 root vboxsf     0 Sep 11 17:01  hello.txt
drwxrwx--- 1 root vboxsf     0 Feb  1  2020  HW1
drwxrwx--- 1 root vboxsf     0 Sep 15 17:03  HW2
drwxrwx--- 1 root vboxsf     0 Jul  9 22:36  HW3
drwxrwx--- 1 root vboxsf     0 Jul 26 18:43  HW4
drwxrwx--- 1 root vboxsf     0 Aug  4 21:47  HW5
drwxrwx--- 1 root vboxsf     0 Aug 13 21:25  HW6
Time: Tue Sep 15 19:52:05 2020

-----------------------------------------------

Current Directory: /media/sf_Object_Projects 
 ( 0 Directory:  . ) 
 ( 1 Directory:  .. ) 
 ( 2 Directory:  hello.txt ) 
 ( 3 Directory:  HW1 ) 
 ( 4 Directory:  HW2 ) 
 ( 5 Directory:  HW3 ) 
 ( 6 Directory:  HW4 ) 
 ( 7 Directory:  HW5 ) 
 ( 8 Directory:  HW6 ) 
-----------------------------------------
Hit Space for Next
Hit Space for Next

**************

