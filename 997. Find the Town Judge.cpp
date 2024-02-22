

/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-


class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1 && trust.size()==0)
        return 1;
        map<int,int> mp1;
        map<int,int> mp2;
        for(int i=0;i<trust.size();i++){
            mp1[trust[i][0]]++;
            mp2[trust[i][1]]++;
        }
        for(auto i:mp2){
            bool temp=true;
            for(auto it:mp1){
                 if(i.first==it.first){
                     temp=false;
                     break;
                 }
            }
            if(temp && i.second == n-1)
            return i.first;
        }
        return -1;
    }
};