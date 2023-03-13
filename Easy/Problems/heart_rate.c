#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int cases, beats;
  double seconds, bpm, minAbpm, maxAbpm;
  scanf("%d", &cases);
  for(int i = 0; i < cases; i++)
  {
    scanf("%d %lf", &beats, &seconds);

    bpm = (60 * beats) / seconds;
    minAbpm = bpm - (60 / seconds);
    maxAbpm = bpm + (60 / seconds);
    printf("%.4lf %.4lf %.4lf\n", minAbpm, bpm, maxAbpm);
  }

  return 0;
}
