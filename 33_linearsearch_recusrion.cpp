#include<iostream>
using namespace std;
bool  isSorted(int arr[],int size){
    //base case:
    if(size==0|| size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        bool  remainingpart=isSorted(arr+1,size-1);
        return remainingpart;
    }

}
bool find(int key,int arr[],int size){
    //base case:
    if(size==0){
        return 0;
    }else if(arr[0]==key){
        return 1;
    }else{
        bool remainingpart=find(key,arr+1,size-1);
    }
}

int main(){
    int arr[6]={1,2,8,4,5,6};
    int key=1;
    cout<<find(key,arr,6)<<endl;
    cout<<isSorted(arr,6)<<endl;
return 0;
}