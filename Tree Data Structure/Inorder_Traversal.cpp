/*Given a binary tree, return the inorder traversal of its nodes’ values*/

vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> Answer;
    stack<TreeNode*> s;
    if(!A) return Answer;
    
    while(A!=NULL || !s.empty()){
        
        while(A!=NULL){
        s.push(A);
        A = A->left;
        }

    A = s.top();
    s.pop();
    Answer.push_back(A->val);
    
    A = A->right;
    }
    return Answer;
}
