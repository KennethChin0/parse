#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>


char **  parse_args( char * line ){
  char ** args = calloc(6, sizeof(char));
  char * current = line;
  char * holder;
  int i = 0;
  while (current != NULL){
    holder = strsep(&current, " ");
    args[i]  = holder;
    i++;
  }
  args[i] = NULL;
  return args;
}

int main(){
  char input[100] ="ls -a -l";
  char ** args = parse_args(input);
  execvp(args[0], args);
  free(args);
  return 0;
}
