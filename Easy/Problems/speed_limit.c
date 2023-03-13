#include <stdio.h>

int main(int argc, char** args) {
  int mph = 0;
  int total = 0;
  int limit = 0;
  int lastTime = 0;
  int elapsedTime = 0;

  scanf("%d", &limit);
  if(limit >= 1 && limit <= 10) {
    while(limit != -1) {
      for(int i = 0; i < limit; i++) {
        scanf("%d %d", &mph, &elapsedTime);
        if(mph >= 1 && mph <= 90 && elapsedTime >= 1 <= 12) {
          elapsedTime = elapsedTime - lastTime;
          total = total + (mph * elapsedTime);
          lastTime = elapsedTime + lastTime;
        }
      }
      printf("%d miles\n", total);
      lastTime = 0;
      total = 0;
      scanf("%d", &limit);
    }
  }
  return 0;
}
