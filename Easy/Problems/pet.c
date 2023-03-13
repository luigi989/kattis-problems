#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int num1, num2, num3, num4;
  int total = 0, nrWinner;
  for(int i = 1; i <= 5; i++)
  {
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    int tempTotal = num1 + num2 + num3 + num4;
    if(tempTotal > total)
    {
      total = tempTotal;
      nrWinner = i;
    }
  }
  printf("%d %d\n", nrWinner, total);
  return 0;
}
