
/*
 *
 * Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
 * Return the running sum of nums.
 *
 */

#include<stdlib.h>

int* runningSum(int* num, int numSize)
{
  int vcurrent_sum = 0;
  int* result = (int*)malloc(sizeof(numSize + 1));

  for(int i = 0; i < numSize; i++){
      vcurrent_sum += num[i];
      result[i] = vcurrent_sum;
  }

  return result;
}

