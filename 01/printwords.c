#include <stdio.h>
#include <stdbool.h>

int main() {
  int c;
  bool printed_char, printed_newline;

  printed_char = printed_newline = false;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (printed_char && !printed_newline) {
        putchar('\n');
        printed_newline = true;
      }
      printed_char = false;
    }
    else {
      putchar(c);
      printed_char = true;
      printed_newline = false;
    }
  }
}
