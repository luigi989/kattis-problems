#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int nrOfMatches, width, height, match;
  scanf("%d %d %d", &nrOfMatches, &width, &height);
  int pyt = sqrt(width*width + height*height);
  for(int i = 0; i < nrOfMatches; i++)
  {
    scanf("%d", &match);
    if(match <= pyt)
      printf("DA\n");
    else
      printf("NE\n");
  }
  return 0;
}
