'''
Median of 2 Sorted Arrays of Different Sizes 
Hard Accuracy: 50.0% Submissions: 14253 Points: 8
Given two sorted arrays array1 and array2 of size m and n respectively. Find the median of the two sorted arrays.

Example 1:

Input:
m = 3, n = 4
array1[] = {1,5,9}
array2[] = {2,3,6,7}
Output: 5
Explanation: The middle element for
{1,2,3,5,6,7,9} is 5
'''
class Solution:
    def MedianOfArrays(self, array1, array2):
            #code here
            res = array1 + array2;
            res.sort()
            if (len(res)%2) == 1:
                return res[len(res)//2]
            else:
                rs = (res[len(res)//2]+res[(len(res)//2)-1])
                if rs % 2 == 0:
                    return int(rs/2)
                return rs/2
