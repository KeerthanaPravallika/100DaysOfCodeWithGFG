/*
K-th element of two sorted Arrays 
Medium Accuracy: 50.09% Submissions: 28243 Points: 4
Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K. The task is to find the element that would be at the k’th position of the final sorted array.
 

Example 1:

Input:
arr1[] = {2, 3, 6, 7, 9}
arr2[] = {1, 4, 8, 10}
k = 5
Output:
6
Explanation:
The final sorted array would be -
1, 2, 3, 4, 6, 7, 8, 9, 10
The 5th element of this array is 6.*/

    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int res=0,count=0;
        int a1 = 0,a2 = 0,i,j;
        for(a1=0,a2=0;a1<n && a2<m;)
        {
            if(arr1[a1] > arr2[a2])
            {
                res = arr2[a2];
                a2++;
                count++;
            }
            else
            {
                res = arr1[a1];
                a1++;
                count++;
            }
            if(count == k)
                break;
        }
        if(count == k)
            return res;
        else
        {
            if(m > n)
            {
                for(j=a2;j<m;j++)
                {
                    count++;
                    if(count == k)
                        break;
                }
                if(count == k)
                    return arr2[j];
            }
            else
            {
                for(j=a1;j<n;j++)
                {
                    count++;
                    if(count == k)
                        break;
                }
                if(count == k)
                    return arr1[j];
            }
            
        }
    }
