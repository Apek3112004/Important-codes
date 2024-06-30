//we have to take negation 
#include<iostream>
using namespace std;
int main(){
cout<<"enter a number in binary";
int n;
if(n==0){
    return 1;
}
cin>>n;
int mask=0;
int m=n;
while(m!=0){
    mask=(mask<<1)|1;
    m=m>>1;
}
int ans=(~n)&mask;
cout<<ans;
}