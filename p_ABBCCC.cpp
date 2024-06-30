// A 
// B B 
// C C C 
// D D D D 

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int i=1;
    while(i<= n){
        int j=1;
        while(j <= m){
            if(i>=j){
                cout<<char('A'+i-1)<<" ";
            }
            j++;
        }cout<<endl;
        i++;
    }
return 0;
}