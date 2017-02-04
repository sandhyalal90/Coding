#include <iostream>
#include <stdio.h>

using namespace std;

struct tnode {
   int val;
   tnode * left;
   tnode * right;
};

void insert(tnode *&root, int val ){

	tnode * temp = new tnode;
	temp -> val = val;
	temp -> left  = NULL;
	temp -> right = NULL;
	if(root == NULL){
		root = temp;
		return;
	} 
	if(root -> val > val)
		insert(root -> left, val);
	else{
		insert(root -> right, val);
	}
}

void inorder(tnode *root){
	if(root){
		inorder(root -> left);
		cout<<root -> val<<" ";
		inorder(root -> right);
	}
}

int main(){
	tnode *root = NULL;
	insert(root, 18);
	insert(root, 10);
	insert(root, 12); 
	insert(root, 5);
	insert(root, 3);
	insert(root, 2);
	insert(root, 11);
	insert(root, 21);
	insert(root, 15);
	insert(root, 1);
	insert(root, 25);
	insert(root, 27);
	insert(root, 22);
	insert(root, 19);
	insert(root, 4);
	insert(root, 6);
	insert(root, 8);


	inorder(root);
	cout<<"\n";

	return 0;
}