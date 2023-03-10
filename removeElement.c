#include<stdio.h>
int removeElement(int* nums, int numsSize, int val){
    int count=0,temp;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=val)
        {
            temp=nums[i];
            nums[i]=nums[count];
            nums[count]=temp;
            count++;
        }
    }
    return count;

}
int main(){
    //int val[5]={1,2,2,2,5};
    int hell;
    int Num;
    int as;
    printf("Enter No of inputs:");
    scanf("%d",&hell);
    int val[hell];
    for (int i=0; i<hell; i++){
        printf("Enter value :");
        scanf("%d",&as);
        val[i] = as;
    }
    printf("Enter No to be removed:");
    scanf("%d",&Num);
    
    hell=removeElement(val,hell,Num);
    
    for (int j=0; j < hell ; j++){
        printf("%d\n",val[j]);
    }
}