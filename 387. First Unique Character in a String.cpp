
/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-


class Solution {
public:
        int firstUniqChar(string s) {

       unordered_map<char,int>mpp;

        for(int i=0;i<s.length();i++)
        {
            mpp[s[i]]++;
        }

        

        for(int i=0;i<s.length();i++)
        {
            if(mpp[s[i]]==1)
            {
            return i;
            break;
            }
        }

        return -1;
    
    }
};