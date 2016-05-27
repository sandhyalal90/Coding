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

bool isIdenticalBST(node * root1, node * root2){
   if(root1 == NULL and root2 == NULL)
	return true;
   if(root1 == NULL and root2 != NULL)
	return false;
   if(root1 != NULL and root2 == NULL)
	return false;
   return root1 -> val == root2 -> val and isIdenticalBST(root1 -> left, root2 -> left)
   and isIdenticalBST(root1 -> right, root2 -> right);
}
void inorder(node * root){
 if(root){
 inorder(root -> left);
 printf("%d ", root -> val);
 inorder(root -> right);
 }
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

 node * root2 = NULL;
 insertBST(root2, 2);
 insertBST(root2, 3);
 insertBST(root2, 5);
 insertBST(root2,10);
 insertBST(root1, 1);
 insertBST(root1, -1);
 insertBST(root1, -4);
 insertBST(root1,-3);
 inorder(root2);

 int flag = isIdenticalBST(root1, root2);
 if(flag == true)
 printf("The BST's are identical");
 else
 printf("The BST's are not identical");

 return 0;
}

