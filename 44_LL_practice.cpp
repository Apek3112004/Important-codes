//
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void insertattail(Node* &tail,int data){
    Node*temp=new Node(data);
    tail->next=temp;
    temp->next=NULL;
    tail=temp;
}
void printnodes(Node*head){
    cout<<"printing \n";
    if(head==NULL){
        cout<<head->data<<endl;
        return ;
    }
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void insertathead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertatposition(int position,int data,Node* &head){
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    Node*nodetoinsert=new Node(data);
    nodetoinsert->next=temp;
    temp->next=nodetoinsert;

}
void deleteatpos(int position,Node* &head){
    if(position==1){
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }else{
        Node*current=head;
        Node*prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=current;
            current=current->next;
            cnt++;
        }prev->next=current->next;
        current->next=NULL;
        delete current;
    }
}
int main(){
Node* n1=new Node(20);
cout<<n1->data<<endl;
cout<<n1->next<<endl;
Node* head=n1;
Node* tail=n1;
insertattail(tail,30);
printnodes(head);
insertattail(tail,40);
printnodes(head);
insertathead(head,3);
printnodes(head);
return 0;
}