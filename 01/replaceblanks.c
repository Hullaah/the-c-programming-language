#include <stdio.h>
#include <stdbool.h>

int main() {
  int c;
  bool prev_blank = false;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      prev_blank = true;
    else if (prev_blank) {
      putchar(' ');
      putchar(c);
      prev_blank = false;
    }
    else
      putchar(c);
  }
  return 0;
}
