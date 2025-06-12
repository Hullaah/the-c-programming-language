#include <stdio.h>

int main()
{
	long nt = 0, nl = 0, nb = 0;
	int c;

	for (; (c = getchar()) != EOF;) {
		if (c == '\t')
			++nt;
		else if (c == ' ')
			++nb;
		else if (c == '\n')
			++nl;
	}
	printf("Number of new lines: %ld\n", nl);
	printf("Number of tabs: %ld\n", nt);
	printf("Number of blanks: %ld\n", nb);
	return 0;
}
