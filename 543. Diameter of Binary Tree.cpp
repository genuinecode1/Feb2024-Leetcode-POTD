

/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/

// code :-

class Solution
{
private:
    int diameter(TreeNode *curr, int &res)
    {

        if (!curr)
            return 0;

        int left = diameter(curr->left, res);
        int right = diameter(curr->right, res);

        res = max(res, left + right);

        return max(left, right) + 1;
    }

public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        int res = 0;
        diameter(root, res);
        return res;
    }
};