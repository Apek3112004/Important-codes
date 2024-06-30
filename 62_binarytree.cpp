#include<iostream>
#include<queue>
using namespace std;

class Node{
     public:
        int data;
        Node* left;
        Node* right;
   
        Node(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};

Node* buildtree(Node* root){
    cout<<"enter the data for root node : ";
    int data;
    cin>>data;
    root=new Node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"enter the data for inserting in the left  of : "<<root->data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter the data for inserting in the right part of : "<<root->data<<endl;
    root->right=buildtree(root->left);
    return root;
}

void levelordertraveersal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*temp=q.front();
  
        q.pop();
        if(temp=NULL){
            cout<<endl;
        }
        else{
                  cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
        }
        }
       
    }
}

void inorder(Node* root){
    //base case:
    //LNR
    //2nd time 
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

void preorder(Node *root){
    //NLR
    //1ST time
    if(root==NULL){
        return ;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    //LRN
    //third time
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

void buildfromlevelorder(Node* &root){
    queue<Node*>q;
    int d;
    cout<<"enter the data for root node ";
    cin>>d;
    root=new Node(d);
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<"enter the dtaa for left node of:"<<temp->data;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left =new Node(leftdata);
            q.push(temp->left);
        }
        cout<<"enter the data for right node of : "<<temp->data;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new Node(rightdata);
            q.push(temp->right);
        }

    }
}

int main(){
    Node* root=NULL;

    //creating a tree
    // root= buildtree(root);
    buildfromlevelorder(root);
    levelordertraveersal(root);
}