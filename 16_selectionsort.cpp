//approach: select the smallest element and place it at the right place:
#include<iostream>
using namespace std;
int main(){
    cout<<"how many elements are there in the array ? "<<endl;
 int n;
 cin>>n;   
int arr[n];
//inputting the array :
for(int i=0;i<n;i++){
    cout<<"enter the element at index "<<i<<"\t";
    cin>>arr[i];
    cout<<endl;
}
cout<<"old array is :";
cout<<"the elements of the array are :"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
//sorting using selection sort:
for(int i=0;i<n-1;i++){
    int min_index=i;
    for(int j=i+1;j<n;j++){
        if(arr[min_index]>arr[j]){
          min_index=j;   
        }  
    if(min_index!=i){
        swap(arr[min_index],arr[i]);
    }  
    }
}
//outputting the array :
cout<<"the elements of the new array are :"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
return 0;
}