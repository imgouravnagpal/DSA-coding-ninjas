class Stack {
	Node *head;
    int size;
   public:
    Stack() {
        head=NULL;
        size=0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return head==NULL;
    }

    void push(int element) {
     Node* new1=new Node(element);
        new1->next=head;
        head=new1;
        size++;
        return;
    }

    int pop() {
        if(head==NULL) 
        {
            return -1;
        }
        else{int ans = head->data;
        Node *new1=head->next;
        delete head;
        head=new1;
        size--;
        return ans;
            }
    }

    int top() {
        if(head==NULL) return -1;
        else{
            return head->data;
        }
        }
};