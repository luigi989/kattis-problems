#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int contestants, problems;
  char description[100];
  scanf("%d %d", &contestants, &problems);
  for(int i = 0; i < contestants; i++)
  {
    scanf("%s", &description);
  }
  printf("%d\n", problems);

  return 0;
}
