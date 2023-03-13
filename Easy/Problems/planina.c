#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int nrOfIterations;
  scanf("%d", &nrOfIterations);
  int dots, totalDots;
  for(int i = 1; i <= nrOfIterations; i++)
  {
    dots = (1 + pow(2, i));
    totalDots = pow(dots, 2);
  }
  printf("%d\n", totalDots);
  return 0;
}
