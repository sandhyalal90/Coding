#include <iostream>
using namespace std;
struct node{
  int data;
  node *next;
};

void insert(node *&head, int d){

	node *temp = new node;
	temp -> data = d;
	temp -> next = NULL;

	if(head == NULL){
		head = temp;
		return;
	}
	node *t = head;
	while(t->next){
		t = t-> next;
	}
	t -> next = temp;
	return;
}

void printList(node *head){
  while(head){
  	cout<<head -> data<<" ";
  	head = head -> next;
  }
  cout<<endl;
}

void find_union_list(node *&head3, node* head1, node* head2){
  node *temp1 = head1;
  node *temp2 = head2;

  while(temp1 && temp2){
  	if(temp1 -> data < temp2 -> data){
        insert(head3, temp1 -> data);
        temp1 = temp1 -> next;
        continue;
  	}
  	else if(temp1 -> data == temp2 -> data){
  		insert(head3, temp1 -> data);
  		temp1 = temp1 -> next;
  		temp2 = temp2 -> next;
  	}
  	else{
  		insert(head3, temp2 -> data);
  		temp2 = temp2 -> next;
  	}
  }

  while(temp1){
  	insert(head3, temp1-> data);
  	temp1 = temp1 -> next;
  }

  while(temp2){
   insert(head3, temp2 -> data);
   temp2 = temp2 -> next;
  } 

}

void find_intersect_list(node *&head3, node* head1, node* head2){
  node *temp1 = head1;
  node *temp2 = head2;

  while(temp1 && temp2){
  	if(temp1 -> data < temp2 -> data){
        temp1 = temp1 -> next;
        continue;
  	}
  	else if(temp1 -> data == temp2 -> data){
  		insert(head3, temp1 -> data);
  		temp1 = temp1 -> next;
  		temp2 = temp2 -> next;
  	}
  	else{
  		temp2 = temp2 -> next;
  	}
  }
}

int main(){

    node *head1 = NULL;
    insert(head1, 2);
    insert(head1, 4);
    insert(head1, 5);
    insert(head1, 7);
    insert(head1, 8);
    insert(head1, 9);
    insert(head1, 12);
    insert(head1, 15);

    printList(head1);

    node *head2 = NULL;
    insert(head2, 1);
    insert(head2, 2);
    insert(head2, 4);
    insert(head2, 6);
    insert(head2, 8);
    insert(head2, 10);
    insert(head2, 13);
    insert(head2, 15);

    printList(head2);

    node *head_union = NULL;
    find_union_list(head_union, head1, head2);
    printList(head_union);

    node *head_intersect = NULL;
    find_intersect_list(head_intersect, head1, head2);
    printList(head_intersect);

	return 0;
}