TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    int highest=root->data;
    TreeNode<int>* ans=root;
    TreeNode<int>* sum;
    int sum1;
    for(int i=0;i<root->children.size();i++)
    {
        highest+=root->children[i]->data;
    }
    for(int i=0;i<root->children.size();i++)
    {
        sum=maxSumNode(root->children[i]);
        sum1=sum->data;
        for(int i=0;i<sum->children.size();i++)
        {
            sum1+=sum->children[i]->data;
        }
       
        if(sum1>highest)
        {
            highest=sum1;
            ans=sum;
        }
    }
    return ans;
    
}