//how many 100 50 2- and 1 rs notes are required to make a agiven amount ..
#include<iostream>
using namespace std;
int main(){
 int n;
cout<<"enter a amount u wish to calcukate "<<endl;
cin>>n;
int x,y,z,a;
int val;
cin>>val;
switch(val){
    case 100:
        x=n/100;
        cout<<x<<endl;
        n=n-100*x;
    case 50:
        y=n/50;
        cout<<y<<endl;
        n=n-50*y;
    case 2:
        z=n/2;
        cout<<z<<endl;
        n=n-2*z;
    case 1:
        a=n/1;
        cout<<a<<endl;
        n=n-1*a;
}
return 0;
}