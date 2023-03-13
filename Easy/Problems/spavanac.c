#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int hour, minuts;
  scanf("%d %d", &hour, &minuts);
  if(minuts > 45)
  {
    minuts -= 45;
  }
  else
  {
    if(hour == 0)
      hour = 23;
    else
      hour--;
    minuts += 15;
  }
  printf("%d %d\n", hour, minuts);
  return 0;
}
