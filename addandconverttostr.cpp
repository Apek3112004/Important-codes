//
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main (){
string s1;
string s2;
cout<<"enter string 1";
getline(cin,s1);
cout<<"enter string 2";
getline(cin,s2);
int ind1=s1.size()-1;
int ind2=s2.size()-1;
int sum=0;
int carry=0;
string result="";
while(ind1>=0 || ind2>=0){
    sum=0;
    if(ind1>=0){
        sum=sum+s1[ind1]-'0';//-0 converts it to integer
        ind1--;
    }
    if(ind2>0){
        sum=sum+s2[ind2]-'0';
        ind2--;
    }
    sum=sum+carry;
    if(sum>9){
        carry=1;
        sum=sum%10;
    }
    result += (sum % 10) + '0';

    if(carry){
        result= result + '1';
    }
}
// return result;
}