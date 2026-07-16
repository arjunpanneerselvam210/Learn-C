#include<stdio.h>
#include<stdlib.h>
struct TreeNode{
    int data;
    struct TreeNode *left , *right;
};
typedef struct TreeNode TreeNode;
TreeNode *root = NULL;
TreeNode *queue[100];
int front = -1 , rear = -1;
TreeNode *createNode(int data){
    TreeNode *newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void inorder(TreeNode *root){
    if(!root)   return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void preorder(TreeNode *root){
    if(!root)   return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(TreeNode *root){
    if(!root)   return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
void insert(int data){
    TreeNode *newNode = createNode(data);
    if(root == NULL){
        root = newNode;
        front = rear = 0;
        queue[rear] = newNode;
    }
    else{
        while(1){
            TreeNode *temp = queue[front]; 
            if(temp->left == NULL){
                temp->left = newNode;
                queue[++rear] = newNode;
                break;
            }
            else if(temp->right == NULL){
                temp->right = newNode;
                queue[++rear] = newNode;
                break;
            }
            else{
                ++front;
            }
        }
    }
}
int main(){
    int n , val;
    scanf("%d" ,&n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&val);
        insert(val);
    }
    printf("Inorder : ");
    inorder(root);
    printf("\nPreorder : ");
    preorder(root);
    printf("\nPostorder : ");
    postorder(root);
    return 0;
}