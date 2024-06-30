// 1 1 1 1 
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

#include<iostream>
using namespace std;
int main(){
int n,m;
cout<<"enter the number of rows and columns";
cin>>n>>m;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<i;
        cout<<" ";
    }cout<<endl;
}
return 0;
}