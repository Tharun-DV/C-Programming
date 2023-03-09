#include <stdio.h>
#include <stdlib.h>
int main(){
int n,r,sum=0,temp;
printf("Enter Numbers: ");
scanf("%d",&n);
temp=n;
while(n>0)
  {
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
  }

if(temp==sum)
printf("The Number is palindrome number");

else
printf("The Number is Not a Palindrome number");

return 0;
}