#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=e-((s+e)/2);
    while(s<=e){
        if(arr[mid]>k){
            e=mid-1;
        }else if(arr[mid]==k){
            return mid;
        }else{
            s=mid+1;
        }
        int mid=e-((s+e)/2);
    }return -1;
}
int main(){
    int key,n;
    cout<<"enter size\n";
    cin>>n;
    int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    cout<<endl;
}
cout<<"enter the key ";
cin>>key;
cout<<binary_search(arr,n,key);
return 0;
}