// A B C 
// D E F 
// G H I 
// J K L 
#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int count=0;
for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
        cout<<" "<<char('A'+count)<<" ";
        count++;
    }cout<<endl;
}
return 0;
}