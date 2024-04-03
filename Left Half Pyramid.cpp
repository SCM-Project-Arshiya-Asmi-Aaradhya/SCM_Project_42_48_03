#include<stdio.h>

int main(){
	int i,n,j,k;
	printf("Enter no. of rows: ");
	scanf("%d",&n);
	i = 1;
	while(i<=n){
		j=1;
		while (j<=n-i){
			printf(" ");
			j = j+1;
		}
		k=1;
		while(k<=i){
			printf("*");
			k = k+1;
		}
		printf("\n");
		i = i+1;
	} 
	
	return 0;
}
