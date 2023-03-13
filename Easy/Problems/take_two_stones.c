#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int amountOfStones;
  scanf("%d", &amountOfStones);
  if(amountOfStones % 2 == 1)
  {
    printf("Alice\n");
  }
  else
  {
    printf("Bob\n");
  }
  return 0;
}
