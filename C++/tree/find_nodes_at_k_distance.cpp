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

void nodesKDistant(node * root, int distance){
if(root){
  if(distance == 0) printf("%d ",root -> val);
  else if(distance < 0) return;
  nodesKDistant(root -> left, distance-1);
  nodesKDistant(root -> right, distance-1);
}
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

 printf("\n");

 nodesKDistant(root1, 2);

 return 0;
}

