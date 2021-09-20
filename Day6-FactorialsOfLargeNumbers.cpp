/*
Factorials of large numbers 
Medium Accuracy: 51.61% Submissions: 23843 Points: 4
Given an integer N, find its factorial.

Example 1:

Input: N = 5
Output: 120
Explanation : 5! = 1*2*3*4*5 = 120*/

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        int carry,product;
        vector<int> result;
        
        result.push_back(1);
        
        for(int x=2;x<=N;x++)
        {
            carry=0;
            for(int i=0;i<result.size();i++)
            {
                product =result[i]*x+carry;
                result[i]=product%10;
                carry=product/10;
            }
            while(carry!=0)
            {
                result.push_back(carry%10);
                carry/=10;
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
