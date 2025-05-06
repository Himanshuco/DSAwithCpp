#include<iostream>
#include<queue>
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

//Pre-Order Traversal
//Pre-Order Traversal = root -> left -> right
void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

//In-Order Traversal
//In-Order Traversal = left root right
void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}

//Post-Order Traversal
//Post-Order Traversal = left right root
void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

//Level Order Traversal
//Level Order Traversl = Level by level
void levelOrder(Node* root){
    queue<Node*> q;

    q.push(root);
    //For printing each level in each line 
    q.push(NULL);

    while(q.size()>0){
        Node* curr = q.front();
        q.pop();

        //For printing each level in each line 
        if(curr==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }

        cout<<curr->data<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
        
    }
    cout<<endl;

}

int main(){
    //Binary Tree :- Every node have at maximum 2 nodes.
    //Build a Binary Tre
    int preorder[] = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};    
    Node* root = buildTree(preorder);

    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;

    cout<<"Pre-Order Traversal result : ";
    preOrder(root);
    cout<<endl;
    
    cout<<"In-Order Traversal result : ";
    inOrder(root);
    cout<<endl;

    cout<<"Post-Order Traversal result : ";
    postOrder(root);
    cout<<endl;

    cout<<"Level-Order Traversal result : "<<endl;
    levelOrder(root);
    cout<<endl;

    return 0;

}