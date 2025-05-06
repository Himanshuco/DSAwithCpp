#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data =val;
            left = right=NULL;
        }
    
};
    
//Build Tree
static int index= -1;
Node* buildTree(int preorder[]){
    index++;
    if(preorder[index]==-1){
        return NULL;
    }
    
    Node* root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
    
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int lefthight = height(root->left);
    int righthight = height(root->right);

    return max(lefthight,righthight)+1;

}
int main(){
    int preorder[] = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    
    Node* root = buildTree(preorder);

    cout<<"Height of the tree = ";
    cout<<height(root);
}