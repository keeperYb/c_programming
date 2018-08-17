#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char out_pool[] = {'A','B','C','D'};
int seeded=0;

void enjoy_enter();/* enjoy pressing ENTER */
void statistic();/* statistic of 10k times of rand	*/
void get_seed();/* real-time random needs real time seed */

void enjoy_enter()
{
	int pool_size = sizeof(out_pool) / sizeof(char);
	printf("Start with pressing Enter!\n");
	while(getchar() != EOF){
		printf("You get a random: ");
		get_seed();
		int index = rand() % pool_size;
		if(out_pool[index] == 'A'){
			printf("Grade A, good!\n");
		}
		else{
			printf("%c\n", out_pool[index]);	
		}
		
	}	
}

void statistic()
{
	int times = 10000;
	int i;
	int eachtimes[1000] = {0};
	int pool_size = sizeof(out_pool)/sizeof(out_pool[0]);
	for(i = 0; i < times; i++){
		get_seed();
		eachtimes[rand() % pool_size] ++; //TODO not real-time random
	}
	printf("times appears of each element :  \n");
	for(i = 0; i < strlen(out_pool); i++){
		printf("%c:\t", out_pool[i]);
		printf("%d\n", eachtimes[i]);
	}
}

void get_seed()
{
	if(!seeded){
		struct timeval time;
		gettimeofday(&time, NULL);
		srand(time.tv_usec);
		seeded = 1;
	}
	else{
		;
	}
}

/* get a random char string	*/
int main()
{
	statistic();
	//enjoy_enter();
}
