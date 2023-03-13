#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int nrOfCases, num, factorial = 1;
  scanf("%d", &nrOfCases);
  for(int i = 0; i < nrOfCases; i++)
  {
    scanf("%d", &num);
    for(int j = 1; j <= num; j++)
    {
        factorial = factorial * j;
    }
    if(factorial >= 10)
      factorial = factorial % 10;
    printf("%d\n", factorial);
    factorial = 1;
  }
  return 0;
}
