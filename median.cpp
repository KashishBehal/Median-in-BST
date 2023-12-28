void inorder( struct Node* root , vector<int>&v){
    if(root==NULL){
        return ;
    }
    inorder(root->left , v);
    v.push_back(root->data);
    inorder(root->right   , v);
}
float findMedian(struct Node *root)
{
      vector<int>v;
      inorder(root, v);
      int n=v.size();
      if(n%2==0){
          return (v[n/2]+v[(n/2)-1])/2.0;
      }
      else{
          return v[(n)/2];
      }
}
