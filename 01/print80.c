#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getl(char line[], int maxline);

/**
 * print input lines whose length is greater than 80
*/
int main()
{
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */

	max = 80;
	while ((len = getl(line, MAXLINE)) > 0) {
		if (len > max)
			printf("%s", line);
	}
	return 0;
}

int getl(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}
