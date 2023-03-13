#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int nrOfCases, exReNotAd, exReAd, costAd;
  scanf("%d", &nrOfCases);
  for(int i = 0; i < nrOfCases; i++)
  {
    scanf("%d %d %d", &exReNotAd, &exReAd, &costAd);
    if((exReAd - costAd) > exReNotAd)
      printf("advertise\n");
    else if((exReAd - costAd) < exReNotAd)
      printf("do not advertise\n");
    else
      printf("does not matter\n");
  }
  return 0;
}
