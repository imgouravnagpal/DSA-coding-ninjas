TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    TreeNode<int>* ans=NULL;
    //int ans1=NULL;
    if(root->data>x)
    {
        //ans1=root->data;
        ans=root;
    }
    for(int i=0;i<root->children.size();i++)
    {
       TreeNode<int>* temp=getNextLargerElement(root->children[i],x);
        if(ans==NULL)
        {
            ans=temp;
        }
        else if(ans->data>temp->data&&temp!=NULL&&ans!=NULL)
        {
            ans=temp;
        }
    }
    return ans;
}