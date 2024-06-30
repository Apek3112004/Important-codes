#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int c=a+b;
    int n;
    cin>>n;
    for(int i=3;i<=n;i++){
        a=b;
        b=c;
        c=a+b;
      
    }     cout<<"\n"<<c<<"\t";

return 0;
}   