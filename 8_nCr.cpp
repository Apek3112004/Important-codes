// nCr=fact(n)/fact(n)*fact(n-r)
//
int facto(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
#include<iostream>
using namespace std;
int main(){
int n,r;

cout<<"enter the value of n";
cin>>n;
cout<<"enter the value of r";
cin>>r;
int D=facto(n-r)*facto(r);
int N=facto(n);
cout<<N/D;
return 0;
}