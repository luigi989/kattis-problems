#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int nrOfLawns;
  double costOfSeed, width, length, totCost, totArea;
  scanf("%lf", &costOfSeed);
  scanf("%d", &nrOfLawns);
  for(int i = 0; i < nrOfLawns; i++)
  {
    scanf("%lf %lf", &width, &length);
    totArea = totArea + (width * length);
  }
  totCost = costOfSeed * totArea;
  printf("%.7lf\n", totCost);
  return 0;
}
