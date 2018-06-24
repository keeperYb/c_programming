#include <stdio.h>
#include <string.h>

void itoa(int n, char s[]);
void reverse(char s[]);

/* itoa: convert integer n to sting and store it in s 	*/
void itoa(int n, char s[])
{
	int i, sign;
	if((sign = n) < 0){
		n = -n;
	}
	else{
		n = n;
	}
	i = 0;
	do{
		s[i] = n % 10 + '0';	
		i++;
		n /= 10;
	}while(n > 0);
	if(sign < 0){
		s[i] = '-';
		i++;
	}
	else{;
	}
	s[i] = '\0';
	reverse(s);
}

/* reverse: reverse each position of s 					*/
void reverse(char s[])
{
	int tmp, i, j;
	for(i = 0, j = strlen(s) - 1; 
		i < j; 
		i++, j--)
	{
		tmp = s[i],	s[i] = s[j], s[j] = tmp;
	}
}

int main()
{
	char s[] = "000000"; 
	int i = -12345;
	itoa(i, s);	
	printf("%d after itoa is %s\n", i, s);
}
