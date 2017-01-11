#include <iostream> 
#include <stdio.h>
#include <queue>

using namespace std;

struct tnode{
	int val;
	tnode * left;
	tnode * right;
};

void insertBinaryTree(tnode *&root, int val){
	tnode *newnode = new tnode;
	newnode -> val = val;
	newnode -> left  = NULL;
	newnode -> right = NULL;

	if(root == NULL){
		root = newnode;
		return;
	}

	queue <tnode *> que;
	que.push(root);	

	while(!que.empty()){
		tnode * temp = que.front();
		que.pop();

		if(temp -> left){
			que.push(temp -> left);
		}
		else{
			temp -> left = newnode;
			return;
		}

		if(temp -> right){
			que.push(temp -> right);
		}
		else{
			temp -> right = newnode;
			return;
		}
	}
}

void inorder(tnode *root){
	if(root){
		inorder(root -> left);
		printf("%d\n", root -> val);
		inorder(root -> right);
	}
}

int main(){
	tnode *root = NULL;
	insertBinaryTree(root, 1);
	insertBinaryTree(root, 2);
	insertBinaryTree(root, 3);
	insertBinaryTree(root, 4);
	insertBinaryTree(root, 5);

	inorder(root);

	return 0;
}