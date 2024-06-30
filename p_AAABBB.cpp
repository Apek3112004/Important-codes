// AAAAA
// BBBBB
// CCCCC
// DDDDD
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter n and m";
    cin>>n>>m;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<char('A'+i-1);
    }cout<<endl;
}
return 0;
}