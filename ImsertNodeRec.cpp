Node* insertNode(Node *head, int i, int data) {
	if(head==NULL)
    {
        if(i==0)
        {
            Node *newnode=new Node(data);
            head=newnode;
        }
        return head;
    }
    //Node *newnode = new Node(data); 
    if(i==0)
    {
    	Node *newnode = new Node(data); 
        newnode->next=head;
        head=newnode;
        return head;
    }
    Node*temp = insertNode(head->next, i-1, data);
    head->next=temp;
    
    return head;
}