#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    struct TreeNode * left;
    struct TreeNode * right;
};


class Solution{
    public:
    bool getPath(TreeNode* root,vector<int> arr,int B){
        if(!root){
            return false;
        }
        arr.push_back(root->val);
        if(root->val==B){
            return true;
        }
        if(getPath(root->left,arr,B)|| getPath(root->right,arr,B)){
            return true;
        }

        arr.pop_back();
        return false;

    }
    vector<int> Solution::solve(TreeNode* A,int B){
        vector<int> arr;
        if(A==NULL){
            return arr;
        }
        getPath(A,arr,B);
        return arr;
    }
};                        