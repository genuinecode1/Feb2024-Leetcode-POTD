

/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-




class Solution {
    bool checks(string s,int i,int j,vector<vector<int>>& v){
        if(i>j)
            return true;

        if(v[i][j]!=-1)
            return v[i][j];
        
        if(s[i]==s[j])
            return v[i][j] = checks(s,i+1,j-1,v);

        return v[i][j]=false;
    }
public:
    int countSubstrings(string s) {
        int size = s.size();
        vector<vector<int>> v(size+1,vector<int>(size+1));
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                v[i][j]=-1;
            }
        }
        int count=0;
        for(int i=0;i<size ;i++){
            for(int j=i;j<size;j++){
                if(checks(s,i,j,v))
                    count++;
            }
        }
        return count;
    }
};