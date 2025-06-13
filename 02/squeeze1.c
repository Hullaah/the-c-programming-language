void squeeze(char s[], int c)
{
	int i, j;

	for (i = j = 0; s[i]; i++) {
		if (s[i] != c)
			s[j++] = s[i];
	}
	s[j] = '\0';
}
