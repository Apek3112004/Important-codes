//     *
//    ***
//   *****
//  *******   
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int row=1;
while(row<=n){
    //print spaces : 
    int space=n-row;
    while(space){
        cout<<" ";
        space--;
    }
    //print 1st triangle :
    int j=1;
    while(j<=row){
        cout<<"*";
        j++;
    }
    //print next traingle :
    int freq=row-1;
    while(freq){
        cout<<"*";
        freq--;
    }
    row++;
    cout<<endl;
}
return 0;
}