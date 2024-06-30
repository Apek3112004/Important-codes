#include<iostream>
#include<limits.h>
using namespace std;

int max(int arr[],int n){
    int maxi;
    for(int i=0;i<n;i++){
        maxi=max(arr[i],INT_MIN);
    }return maxi;
}
int min(int arr[],int n){
    int mini;
    for(int i=0;i<n;i++){
        mini=min(arr[i],INT_MAX);
    }return mini;
    
}
int main(){
    int n;
    cout<<"enter the size n\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element at index"<<i<<"\t";
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"maximum is : "<<max(arr,n)<<endl;
    cout<<"minimum is : "<<min(arr,n)<<endl;
return 0;
}