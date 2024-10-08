#include <stdio.h>

int main(){
	
	for(int i = 1; i<=9; i++){
		printf("rafi(%d)\n",i);
	}
	printf("\n");
	int x = 1;
	while(x <= 9){
		printf("rafiii(%d)\n",x);
		x += 1;
	}
	printf("\n");
	x -= 9;
	do{
		printf("coeg(%d)\n",x);
		x += 1;
	}while(x <= 9);
	
}