#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MAXLIMIT = 7;

int main(int argc, char** args) {
  int ret;
  int nrOfEvents = 0;      // 0 >= x <= 100
  int nrOfPeople = 0;      // 0 >= p <= 200
  int currNrOfPeople = 0;
  int rejectedGroups = 0;
  int fireSafetyLimit = 0; // 1 >= L <= 200
  char event[MAXLIMIT];
  char enter[] = "enter";

  ret = scanf("%d %d", &fireSafetyLimit, &nrOfEvents);
  if((fireSafetyLimit > 0 && fireSafetyLimit <= 200) &&
      (nrOfEvents >= 0 && nrOfEvents <= 100)) {
      for(int i = 0; i < nrOfEvents; i++) {
        ret = scanf("%s %d", event, &nrOfPeople);
        if(nrOfPeople > 0 && nrOfPeople <= 200) {
          if(strcmp(event, enter) == 0) {
            if(currNrOfPeople + nrOfPeople <= fireSafetyLimit) {
              currNrOfPeople += nrOfPeople;
            }
            else {
              rejectedGroups++;
            }
          }
          else {
            currNrOfPeople -= nrOfPeople;
          }
        }
      }
    printf("%d\n", rejectedGroups);
  }

  return 0;
}
