/* replace tabs with the proper number of blanks
 * one tab increment size is 8
 */

#include <stdio.h>

#define TABINC 8

int main()
{
	int c, nb, pos;

	nb = 0;				/* num of blanks */
	pos = 1;
	while((c = getchar()) != EOF){
		if('\t' == c){
			nb = TABINC - (pos - 1) % TABINC;
			while(nb > 0){
				putchar(' ');
				++pos;
				--nb;
			}
		}
		else if('\n' == c){
			putchar(c);
			pos = 1;
		}
		else{
			putchar(c);
			++pos;
		}
	}
}
