//
#include<iostream>

using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node (int d){
            this->data=d;
            this->prev=NULL;
            this->next=NULL;
        }
        ~Node(){
            int value=this->data;
            if(this->next==NULL){
                delete next;
                this->next=NULL;
            }
        }
};
void print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int getLength(Node*head){
    int len=0;
    Node*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertathead(int data,Node* &head){
    Node*temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    temp->prev=NULL;
    head=temp;
}
void insertattail(int data,Node* &tail){
    Node*temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    temp->next=NULL;
    tail=temp;
}
void insertatposition(int position ,int data,Node* head){
    Node* nodetoinsert=new Node(data);
    Node* temp=head;
    int cnt=0;
    while(cnt<position){
        temp=temp->next;
        cnt++;
    }
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}
void deletenode(int position,Node* &head){
    if(position==1){
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    Node*curr=head;
    Node*prev=NULL;
    int cnt=1;
    while(cnt<position){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    curr->prev=NULL;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
int main(){


return 0;
}