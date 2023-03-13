#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int LENGTH = 100;

int main(int argc, char** args) {
  char *name = malloc(sizeof(char) * LENGTH);
  char *shortName = malloc(sizeof(char) * (LENGTH/10));
  int index = 0;

  int ret = scanf("%s", name);
  shortName[index] = name[0];
  index++;

  for(int i = 1; i < LENGTH; i++) {
    if(name[i] == '-') {
      shortName[index] = name[i+1];
      index++;
    }
    if(!isalpha(name[i]) && name[i] != '-')
      i = 100;
  }
  printf("%s\n", shortName);

  free(name);
  free(shortName);
  return 0;
}
