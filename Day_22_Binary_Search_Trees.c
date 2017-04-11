#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    struct Node* left;
    struct Node* right;
    int data;
}Node;

Node* newNode(int data){
    Node* node=(Node*)malloc(sizeof(Node));
    node->left=node->right=NULL;
    node->data=data;
    return node;
}

int getHeight(Node* root){
    int lh = 0, rh = 0;

    if(root == NULL)
        return -1;
    if(root -> left != NULL)
        lh = getHeight(root -> left) + 1;
    if(root -> right != NULL)
        rh = getHeight(root -> right) + 1;

    return (lh > rh ? lh : rh);
}

Node* insert(Node* root,int data){
    if(root==NULL)
        return newNode(data);
    else{
        Node* cur;
        if(data<=root->data){
            cur=insert(root->left,data);
            root->left=cur;
        }
        else{
            cur=insert(root->right,data);
            root->right=cur;
        }

    }
    return root;
}

int main(){
    Node* root=NULL;
    int T,data;
    scanf("%d",&T);
    while(T-->0){
        scanf("%d",&data);
        root=insert(root,data);
    }
    int height=getHeight(root);
    printf("%d",height);
    return 0;

}
