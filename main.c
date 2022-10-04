#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("정수 하나를 입력하시오: ");
	scanf("%d",n);
	
	if(n<0){
		printf("절대값은 %d입니다 ",-n);
	}else{
		printf("절대값은 %d 입니다",n);
	}
	return 0;
 
}
