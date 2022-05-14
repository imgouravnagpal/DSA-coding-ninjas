Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
    if(head==NULL)
    {
        return head;
    }
    if(pos==0)
    {
        Node *a= head;
        head=head->next;
        delete a;
        return head;
    }
    
    head->next=deleteNodeRec(head->next,pos-1);
    return head;

}