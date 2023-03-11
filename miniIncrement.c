#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
     return ( *(int*)a - *(int*)b );
  }

int minincrement(int val[],int hell){
  int size=sizeof(int);
  qsort(val, hell, size ,cmpfunc);
  int counter=0;
  for(int k=1;k<hell;k++){
    if (val[k] <= val[k-1]){
      counter += val[k-1] - val[k]+1;
      val[k]=val[k-1]+1;
    }
  }
  return counter;
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
     result = minincrement(val,hell);
     printf("\n%d",result);     
     /*for (int j=0; j < hell ; j++){
     printf("%d\n",val[j]);
        }*/
  }
  
 