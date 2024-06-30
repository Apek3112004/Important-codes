// ****
// ***
// **
// *
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
        int cnt=n-i+1;
        while(cnt!=0){
            cout<<"*"<<" ";
            cnt--;
    }cout<<endl;
}
}