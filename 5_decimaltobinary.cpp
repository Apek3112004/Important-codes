#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main(){
int n;
cin>>n;
int ans=0;
int i=0;

while(n!=0){
   int bit=n&1;//gives last bit of decimal no
   ans=(bit*pow(10,i)+ans);//converts it to binary no.
   n=n>>1;
   i++; 
}

return ans;
}