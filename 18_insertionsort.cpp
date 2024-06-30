//ek ek element ko put in kro uske correct place pe :
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

//using insertion sort:
for(int i=1;i<n;i++){
    int j;
    int temp=arr[i];
    for(j=i-1;j>=0;j--){
        if(temp<arr[j]){
            arr[j+1]=arr[j];
        }else{
            break;
        }
    }arr[j+1]=temp;
}
cout<<"the elements of the array are :"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}

return 0;
}