void printReverse(Node *head)
{ 	
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        cout<<head->data<<" ";
        return;
    }
    printReverse(head->next);
    cout<<head->data<<" ";
    return;
}