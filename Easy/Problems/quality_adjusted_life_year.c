#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int constQua;
  double qoL, qoLyears, total;
  scanf("%d", &constQua);
  for(int i = 0; i < constQua; i++)
  {
    scanf("%lf %lf", &qoL, &qoLyears);
    total += qoL * qoLyears;
  }
  printf("%.3lf\n", total);

  return 0;
}
