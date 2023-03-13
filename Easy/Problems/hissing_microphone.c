#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  char word[30];
  char s = 's';
  int hiss = 0;
  scanf("%s", &word);
  for(int i = 0; i < strlen(word); i++)
  {
    if(i > 0)
    {
      if(word[i-1] == s && word[i] == s)
        hiss = 1;
    }
  }
  if(hiss == 1)
    printf("hiss\n");
  else
    printf("no hiss\n");
  return 0;
}
