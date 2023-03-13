#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MAX_PIECES = 6;

int main(int argc, char** args) {
  int ret;
  int nrOfPiece = 0;
  int outputSet[6];
  int checkSet[] = {1, 1, 2, 2, 2, 8};

  for(int i = 0; i < MAX_PIECES; i++) {
    ret = scanf("%d", &nrOfPiece);
    if(nrOfPiece >= 0 && nrOfPiece <= 10) {
      if(nrOfPiece > checkSet[i] || nrOfPiece < checkSet[i]) {
        outputSet[i] = checkSet[i] - nrOfPiece;
      }
      else {
        outputSet[i] = 0;
      }
      printf("%d ", outputSet[i]);
    }
  }
  printf("\n");
  return 0;
}
