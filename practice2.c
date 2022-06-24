#include <stdio.h>

int main(void)
{
	for(int x=0; x<7; x++){
		for(int y=0; y<7; y++){
			if(y < 7-x-1){
				printf(" ");
			}
			else{
				printf("*");
			}
		}

		printf("\n");
	}

	return 0;
}