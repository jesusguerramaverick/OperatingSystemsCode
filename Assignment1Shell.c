 /*Program from Jesus Adrian Guerra, ID 1000453615, CSE 3320-001*/

#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <time.h>

int main(void) {
    pid_t child;/*initialize variables*/
    DIR * d;
    struct dirent * de;
    int i, c, k, di, newdi;
    char s[256], cmd[256], u[256], v[256], value[256], diarray[256][256], newdir[256];/*arrays for storage*/
    strcpy(u, "size");/*copy size to u*/
    strcpy(v, "date");/*copy date to v*/
    time_t t;

    while (1) {/*while loop for making the program continuously run*/

      t = time( NULL );
      printf( "Time: %s\n", ctime( &t ));
      printf("-----------------------------------------------\n" );

      getcwd(s, 200);
      printf( "\nCurrent Directory: %s \n", s);

      d = opendir( "." );
      c = 0;
	di=0; 
      while ((de = readdir(d))){/*outputs the directories in the current directory*/
          if ((de->d_type) & DT_DIR){ 
             printf( " ( %d Directory:  %s ) \n", c++, de->d_name);
		/*diarray[di]=(de->d_name);*/
		strcpy(diarray[di], de->d_name);/*stores directories into an array for use later*/
		di++;
		/*printf("%s", diarray[di])*/;
		}	  
      }
      closedir( d );
      printf( "-----------------------------------------\n" );
 
      d = opendir( "." );
      c = 0;                   
      while ((de = readdir(d))){ /*outputs the files in the current directory*/                  
          if (((de->d_type) & DT_REG)){                              
             printf( " ( %d File:  %s ) \n", c++, de->d_name);
		}
          if ( ( c % 5 ) == 0 ) {
             printf( "Hit Space for Next\n" );/*separates the files into segments of 5 at a time*/
             k = getchar( );
             }
      }
      closedir( d );
      printf( "-----------------------------------------\n" );
	printf( "Operation: d Display\n");/*outputs the menu with the options for the user to choose from*/
	printf( "           e Edit\n");
  	printf( "           r Run\n");
	printf( "           c Change Directory\n");
	printf( "           s Sort Directory listing\n");
	printf( "           m Move to Directory\n");
	printf( "           R Remove File\n");
	printf( "           q Quit\n\n");

	printf("Enter an option:\n");/*prompts user to pick an option*/


	fgets(value,256,stdin);/*gets user input from the terminal*/
	c=value[0];
      /*getchar( ); c = getchar( );*/
	if (c=='d'||'q'||'e'||'r'||'c'||'s'||'m'||'R'){
      switch (c) {
	case 'd': printf( "Display which file?:" );/*if user picks d, will display a file that the user enters*/
                  scanf( "%s", s );
                  strcpy( cmd, "cat  ");
                  strcat( cmd, s );
                  system( cmd );
                  break;
        case 'q': exit(0); /*if user picks q, will exit the program*/
        case 'e': printf( "Edit what?:" );/*if user picks e, will edit a file that the user enters*/
                  scanf( "%s", s );
                  strcpy( cmd, "pico ");
                  strcat( cmd, s );
                  system( cmd );
                  break;
        case 'r': printf( "Run what?:" );/*if user picks r, will run a program that the user enters*/
                  scanf( "%s", s );
                  strcpy( cmd, "./");
                  strcat( cmd, s );
                  system( cmd );
                  break;
        case 'c': printf( "Change to what directory?:" );/*if user picks c, prompts for a number and changes to that directory*/
                  scanf( "%i", &newdi );
		  strcpy(cmd,diarray[newdi]);
                  chdir( cmd );   
                  break; 
	case 's': printf( "Sort by size or date?:" );/*if user picks s, will sort by either size or date*/
                  scanf( "%s", s );
               	  if(strcmp(s, u)==0){
                  strcpy( cmd, "ls -laS");
                  system( cmd );
		  break;
			}
		  else if(strcmp(s, v)==0){
		  strcpy( cmd, "ls -lt");
                  system( cmd );
		  break;
			}
		  else{
			printf("Not a valid entry!!!");/*if user fails to enter size or date outputs error message*/
			break;
			}
                  
	case 'm': printf( "Move which file?:" );/*if user picks m, prompts user for a file and moves it to another directory of user's choice*/
                  scanf( "%s", s );
	          printf( "Move to which directory?:");
		  scanf( "%i", &newdi );
		  strcpy(newdir,diarray[newdi]);/*copies directory array to a variable*/
                  strcpy( cmd, "mv ");
                  strcat( cmd, s );
		  strcat( cmd, " ");
		  strcat( cmd, newdir );
                  system( cmd );
                  break;
	case 'R': printf( "Remove which file?:" );/*if user picks R, removes a file that the user enters from the directory*/
                  scanf( "%s", s );
                  strcpy( cmd, "rm ");
                  strcat( cmd, s );
                  system( cmd );
                  break;
	/*case 'n': break*/;
      }
      }
	else{
		printf( "That is not a valid choice. Please enter a correct choice\n" );
		}
		 
    }
}
