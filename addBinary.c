//addBinary
#include<stdio.h>
#include<string.h>

int addBinary(char a[],char b[]){
  
  bool carry;
  char result[];
  
  carry=false;
  b1=strlen(a);
  b2=strlen(b);

  for (int j=0 ; j<b1 ;j++){
    i1 = strlen(b1)-1-j;
    i2 = strlen(b2)-1-j;

    int count_ones=0;
    if (!strcmp(b1[i1],"1")){
      count_ones +=1;
    }
    if ( (i2>=0) & (!strcmp(b2[i2],"1") ){
      count_ones +=1;
    }
    if carry{
      count_ones +=1;
    }
    if (count_ones % 2==0){
      result[strlen(result)]="0"
    }else{
      result[strlen(result)]="1"
    }
    if (count_ones > 1){
      carry=True;
    }else{
      carry=false;
    }
    
  }
  if (carry){
    result[strlen(result)]="1"
  }
  for (int temp=strlen(result);temp >=0;temp--){
    printf("%d",result[temp]);
  }
}

int main(){
 char a[]="1111";
  char b[]="11";
  addbinary(a,b);
}
