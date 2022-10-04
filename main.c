#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	
	int answer = 55;
	int num;
	int count;

		
	do{
		printf("Guess a number: ");
		scanf("%d",&num);
		count++; 
		if(num<answer){
			printf("low\n");
		}
		else if(num>answer){
			printf("hight\n");
		}

		
	}while(num!=answer);
	
	printf("Congratulation! trials: %d",count);
	
	return 0;
	
}
 
