int length(Node *head) {
    if(head==NULL)
    {
        return 0;
    }
    if(head->next==NULL)
    {
        return 1;
    }
int ans = 1+ length(head->next);
    return ans;
}