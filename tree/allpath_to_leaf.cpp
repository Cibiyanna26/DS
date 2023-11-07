#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    struct TreeNode * left;
    struct TreeNode * right;
};
class Solution {
public:
    
    bool allpath(TreeNode * root, vector<string>& arr,string& temp){
        if(!root)return false;
        temp+=to_string(root->val)+"->";

        bool left = allpath(root->left,arr,temp);
        bool right = allpath(root->right,arr,temp);

        if(left == false && right == false){
            temp.pop_back();
            temp.pop_back();
            arr.push_back(temp);
            for(auto x :arr)cout<<x<<" ";
            cout<<endl;
            
            return true;
        }

        arr.pop_back();
        return false;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> arr;
        string temp;
        allpath(root,arr,temp);
        return arr;
    }
};