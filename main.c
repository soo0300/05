#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("���� �ϳ��� �Է��Ͻÿ�: ");
	scanf("%d",n);
	
	if(n<0){
		printf("���밪�� %d�Դϴ� ",-n);
	}else{
		printf("���밪�� %d �Դϴ�",n);
	}
	return 0;
 
}
