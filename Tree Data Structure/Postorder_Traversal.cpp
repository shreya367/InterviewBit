/*Given a binary tree, return the postorder traversal of its nodes’ values.*/


vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> Answer;
    stack<TreeNode*> stac;
    if(!A)return Answer;
    stac.push(A);
    
    while(!stac.empty()){
        struct TreeNode * nod = stac.top();
        Answer.push_back(nod -> val);
        stac.pop();
        if(nod -> left) stac.push(nod->left);
        if(nod -> right) stac.push(nod->right);
        
    }
    reverse(Answer.begin(),Answer.end());
    return Answer;
    
}
