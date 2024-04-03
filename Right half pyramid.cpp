#include<stdio.h>

int main(){
	int i,n,j;
	printf("Enter no. of rows: ");
	scanf("%d",&n);
	i = 1;
	while(i<=n){
		j=1;
		while (j<=i){
			printf("*");
			j = j+1;
		}
		printf("\n");
		i = i+1;
	} 
	
	return 0;
}
