class node{
	public:
		int data;
		node* next;
};

void pushnode(node* head, int item){
	node* newnode=new node();
	newnode->data=item;
	newnode->next=head;
	head=newnode;
}

void insertafter(node* prevnode, int item){
	node* newnode=new node();
	newnode->data=item;
	newnode->next=prevnode->next;
	prevnode->next=newnode;
	
}

void append(node* head, int item){
	node* newnode=new node();
	node *last=head;
	newnode->data=item;
	newnode->next=0;
	while(last->next!=0){
		last=last->next;
		last->next=newnode;
	}
}

int printlist(node* node){
	while(node!=0){
		cout<<" "<<node->data;
		node=node->next;
	}
}


int main(){
	node* head=NULL;
	append(&head,6);
	push(&head, 7);
	push(&head, 1);
	append(&head,4);
	insertafter(head->next, 8);
	cout<<"creating linked list"<<endl;
	printlist(head);
}
