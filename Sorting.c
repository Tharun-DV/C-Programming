#include<stdio.h>

void swap(int* x, int* y){
  int temp=*x;
  *x=*y;
  *y=temp;
}


void sorting(int val[],int hell){
  int l,m;
  for (int l=0;l<hell;l++){
    for (int m=0;m<hell-l-1;m++){
      if(val[m] > val[m+1]){
        swap(&val[m],&val[m+1]);
      }
    }
  }
}
int main(){

        int hell;
        int Num;
        int as;
        int result;
        printf("Enter No of inputs:");
        scanf("%d",&hell);
        int val[hell];
        for (int i=0; i<hell; i++){
                printf("Enter value :");
                scanf("%d",&as);
                val[i] = as;}
  
        sorting(val,hell);
        printf("The Sorted array is:");
        for (int j=0; j < hell ; j++){
         printf(" %d ",val[j]);
            }
    }
