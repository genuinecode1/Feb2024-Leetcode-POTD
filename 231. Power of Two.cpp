

/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        return ((n==1) || (n%2==0 && isPowerOfTwo(n/2)));
    }
};