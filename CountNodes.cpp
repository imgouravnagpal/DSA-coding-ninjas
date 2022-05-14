int getLargeNodeCount(TreeNode<int>* root, int x) {
    int count=0;
    for(int i=0;i<root->children.size();i++)
    {
        count+=getLargeNodeCount(root->children[i],x);
        
    }
    if(root->data>x){
        count++;
    }
    return count;
   
}