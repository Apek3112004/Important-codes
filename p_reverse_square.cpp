// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

#include<iostream>
using namespace std;
int main(){
int side;
cin>>side;
for(int i=1;i<=side;i++){
    for(int j=1;j<=side;j++){
        cout<<side-j+1;
        cout<<" ";
    }cout<<endl;
}
return 0;
}