#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>



int main(int argc, char * argv[]){
  DIR * dir;
  char directory[512];
  if (argc = 1){
    fgets(directory, sizeof(directory), stdin);
    directory[strlen(directory) - 1] = '\0';
  }
  else{
    strcpy(directory, argv[1]);
  }
  // dir = opendir(directory);
  // // char line[100] = argv[1];
  // char * s1 = directory;
  // printf("[%s]\n", strsep( &s1, "-" ));
  // printf("[%s]\n", s1);
  char * s1 = directory;
  parse_args(s1);
}

char *  parse_args( char * line ){
  printf("[%s]\n", strsep( &line  , "-" ));
  printf("[%s]\n", line);
  return line;
}
