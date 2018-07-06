#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void enjoyEnter(char pool[]);/* enjoy pressing ENTER */
void statistic(char pool[]);/* statistic of 10k times of rand	*/

void enjoyEnter(char pool[])
{
	while(getchar() != EOF){
		printf("You get a random: ");
		int index = rand() % strlen(pool);
		if(pool[index] == 'a'){
			printf("a grade, GOOD!\n");
		}
		else{
			printf("%c\n", pool[index]);	
		}
		
	}	
}

void statistic(char pool[])
{
	int times = 10000;
	int i;
	int eachtimes[1000] = {0};
	for(i = 0; i < times; i++){
		eachtimes[rand() % strlen(pool)] ++;
	}
	printf("times appears of each element :  \n");
	for(i = 0; i < strlen(pool); i++){
		printf("%d\n", eachtimes[i]);
	}
}

/* get a random char string	*/
int main()
{
	char pool[] =
	  { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
        'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
        'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
        'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' }; 
	//statistic(pool);
	//enjoyEnter(pool);
}
