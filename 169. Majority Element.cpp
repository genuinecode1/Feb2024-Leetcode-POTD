


/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-







class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int num,maxi = INT_MIN;
        for(auto i:nums)
            mp[i]++;
        for(auto i:mp){
            if(i.second>maxi){
            num = i.first;
            maxi = i.second;
            }
        }
        return num;
    }
};