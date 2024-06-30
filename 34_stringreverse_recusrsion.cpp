//reverse a struing
#include<string>
#include<iostream>
using namespace std;
string recursion(string& b,int n,int i,int j){
    //base case:
    if(i>j){
        return 0;
    }
    swap(b[i],b[j]);
    i++,j--;
    recursion(b,n-1,i,j);
}
int main(){
string s;
cout<<"enter a string :";
cin>>s;
int n=s.size();
int j=s.size();
string c=recursion(s,n,0,j);
cout<<c;
return 0;
}