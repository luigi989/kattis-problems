#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char** args) {
  int ret;
  int mBSpentPerMonth = 0;
  int mbAvaliablePerMonth = 0;
  int mbAvaliableTot = 0;
  int firstMonths = 0;

  ret = scanf("%d", &mbAvaliablePerMonth);
  if(mbAvaliablePerMonth > 0 && mbAvaliablePerMonth <= 100) {
    ret = scanf("%d", &firstMonths);
    if(firstMonths > 0 && firstMonths <= 100) {
        for(int i = 0; i < firstMonths; i++) {
          scanf("%d", &mBSpentPerMonth);
          if(mBSpentPerMonth >= 0 && mBSpentPerMonth <= 10000)
          mbAvaliableTot += (mbAvaliablePerMonth - mBSpentPerMonth);
        }
        mbAvaliableTot += mbAvaliablePerMonth;
        printf("%d\n", mbAvaliableTot);
      }
  }

  return 0;
}
