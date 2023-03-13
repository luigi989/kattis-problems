#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int x, y, nrOfNums, notFiorBu = 0;
  scanf("%d %d %d", &x, &y, &nrOfNums);

  for(int i = 1; i <= nrOfNums; i++)
  {
    if(i % x == 0)
    {
      printf("Fizz");
      notFiorBu = 1;
    }
    if(i % y == 0)
    {
      printf("Buzz");
      notFiorBu = 1;
    }
    if(notFiorBu == 0)
      printf("%d", i);
    notFiorBu = 0;
    printf("\n");
  }
  return 0;
}
