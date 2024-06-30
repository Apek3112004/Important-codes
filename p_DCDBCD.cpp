// D 
// C D 
// B C D 
// A B C D 
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        if(i>j){
            char ch='D'-i+j;
            cout<<ch;
        }else if(i==j){
            cout<<'D';
        }
        j++;
    }cout<<endl;
    i++;
}
return 0;
}