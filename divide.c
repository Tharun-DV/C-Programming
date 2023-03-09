#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    int result=0;
    printf("Enter Number:");
    scanf("%d",&n1);
    printf("Enter Number:");
    scanf("%d",&n2);
    while(n1>=n2){
        n1=n1-n2;
        result++;
    }
    printf("Ans: %d", result);

    return 0;
}