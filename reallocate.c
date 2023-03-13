#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int num;
	int *p;
	p = (int*)malloc(5*sizeof(int)); 
	printf("Enter No of Memory bytes to allocate:");
	scanf("%d",&num);
	printf("size before : %zu\n" ,sizeof(*p));
	p = (int*)realloc(p, 11*sizeof(int));
	printf("size after realloc %zu\n",sizeof(*p));

	int y;
	printf("Do you want to free the memory!? :\n(0/1)==> ");
	scanf("%d",&y);
	if (y==1){
		free(p);
		printf("Freed Memory %zu bytes",sizeof(*p));
	}
}
