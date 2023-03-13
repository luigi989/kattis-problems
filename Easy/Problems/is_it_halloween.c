#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int date;
  char month[3];
  scanf("%s %d", &month, &date);
  if(strcmp(month, "OCT") == 0 && date == 31 ||
     strcmp(month, "DEC") == 0 && date == 25)
  {
    printf("yup\n");
  }
  else
    printf("nope\n");
  return 0;
}
