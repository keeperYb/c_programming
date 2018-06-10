/* This program finds out the longest line in a given text.
 * 
 * The keypoint is getchar(), it gets a char and goes to the next.
 * And 'returning from getline_my()' 
 * just pauses the execution of getchar(), doesnt stop it.
 */

#include <stdio.h>
#define MAXLINE 1000  /* max length of a line */

int getline_my(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest line */
int main()
{
	int len;              // length of the current line
	int max;              // length of the longest line now
	char line[MAXLINE];   // current input line
	char longest[MAXLINE];// longest input line
	
	max = 0;
	while((len = getline_my(line, MAXLINE)) > 0)
		if(len > max){
		   max = len;
		   copy(longest, line);
		}
		else{;}
	if(max > 0){
		printf("%s", longest);
	}
	else{
		printf("the max length is 0!\n");
	}
	return 0;
}

/* getline_my: read one line into line[], return the length of line */
int getline_my(char line[], int maxline)
{
	int c, i;
	for(i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i){
		line[i] = c;
	}
	if(c == '\n'){
		line[i] = c;
		++i;
	}
	else{;}
	line[i] = '\0';
	int len = (i - 0 + 1) - 1;
	return len;
}

/* copy: copy 'from' to 'to' */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
