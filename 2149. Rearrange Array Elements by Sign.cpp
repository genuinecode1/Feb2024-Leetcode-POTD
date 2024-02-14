




/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-



class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        vector<int> positive;
        vector<int> negative;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
            positive.push_back(nums[i]);
            if(nums[i]<0)
            negative.push_back(nums[i]);
        }
        for(int i=0;i<positive.size();i++){
            ans.push_back(positive[i]);
            ans.push_back(negative[i]);
        }
        return ans;
    }
};