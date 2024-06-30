#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in your array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"your reversed array is :\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
return 0;
}