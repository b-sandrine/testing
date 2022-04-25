#include <stdio.h>

int main(){
	int input,i,j=0,k,space;
	printf("************** WELCOME TO OUR DESIGN PATERNS APP ****************\n");
	while(1){
		printf("Please input a number: ");
		scanf("%d", &input);
		
		if(input%2 == 1) {
			printf("Please enter a valid input. And try again later!");
			return;
		}
		
		space = input;
		
		while(j<input){
			
			for(k = 0; k < space; k++){
				printf(" ");
			}
			space -= 1;
			for(i=0;i<=j;i++){
				printf("*");
			}
			printf("\n");
			j++;
		}

	}
	getch();
	
}
