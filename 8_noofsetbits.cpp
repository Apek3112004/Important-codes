//to count the number of set bits in a and b :
#include<iostream>
using namespace std;
int main(){
    int a,b;
    int count=0;
    cout<<"enter a and b";
    cin>>a>>b;
    while(a!=0){
        if(a&1){
            count++;
        }a>>1;
    }
    while(b!=0){
        if(b&1){
            count++;
        }b>>1;
    }
cout<<"the count is :\t"<<count;
}