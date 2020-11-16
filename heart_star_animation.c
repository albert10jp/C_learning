#include <stdio.h>
#include <unistd.h>

int main() {
  int i,j,h,k = 0;

  while (k < 99) {
    /* code */
    h = k % 3;
    printf("\e[1;1H\e[2J");
    printf("\e[?25l");

    i = 0;
    while (i < 3) {
      j = 0;
      while (j < (2 - i) * 2 + h) {
        printf(" ");
        j++;
      }

      j = 0;
      while (j < (i + 2) * 2 - h * 2) {
        printf("* ");
        j++;
      }

      j = 0;
      while (j < (2 - i) * 2 + 1 + h) {
        printf("  ");
        j++;
      }

      j = 0;
      while (j < (i + 2) * 2 - h * 2) {
        printf("* ");
        j++;
      }

      printf("\n");
      i++;
    }
    i = 0;
    while (i < 9) {
      j = 0;
      while (j < i * 2 + h * 2) {
        printf(" ");
        j++;
      }
      j = 0;
      while (j < 17 - i * 2 - h * 4) {
        printf("* ");
        j++;
      }
      printf("\n");
      i++;
    }

    fflush(stdout);
    usleep(200000);
    k++;
  }
}
