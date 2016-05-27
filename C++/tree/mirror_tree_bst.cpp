#include <iostream>
#include <cstdio>
using namespace std;

struct node{
 int val;
 node* left;
 node* right;
};

void insertBST(node *&root, int data){
   
   node *temp = new node;
   if(root == NULL){
   root = new node;
   root -> val = data;
   root -> left = NULL;
   root -> right = NULL;
   return;
   }
   else if(root -> val < data){
   insertBST(root -> right, data);
   }
   else{
   insertBST(root -> left, data);
  }
}
void insertMirrorBST(node *&root, int data){
   
   node *temp = new node;
   if(root == NULL){
   root = new node;
   root -> val = data;
   root -> left = NULL;
   root -> right = NULL;
   return;
   }
   else if(root -> val >= data){
   insertMirrorBST(root -> right, data);
   }
   else{
   insertMirrorBST(root -> left, data);
  }
}
void inorder(node * root){
 if(root){
 inorder(root -> left);
 printf("%d ", root -> val);
 inorder(root -> right);
 }
}
void mirrorInorder(node * root){
if(root){
  mirrorInorder(root -> right);
  printf("%d ", root -> val);
  mirrorInorder(root -> left);
}
}
bool isMirror(node *root1, node *root2){
	if(root1 == NULL and root2 == NULL)
	return true;
	if(root1 == NULL || root2 == NULL)
	return false;
 	return root1 -> val == root2 -> val and 
	       isMirror(root1 -> left, root2 -> right) and 
	       isMirror(root2 -> right, root1 -> left);
}
int main()
{

 node * root1 = NULL;
 insertBST(root1, 2);
 insertBST(root1, 3);
 insertBST(root1, 5);
 insertBST(root1,10);
 insertBST(root1, 1);
 insertBST(root1, -1);
 insertBST(root1, -4);
 insertBST(root1,-3);
 inorder(root1);

 printf("\n");

 node * root2 = NULL;
 insertMirrorBST(root2, 2);
 insertMirrorBST(root2, 3);
 insertMirrorBST(root2, 5);
 insertMirrorBST(root2,10);
 insertMirrorBST(root2, 1);
 insertMirrorBST(root2, -1);
 insertMirrorBST(root2, -4);
 insertMirrorBST(root2,-3);
 mirrorInorder(root2);

 int flag = isMirror(root1, root2);
 if(flag == true)
	printf("BST's are mirror to each other");
 else	printf("BST's are not mirror to each other");

 return 0;
}

