#include <iostream>
#include<vector>
#include<queue>

using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}

//pre order traversal
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<< root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

//in order traversal
void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<< root->data << " ";
    inOrder(root->right);
}
//post order traversal
void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<< root->data << " ";
}

//Level order traversal
void levelOrder(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    //to print answer in the form of levels we push NULL and in while loop we check for null
    q.push(NULL);

    

    while(q.size()>0){

        Node* curr = q.front();
        q.pop();
       
        //check weather NULL present in side or at the end
        //this will print nodes level wise
        if(curr == NULL){
            if(!q.empty()){
                cout<< endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }

        }
        cout<< curr->data << " ";

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
    vector<int> preorder = {1, 2, -1, -1, 3,  4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);
    cout<< root->data <<endl;
    cout<< root->left->data <<endl;
    cout<< root->right->data <<endl;

    preOrder(root);
    cout<<endl;

    inOrder(root);
    cout<< endl;

    postOrder(root);
    cout<< endl;

    levelOrder(root);
    
    return 0;
}
