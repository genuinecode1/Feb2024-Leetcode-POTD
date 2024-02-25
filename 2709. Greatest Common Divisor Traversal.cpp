/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-


class Solution {
public:
    unordered_map<int, vector<int>> f,ff;
    unordered_map<int,bool> vis2;
	
	void dfs(int pos,vector<bool> &vis){
        if(vis[pos]==true) return;
        vis[pos]=true;
        for(auto &node : ff[pos]){
            if(vis2.count(node)) continue;
            vis2[node]=true;
            for(auto &ch : f[node]){
                if(vis[ch]==true) continue;
                dfs(ch,vis);
            }
        }
    }
	
	
    bool canTraverseAllPairs(vector<int>& nums) {
        int i=0;
        for (auto &x : nums) {
            for (int j = 2; j * j <= nums[i]; j++) {
                if (x%j == 0) {
                    f[j].push_back(i);
                    ff[i].push_back(j);
                    while (x % j == 0) {
                      x /= j;
                    }
                }
            }
            if (x > 1) {f[x].push_back(i);ff[i].push_back(x);}
            i++;
        }
        
       
        vector<bool> vis(nums.size(),false);
        dfs(0,vis);
        
        for(int i=0;i<vis.size();i++) if(vis[i]==false) return false;
        return true;
    }
};