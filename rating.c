#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,count,j,k,found;
    int rat[100];
    count=0;
    found=0;
    printf("Enter total number of childern:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter rating of student%d:",i+1);
        scanf("%d",&rat[i]);
    }
    for(j=1;j<n;j++){
        if(rat[0]<rat[j]){
            rat[0]=rat[j];
        }
    }
    printf("The student with rating %d will get more chocolate\n",rat[0]);
    printf("Minimum number of chocolate needed is:%d\n",found+n+1);
}
