#include <stdio.h>
/* lower: convert c to lower case (ASCII only!!) */
int lower(int c)
{
	return (c >= 'A' && c <= 'Z') ? c + 'a'-'A' : c;
}

void lowerString(char *s)
{
	int i;
	for(i = 0; s[i] != '\0'; i++){
		s[i] = lower(s[i]);
	}
}

int main()
{
	char s[] = "AaBb";			//why cant use char *s???????
	lowerString(s);
	printf("%s\n", s);
}
