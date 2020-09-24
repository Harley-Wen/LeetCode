/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i,j;
    int *array = malloc(sizeof(int)*2);
    for(i=0; i<numsSize; i++)
    {
        for(j=0; j<numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                if(i == j)
                {
                    continue;
                }
                else
                {
                    array[0]=i;
                    array[1]=j;
                    printf("i = %d ",i);
                    printf("j = %d ",j);
                    *returnSize = 2;

                    return array;
                }
            }
        }
    }

    return NULL;
}

int main()
{
    int nums[4] = {2, 7, 11, 15};
    int i;
    int *result;
    int numsSize = 4;
    int target = 9;
    int returnSize = 0;
    result = twoSum(nums, 4, 9, &returnSize);
    printf("%d\n", returnSize);
    if(NULL == result)
    {
        return -1;
    }
    for(i = 0;i < returnSize ;i++)
    {
        printf("%d\n", result[i]);
    }
    free(result);
    return 0;
}
