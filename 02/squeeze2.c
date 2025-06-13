#include <stdbool.h>
#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main()
{
	char s1[] = "Hello";
	char s2[] = "World";

	squeeze(s1, s2);
	printf("%s\n", s1);

	return 0;
}

void squeeze(char s1[], char s2[])
{
	int i, j, k, c;

	for (i = j = 0; s1[i]; i++) {
		for (k = 0; s1[i] && (c = s2[k]); k++) {
			if (s1[i] == c) {
				i++;
				k = 0;
			}
		}
		s1[j++] = s1[i];
	}
	s1[j] = '\0';
}
