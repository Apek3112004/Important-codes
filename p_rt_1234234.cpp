// 1 2 3 4 
//   2 3 4
//     3 4
//       4
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i>j){
            cout<<" ";
        }else{
            cout<<j;
        }
    }cout<<endl;
}
return 0;
}