#include <stdio.h>

int any(char s1[], char s2[]);

int main()
{
	printf("%d\n", any("Hello", "World"));
}

int any(char s1[], char s2[])
{
	int i, j;

	for (i = 0; s1[i]; i++) {
		for (j = 0; s2[j]; j++) {
			if (s1[i] == s2[j])
				return i;
		}
	}
	return -1;
}
