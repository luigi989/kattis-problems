#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int nrOfArticles, impactFactor, total;
  scanf("%d\n%d", &nrOfArticles, &impactFactor);
  total = (nrOfArticles * (impactFactor - 1)  + 1);
  printf("%d\n", total);
  return 0;
}
