// //     1
// //    23
// //   456
// //  78910   
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int row=1;
int num=1;
while(row<=n){
    //print spaces :
    int space=n-row;
    int j=1;
    while(space){
        cout<<" ";
        space--;
        j++;
    }
    //print numbers :
    while(j<=n){
        cout<<num;
        num++;
        j++;
    }
    cout<<endl;
    row++;
}
return 0;
}