#include <stdio.h>
#include <ctype.h>

int htoi(const char *string);

int main()
{
	printf("0xff -> %d\n", htoi("0xff"));
	printf("0XFF -> %d\n", htoi("0XFF"));
	printf("ff -> %d\n", htoi("ff"));
	printf("FF -> %d\n", htoi("FF"));
}

int htoi(const char *string)
{
	int result = 0, i = 0;
	int c;

	if (string[i] == '0' && (string[i + 1] == 'x' || string[i + 1] == 'X'))
		i += 2;

	while (((c = tolower(string[i])) >= 'a' && c <= 'f') || isdigit(c)) {
		result *= 16;
		if (isdigit(c))
			result += c - '0';
		else
			result += c - 'a' + 10;
		++i;

	}
	return result;
}
