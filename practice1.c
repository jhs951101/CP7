#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int n;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);

	if(n < 0)
		n *= -1;

	if(n == 0){
		printf("약수: 0\n");
	}
	else if(n == 1){
		printf("약수: 1\n");
	}
	else{
		printf("약수: 1 ");

		for(int i=2; i<=n/2; i++){
			if(n%i == 0)
				printf("%d ", i);
		}

		printf("%d\n", n);
	}
	
	return 0;
}