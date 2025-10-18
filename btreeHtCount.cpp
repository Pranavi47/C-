#include <iostream>
#include<vector>

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
//recursion O(n)
int height(Node* root){
   //base case
    if(root == NULL){
        return 0;
    }
    int leftHt = height(root->left);
    int rightHt = height(root->right);
    return max(leftHt, rightHt) + 1;
}
//O(n)
int count(Node* root){

    if(root == NULL){
        return 0;
    }

    int leftCount = count(root->left);
    int rtCount = count(root->right);
    return leftCount + rtCount + 1;
}

int SumofNodes(Node* root){

    if(root == NULL){
        return 0;
    }
    int leftSum = SumofNodes(root->left);
    int rightSum = SumofNodes(root->right);

    return leftSum + rightSum + root->data;
}


int main(){
    vector<int> preorder = {1, 2, -1, -1, 3,  4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);

    cout<< "height : " << height(root) << endl;
    cout<< "Count : "<< count(root) << endl;
    cout<< "SumofNodes : "<< SumofNodes(root) << endl;
    return 0;
}