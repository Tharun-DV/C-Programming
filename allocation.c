#include<stdio.h>
#include<stdlib.h>

int mallocate(){
  int num;
  printf("Enter No of Memory Block Needed:");
  scanf("%d",&num);

  int *ptrm = (int *)malloc(num*sizeof(int));
  if (ptrm==NULL){
    printf("Memory is FUll!");
  }
  else{
  printf("Memory is Sucessfully allocated and Toatal Memory allocated is : %zu bytes\n",sizeof(*ptrm));}
}

int callocate(){
  int num;
  int size;
  
  printf("Enter No of Memory Block Needed:");
  scanf("%d",&num);

  printf("Enter size of Each Memory Block:");
  scanf("%d",&size);
  int *ptrc = (int *)calloc(num,size);
  if (ptrc==NULL){
    printf("Memory is Not Avaible");
  }
  else{
    printf("Memoery is successfully allocated and Total Memory allocated is : %zu bytes\n",sizeof(*ptrc));
  }
}


int main(){
  int j=0;
  int catch;
  while (j<1){
    printf("1.malloc\n2.calloc\n-->");
    scanf("%d",&catch);
    if (catch==1){
      mallocate();
    }else if(catch==2){
      callocate();
    }
    else{
      break;
    }
  }
}

