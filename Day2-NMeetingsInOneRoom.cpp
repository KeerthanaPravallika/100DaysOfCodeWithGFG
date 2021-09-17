/*
N meetings in one room 
Easy Accuracy: 43.1% Submissions: 50507 Points: 2
There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?

Note: Start time of one chosen meeting can't be equal to the end time of the other chosen meeting.


Example 1:

Input:
N = 6
start[] = {1,3,0,5,8,5}
end[] =  {2,4,6,7,9,9}
Output: 
4
Explanation:
Maximum four meetings can be held with
given start and end timings.
The meetings are - (1, 2),(3, 4), (5,7) and (8,9)
*/

public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    struct meetTime
    {
        int start;
        int end;
        int pos; 
    }; 
    static bool compare(struct meetTime m1, meetTime m2) 
    { 
        if (m1.end < m2.end)
            return true; 
        else if(m1.end > m2.end) 
            return false; 
        else if(m1.pos < m2.pos) 
            return true; 
        return false; 
    } 
    int maxMeetings(int s[], int e[], int n)
    {
        // Your code here
        struct meetTime meet[n]; 
        
        for(int i = 0;i<n;i++) 
        {
            meet[i].start = s[i];
            meet[i].end = e[i];
            meet[i].pos = i+1; 
        }
        
        sort(meet, meet+n, compare); 
        
        vector<int> res;
        
        int limit = meet[0].end; 
        
        res.push_back(meet[0].pos); 
        
        for(int i = 1;i<n;i++) 
        {
            if(meet[i].start > limit) 
            {
                limit = meet[i].end; 
                res.push_back(meet[i].pos); 
            }
        }
        return res.size();
        
    }
