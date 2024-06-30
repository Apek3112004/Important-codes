//
#include<iostream>
using namespace std;
void sortArray(int arr[],int n){
    if(n==0||n==1){
        cout<<"already sorted";
    }for(int i=0;i<n-i;i++){
        if(arr[i+1]<arr[i]){
            swap(arr[i],arr[i+1]);
        }
    }sortArray(arr,n--);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>n;
}
int q=arr.size();
sortArray(arr,q);
return 0;
}