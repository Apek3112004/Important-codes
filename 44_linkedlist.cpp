//linked list :
class Node{
    public:
        int data;
        Node *next;
};
#include<iostream>
using namespace std;
int main(){
    Node*  node1=new Node();
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

return 0;
}