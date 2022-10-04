#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
	int n; int i;

	int sum=0;
	printf("input a number: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		sum+=i;
	}
	printf("The result is %d",sum);

	return 0;


} 
