#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("���� �ϳ��� �Է��Ͻÿ�: ");
	scanf("%d",n);
	
	if(n>0){
		printf("����Դϴ�");
	} 
	else if(n==0){
		printf("0 �Դϴ�");
	}else{
		printf("�����Դϴ�");
	}
	return 0;
 
}
