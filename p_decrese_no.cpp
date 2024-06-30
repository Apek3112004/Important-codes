// 1
// 21
// 321
// 4321
// 54321
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the side";
cin>>n;
int row=1;

while(row<=n){
  int column=1;
    while(column<=row){
        
          cout<<(row-column+1);
          column++;
    }cout<<endl;
    row++;
}
return 0;
}