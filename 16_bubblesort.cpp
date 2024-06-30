//bubble sort :
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
//bubble sort:
for(int i=1;i<n;i++){
    for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
//output the array :
cout<<"the elements of the new array are :"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
return 0;
}