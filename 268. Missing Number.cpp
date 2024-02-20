

/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-




class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        int count = 0;
        for(auto i:mp){
            if(i.first != count)
            return count;
            else
            count++;
        }
        return nums.size();
    }
};