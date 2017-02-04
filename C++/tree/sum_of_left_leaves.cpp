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

void leftLeaves(tnode *root){
   if(root -> left){
      leftLeaves(root -> left);
      cout<<root -> val<<" ";
      leftLeaves(root -> right);
   }
}

int main(){
   tnode *root = NULL;
   insert(root, 8);
   insert(root, 10);
   insert(root, 12);
   insert(root, 5);
   insert(root, 3);
   insert(root, 2);

   inorder(root);
   cout<<"\n";

   return 0;
}