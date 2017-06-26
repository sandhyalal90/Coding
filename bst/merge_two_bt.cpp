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


void merge_two_trees(tnode *r1, tnode *r2){
	if( r1 && r2 ){
		
	}
}

int main(){
	tnode *root1 = NULL;
	insert(root1, 5);
	insert(root1, 1);
	insert(root1, 2);
	insert(root1, 6);
	insert(root1, 7);
	insert(root1, 8);

	tnode *root2 = NULL;
	insert(root2, 4);
	insert(root2, 3);
	insert(root2, 7);
	insert(root2, 8);
	insert(root2, 9);
	insert(root2, 2);


	inorder(root1);
	cout<<"\n";

	inorder(root2);
	cout<<"\n";

	tnode *root3 = NULL;
	merge_two_trees();

	return 0;
}