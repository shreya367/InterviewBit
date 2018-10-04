/*Given a binary tree, return the preorder traversal of its nodes’ values.*/

vector<int> Solution::preorderTraversal(TreeNode* A){
    vector<int> Answer;
    stack<TreeNode*> stac;
    if(!A) return Answer;
    
    stac.push(A);
    while(stac.empty()==false){
        struct TreeNode* TreeNod = stac.top();
        Answer.push_back(TreeNod -> val);
        stac.pop();
        
        if(TreeNod -> right)
            stac.push(TreeNod -> right);
        if(TreeNod -> left)
            stac.push(TreeNod -> left);
    }
    return Answer;
    
    
}
