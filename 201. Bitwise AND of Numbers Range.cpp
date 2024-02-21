

/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-





// Method 1 : TLE
// class Solution {
// public:
//     int rangeBitwiseAnd(int left, int right) {
//         if(left==right)
//         return 0;
//         int ans=left;
        
//         for(int i=left+1 ;i<=right; i++){
//             ans = ans&i;
//         }
//         return ans;
//     }
// };

//Method 2 : Running optimized code

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        while(right > left)
           right  = right&right-1 ;
        return left & right;

    }
};