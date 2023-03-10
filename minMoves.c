#include <stdio.h>
#include <stdlib.h>

int minMoves(int* nums, int numsSize) {
    int moves = 0;
    int count[100001] = {0}; // assuming the range of integers is from 0 to 100000
    
    for(int i=0; i<numsSize; i++) {
        if(count[nums[i]] > 0) {
            int diff = count[nums[i]];
            moves += diff;
            nums[i] += diff;
        }
        count[nums[i]]++;
    }
    
    return moves;
}

int main() {
    int numsSize;
    
    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);
    
    int* nums = (int*)malloc(numsSize * sizeof(int));
    
    printf("Enter the elements of the array:");
    for(int i=0; i<numsSize; i++) {
        scanf("%d", nums + i);
    }
    
    int moves = minMoves(nums, numsSize);
    
    printf("The minimum number of moves to make every value in the array unique is: %d", moves);
    
    free(nums);
    
    return 0;
}

