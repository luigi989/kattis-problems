#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int num1, num2, bigNum, reverse = 0, reverse2 = 0, remainder, remainder2;
  scanf("%d %d", &num1, &num2);
  while(num1 != 0)
  {
    remainder = num1 % 10;
    reverse = reverse * 10 + remainder;
    num1 /= 10;
  }
  while(num2 != 0)
  {
    remainder2 = num2 % 10;
    reverse2 = reverse2 * 10 + remainder2;
    num2 /= 10;
  }
  if(reverse > reverse2)
    printf("%d\n", reverse);
  else
    printf("%d\n", reverse2);

  return 0;
}
