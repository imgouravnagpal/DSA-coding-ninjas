Node *reverse(Node *head)
{
    Node *prev=NULL;
    Node *current=head;
    Node *next=NULL;
    
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}

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


bool isPalindrome(Node *head)
{
    if(head == NULL)
    {
        return true;
    }
    bool ans=true;
    
    int l = length(head);
    Node* half=head;
    int count=1;
    int end;
    if(l%2==0)
    {
        end=l/2;
        while(count<end && half->next!= NULL)
        {
            half = half->next;
            count++;
        }
    }
    else {
        end=l/2+1;
    	while(count<end && half->next!= NULL)
        {
            half=half->next;
            count++;
        }
    }
    half->next=reverse(half->next);
    Node *temp=head;
    Node *temp2=half->next;
    while(temp!=half->next && temp2!=NULL)
    {
        if(temp->data != temp2->data)
        {
            ans = false;
        }
        temp=temp->next;
        temp2=temp2->next;
    }
  
    return ans;
    
    
    
}