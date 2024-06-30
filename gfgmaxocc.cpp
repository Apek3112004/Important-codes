   
#include<iostream>
using namespace std;


char getMaxOccuringChar(string str)
    {
        int n=str.length();
        int arr[26]={0};
        for(int i=0;i<n;i++){
            
            char ch=str[i];
            int num;
            if(ch>='a'&&ch<='z'){
                 num=ch-'a';
            }else{
                num=ch-'A';
            }arr[num]++;
        }
    
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalans='a'+ans;
    return finalans;
    }

int main(){
    string str;
    cout<<"enter a string "<<endl;
    cin>>str;
    cout<<getMaxOccuringChar(str);
    return 0;
    }
