#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  int cases;
  char first[50], second[50], diff[50];
  scanf("%d", &cases);
  for(int i = 0; i < cases; i++)
  {
    scanf("%s\n%s", first, second);
    printf("%s\n%s\n", first, second);
    for(int j = 0; j < strlen(first); j++)
    {
      if(first[j] != second[j])
        diff[j] = '*';
      else
        diff[j] = '.';
      printf("%c", diff[j]);
    }
    printf("\n");
  }


  return 0;
}
