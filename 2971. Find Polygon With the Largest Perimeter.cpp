


/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-



class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        vector<long long> temp;
        sort(nums.begin(),nums.end());
        long long temp2=nums[0];
        temp.push_back(temp2);
        for(int i=1;i<nums.size();i++){
            temp2 += nums[i];
            temp.push_back(temp2);
        }
        int i=nums.size()-1;
        int j=temp.size()-2;
        while(i!=0 && j!=0){
             if(temp[j]>nums[i])
             break;
             i--;
             j--;
        }
        if(j==0)
        return -1;
        return temp[j+1];
    }
};