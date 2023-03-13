#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	float flot;
	printf("Enter No of Integer:");
	scanf("%d",&num);
	printf("The Requirement memory is %d\n",num*sizeof(int));
	printf("Enter the Number of Float:");
	scanf("%d",&num);
	printf("The Required Memory is %d\n",num*sizeof(flot));
}
