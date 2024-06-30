#include<iostream>
using namespace std;
int find_sum(int arr[],int size){
    //basecase:
    if(size==0){
        return 0;
    }else if(size==1){
        return arr[0];
    }
    //recusion:
    int remaining=find_sum(arr+1,size-1);
    int sum=arr[0]+remaining;
    return sum;
}
int main(){
//to get sum of all elements of an array using recusrison:
int arr[8]={1,2,3,4,5,6,7,8};
cout<<find_sum(arr,8)<<endl;
return 0;
}