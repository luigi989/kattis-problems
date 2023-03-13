#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** args) {
  int nrOfTemps = 0;
  int totColdTemps = 0;
  int *temps = malloc(sizeof(int) *  100);
  if(temps == NULL) {
    perror("malloc");
    exit(1);
  }

  int ret = scanf("%d", &nrOfTemps);
  for(int i = 0; i < nrOfTemps; i++) {
    if(scanf("%d", &temps[i]) != 1) {
      printf("Wrong input, try again\n");
    }
    if(temps[i] < 0)
      totColdTemps++;
  }
  printf("%d\n", totColdTemps);

  return 0;
}
