/*
Link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
Sort an array of 0s, 1s and 2s 
Easy Accuracy: 51.36% Submissions: 100k+ Points: 2
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated into ascending order.

*/

    void sort012(int a[], int n)
    {
        // coode here 
        int l=0,m=0,h=n-1;
        while(m <= h)
        {
            if(a[m] == 0)
            {
                swap(a[l],a[m]);
                
                l++;
                m++;
            }
            else if(a[m] == 1)
                m++;
            else if(a[m] == 2)
            {
                swap(a[m],a[h]);
                h--;
            }
        }
    }
