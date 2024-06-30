// A B C 
// B C D 
// C D E 

#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int i=1;
while(i<=n){
    int j=1;
    char cnt='A'+i-1;
    while(j<=m){
        cout<<cnt<<" ";
        cnt++;
        j++;
    }cout<<endl;
    i++;
}
return 0;
}