/* convert hexadecimal string to decimal number */
#define YES	1
#define NO	0

#include <stdio.h>
int htoi(char s[])
{
	int i = 0;
	if(s[i] == '0'){
		++i;
		if(s[i] == 'x' || s[i] == 'X'){
			++i;
		}
		else{;}
	}
	else{;}
	int rst = 0;
	int inhex = YES;
	int hexdigit;
	for( ; inhex == YES; ++i){
		if(s[i] >= '0' && s[i] <= '9'){
			hexdigit = s[i] - '0';
		}
		else if(s[i] >= 'a' && s[i] <= 'f'){
			hexdigit = s[i] - 'a' + 10;
		}
		else if(s[i] >= 'A' && s[i] <= 'F'){
			hexdigit = s[i] - 'A' + 10;
		}
		else{
			inhex = NO;
		}
		if(inhex == YES){
			rst = rst * 16 + hexdigit;
		}
	}
	return rst;
}

int main()
{
	char hex[] = "0x1f"; 		/* output should be 31 */
	int integer;
	integer = htoi(hex);
	printf("integer is : %d\n", integer);
}
