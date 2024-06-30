#include<iostream>
using namespace std;
int reverse(int x){
    int ans=0;
    while(x!=0){
        int n=x%10;
        ans=ans*10+n;
        x=x/10;
    }
    return ans;
}
int main(){
    int x;
    cout<<"enter a numer to reverse";
    cin>>x;
    cout<<reverse(x);
return 0;
}