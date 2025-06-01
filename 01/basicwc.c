#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word*/

/**
 * count lines, words and characters in input
 */

int main() {
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == nl)
      ++nl;
    if (c == ' ' || c == '\t' || c == '\n')
      state = OUT;
    else {
      state = IN;
      ++nw;
    }
    printf("%d %d %d\n", nl, nw, nc);
  }
}
