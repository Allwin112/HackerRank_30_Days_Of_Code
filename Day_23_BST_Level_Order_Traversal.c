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

void printAtLevel(Node* root, int level)
    {
    if(root)
        if(level == 0)
            printf("%d ", root -> data);
        else
            {
            if(root -> left != NULL)
                printAtLevel(root -> left, level-1);
            if(root -> right != NULL)
                printAtLevel(root -> right, level-1);
        }
}

void levelOrder(Node* root)
    {
    int height, i;

    height = getHeight(root);
    for(i = 0; i <= height; i++)
    printAtLevel(root, i);
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
    levelOrder(root);
    return 0;

}
