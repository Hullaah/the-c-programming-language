void strcat(char s[], char t[])
{
	int i, j;

	i = j = 0;
	while (s[i])
		i++;
	while ((s[i++] = t[j++]))
		;
}
