

/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-


class Solution {
public:
    bool isSameTree(TreeNode* r1, TreeNode* r2) {
        if (r1==NULL && r2==NULL)
        return true;
        
        if(r1!=NULL && r2==NULL)
        return false;
        
        if(r1==NULL && r2!=NULL)
        return false;
        
        bool left=isSameTree(r1->left,r2->left);
        bool right=isSameTree(r1->right,r2->right);
        
        bool value=r1->val==r2->val;
        
        if(left && right && value)
        return true;
        else
        return false;
    }
};