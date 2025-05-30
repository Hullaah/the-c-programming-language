#include <stdio.h>

int main() {
  long nl;
  int c;

  for (nl = 0; (c = getchar()) != EOF;) {
    if (c == '\n')
      ++nl;
  }
  printf("%ld\n", nl);
}
