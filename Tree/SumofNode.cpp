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

int sumNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    int sum = root->data + sumNodes(root->left)+sumNodes(root->right);

    //Or
    //int leftsum =sumNode(root->left);
    //int rightsum=sumNode(root->right)
    //return leftsum+rightsum+root->data;

    return sum;
}

int main(){
    int preorder[] = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    
    Node* root = buildTree(preorder);

    cout<<"Sum of the Nodes = ";
    cout<<sumNodes(root);
}