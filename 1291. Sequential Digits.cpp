
/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-


class Solution {
public:
    int countDigits(int temp){
        int count=0;
        while(temp!=0){
            count++;
            temp /= 10;
        }
        return count;
    }
    vector<int> sequentialDigits(int low, int high) {
        int count1=countDigits(low);
        int count2=countDigits(high);
        vector<int> ans;
        string temp="123456789";
        while(count1<=count2){
            for(int i=0;i<10-count1;i++){
                int r = stoi(temp.substr(i, count1));
                if(r>=low && r<=high)
                ans.push_back(r);
            }
            count1++;
        }
       
       
      return ans;
    }
};