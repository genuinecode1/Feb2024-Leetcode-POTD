

/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-



class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        vector<int> v;
        unordered_map<int,int> mp;

        for(auto i:arr)
            mp[i]++;
        for(auto i:mp)
            v.push_back(i.second);

        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(k<=0)
            break;
            int temp = k;
            k -= v[i];
            v[i] -= temp;
        }
        int count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>0)
            count++;
        }
        return count;
    }
};