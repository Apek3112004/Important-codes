#include<iostream>
using namespace std;
int main(){
    
int arr1[3][3];
int arr2[3][2];//number of columns mustr me given :
//to give predefined elements :
int arr3[2][2]={1,2,3,5};
cout<<"the given array is :"<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<<arr3[i][j]<<"\t";
    }cout<<endl;
}
int arr4[3][2]={{2,4},{6,9},{10,12}};
cout<<"the given array is :"<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<<arr4[i][j]<<"\t";
    }cout<<endl;
}
//to find row wise sum:
cout<<"for row wise sum: "<<endl;
int arr5[3][3]={1,2,3,4,5,6,7,8,9};
cout<<"your aRRAY is:"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr5[i][j]<<"\t";
    }cout<<endl;
}cout<<endl;
cout<<"the row wise sum is : "<<endl;
for(int i=0;i<3;i++){
    int sum=0;
    for(int j=0;j<3;j++){
        sum=sum+arr5[i][j];
    }cout<<"for row no : "<<i<<" the sum is : "<<sum<<endl;
}
return 0;
}