#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int nrOfTests, num;
  scanf("%d", &nrOfTests);
  for(int i = 0; i < nrOfTests; i++)
  {
    scanf("%d", &num);
    if(num % 2)
      printf("%d is odd\n", num);
    else
      printf("%d is even\n", num);
  }
  return 0;
}
