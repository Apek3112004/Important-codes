//euclids algorithm to find gcd :
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0){
        cout<<"ais equal to 0";
        return b;
    }else if(b==0){
        return a;
    }else{
        while(a!=b){
            if(a>b){
                a=a-b;
            }else if(b>a){
                b=b-a;
            }
        }
    }return a;
}

int main(){   
int a,b;
cin>>a>>b;
int c=gcd(a,b);
cout<<c;
return 0;
}
