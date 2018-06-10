/* This program finds the longest line in the input,
 * but with the extern variables.
 */
#include <stdio.h>
#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(coid);


int main()
{
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while((len = getline_my()) > 0){
		if (len > max){
			max = len;
			copy();
		}
		else{;}
	}
	if(max > 0){
		printf("%s", longest);
	}
	else{
		printf("There is no line!\n");
	}
	return 0;
}

int getline_my(void)
{
	int c, i;
	extern char line[];

	for(i = 0; i < MAXLINE - 1 &&
	(c=getchar()) != EOF && c != '\n'; ++i){
		line[i] = c;	
		}
	if(c == '\n'){
		line[i] = c;
		++i;
	}
	l




	
	return i;
}

void
