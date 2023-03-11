#include<stdio.h>
#include<string.h>

int main(){
  char palindrome[1001];
  printf("Enter String:");
  scanf("%s",palindrome);
  int n = strlen(palindrome);
  int mid = (n-1)/2;
  int i=0;
  while (i < mid && palindrome[i] == palindrome[n-1-i]){
    i++;
  }
  if (i == mid && n%2==1){
    palindrome[n-1]='a';
    palindrome[i]='a';
  }else{
    palindrome[n-1-i]='a';
  }
  printf("lexicographically smallest one possible is :%s\n",palindrome);
  return 0;
}
