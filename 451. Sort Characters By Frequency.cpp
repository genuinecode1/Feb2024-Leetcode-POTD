





/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-


class Solution {

    bool cmp(pair<string, int>& a, pair<string, int>& b) {
    return a.second < b.second; 
    }

public:
    string frequencySort(string s) {
    map<char,int>mp;
    for(auto i:s)
    mp[i]++;

    vector<pair<int,char>> nums;
    for(auto it : mp)    
        nums.push_back({it.second,it.first});
        
    sort(nums.rbegin(),nums.rend());
 

    string ans;
    for(int i =  0 ; i < nums.size() ; i++){
        int x = nums[i].first;
        while(x>0){
         ans.push_back(nums[i].second);
         x--;
        }
    }
    return ans;
    }
};