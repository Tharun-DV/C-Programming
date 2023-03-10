#include<stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    register int i;
    for (i = 0; i < numsSize && target > nums[i]; i++);
    return i;
}


int main(){
    int hell;
    int Num;
    int as;
    int test;
    printf("Enter No of inputs:");
    scanf("%d",&hell);
    int val[hell];
    for (int i=0; i<hell; i++){
        printf("Enter value :");
        scanf("%d",&as);
        val[i] = as;
    }
    printf("Enter Target:");
    scanf("%d",&Num);
    
    test=searchInsert(val,hell,Num);
    printf("The index of value %d, is %d",Num,test);
    
}