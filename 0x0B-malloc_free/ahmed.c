#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char ** argv) {
  int i;
  int len ;
  char * str;

  len = sizeof(argv[argc+1]);
  printf("%d",len);

  str = malloc(sizeof(char)*len);
  str[0] = '\0';

  for (i = 1; i < argc; i++) {
     strcat(str, argv[i]);
  }

  //Use str for whatever you want
  printf("My string is %s\n", str);

  free(str);
}
