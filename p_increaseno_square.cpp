// 1  2  
// 3  4
// 5  6
#include<iostream>
using namespace std;
int main(){
int count=1;
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<count;
        count++;
        cout<<"  ";
    }cout<<endl;
}
return 0;
}