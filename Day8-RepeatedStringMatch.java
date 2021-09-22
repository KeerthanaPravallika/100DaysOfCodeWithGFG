/*

Repeated String Match 
Medium Accuracy: 49.96% Submissions: 11454 Points: 4
Given two strings A and B, find the minimum number of times A has to be repeated such that B becomes a substring of the repeated A. If B cannot be a substring of A no matter how many times it is repeated, return -1.

Example 1:

Input: A = "abcd", B = "cdabcdab"
Output: 3
Explanation: After repeating A three times, 
we get "abcdabcdabcd".
*/

class Solution 
{ 
	static int repeatedStringMatch(String A, String B) 
	{ 
        // Your code goes here
        int count = 1,length = A.length(),i;
        for (i = 0; i < (B.length()/length) + 2; i++)
        {
            if (A.contains(B)) 
                return count;
            else {
                A += A.substring(0,length);
                count++;
            }
        }
        return -1;
	} 
}
