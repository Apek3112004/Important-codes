//    1
//   121
//  12321   
// 1234321 
//n is no of rows ..
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
    //print numbers in left triangle :
   
    int j=1;
    while(j<=row){
        cout<<j;
        j++;
    }
    //printing secodn triagnle:
    int start=row-1;
    while(start){
        cout<<start;
        start--;
    }
    cout<<endl;
    row++;
}
return 0;
}