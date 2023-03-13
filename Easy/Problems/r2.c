#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int number, mean;
  scanf("%d %d", &number, &mean);
  int number2 = mean*2-number;
  printf("%d\n", number2);

  return 0;
}
