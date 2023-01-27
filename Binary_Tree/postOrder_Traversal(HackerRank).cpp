 void postOrder(Node *root) {
          vector<int>vec;
        //base case
        if(root == NULL){
            return ;
        }
        
        postOrder( root -> left);
        postOrder( root -> right);
        cout<<root->data<<" ";
    }
