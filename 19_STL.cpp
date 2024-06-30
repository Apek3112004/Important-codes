#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    //array:
    array<int,4>arr={1,2,3,4};
    cout<<arr.at(0)<<endl;
    cout<<arr.at(1)<<endl;
    cout<<arr.at(2)<<endl;
    cout<<arr.at(3)<<endl;
    cout<<"empty or not "<<arr.empty()<<endl;
    cout<<"front part "<<arr.front()<<endl;
    cout<<"back part "<<arr.back()<<endl;
    //vector:
    vector<int>v;
    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(1);
     v.push_back(2); 
     v.push_back(3);
     v.push_back(4);
     v.push_back(5);
     cout<<"capacity"<<v.capacity()<<endl;
     cout<<"szie"<<v.size()<<endl;
     cout<<v.at(2)<<endl;
     cout<<"front "<<v.front()<<endl;
     cout<<"back"<<v.back()<<endl;
     cout<<"before";
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
     }
     v.pop_back();
     cout<<"after";
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
     }

    //we can also know beforehand how many elements we will need :
    vector<int>v2(5,1);
    cout<<"vector made using predefined size : \n";
    for(int i:v2){
        cout<<i<<endl;
    }

    cout<<"using copy vector"<<endl;
    vector<int>v3(v2);
    for(int i:v3){
        cout<<i<<endl;
    }
    //deque:
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    cout<<"deque\n";
    for(int i:d){
        cout<<i<<endl;
    }
    cout<<"empty: "<<d.empty();
    d.push_back(3);
    d.push_back(10);
    d.push_back(9);
    d.push_back(4);
    cout<<"after pushing so many elements from back to the queue:\n";
      for(int i:d){
        cout<<i<<endl;
    }
    cout<<"erasing some of them :\n";
    d.erase(d.begin(),d.begin()+2);
     for(int i:d){
        cout<<i<<endl;
    }
    //list:
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(10);
    cout<<"using a list ";
    for(int i:l){
        cout<<i<<endl;
    }
    cout<<"for predetermined no of elements in a list :\n";
    list<int>l2{5,2,3,5,65,4,10};
    for(int i:l2){
        cout<<i<<endl;
    }

    //Stack:
    stack<string>s;
    cout<<"stack\n";
    s.push("Apeksha");
    s.push("Devi");
    s.push("Mujumale");
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.empty();
    s.push("bebbee");

    //Queue:
    queue<int>q1;
    q1.push(1);
    q1.push(2);    
    q1.front();
    q1.pop();
    q1.front();
    q1.size();

    //priority queue :
    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(5);
    cout<<"in a priority queue ";
    for(int i=0;i<=pq.size();i++){
        cout<<pq.top()<<endl;
        pq.pop();
    }

    set<int>se;
    //no duplicate elements are allowed in a set :
    se.insert(1);
    se.insert(2);
    se.insert(1);
    se.insert(3);
    se.insert(4);
    se.insert(5);
    se.insert(6);
    cout<<"in a set ";
    for(auto i:se){
        cout<<i<<endl;
    }
    cout<<"size"<<se.size()<<endl;
    cout<<"usings set.count()"<<se.count(1);//reeturns true if eleemnt is present ..
    map<int,string>m;
    m[1]="Apeksha";
    m[2]="Pandurang";
    m[3]="Mujumale";
    for(auto i:m){
        cout<<i.first<<endl;
    }
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<m.count(2)<<endl;
    m.erase(2);
    for(auto  i:m){
        cout<<i.first<<endl;
    }
    //Algorithm:
    cout<<"using an algorirthm :"<<endl;
    cout<<"algorithm has various standard functions we can use directly ";
    vector<int>alg={1,2,34,5,6,7,8,9};
    for(auto i:alg){
        cout<<i<<endl;
    }
    cout<<"using binary search from algorithm ..."<<binary_search(alg.begin(),alg.end(),1)<<endl;
    for(auto i:alg){
        cout<<i<<endl;
    }
return 0;
}