#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int xVar, yVar;
  scanf("%d\n%d", &xVar, &yVar);
  if(xVar > 0 && yVar > 0)
    printf("1");
  else if(xVar > 0 && yVar < 0)
    printf("4");
  else if(xVar < 0 && yVar > 0)
    printf("2");
  else
    printf("3");
  return 0;
}
