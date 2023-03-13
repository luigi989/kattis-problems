#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int number;
  scanf("%d", &number);
  for(int i = 1; i <= number; i++)
  {
    printf("%d Abracadabra\n", i);
  }
  return 0;
}
