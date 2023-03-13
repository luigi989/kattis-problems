#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int nrOfNrs, number, lastDigit;
  long total;
  scanf("%d", &nrOfNrs);
  for(int i = 0; i < nrOfNrs; i++)
  {
    scanf("%d", &number);
    if(number >= 10 && number <= 9999)
    {
      lastDigit = number % 10;
      number = number / 10;
      total += pow(number, lastDigit);
    }
  }
  printf("%lld\n", total);
  return 0;
}
