#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);


	for(int x=1; x<=n; x++){
		for(int y=1; y<=x; y++){
			printf("%d ", y);
		}

		printf("\n");
	}

	return 0;
}