//OOPS concepts
#include<iostream>
#include<string>
using namespace std;

class Hero{
    int energy;
    char size;
    int level;
 public:
    static int info;
    static void output(){
        cout<<"the informationn is\n"<<info;
    }
    void get_energy(){
        cout<<"enter the energy level out of 100\t";
        cin>>energy;
        this->energy=energy;
    }
    void print(){
        cout<<"the energy level is\t" <<energy<<endl;
    }
    Hero(){
        cout<<"constructor called\n";
    }
    ~Hero(){
        cout<<"destructor called";
    }
};
int Hero::info=10;
int main(){
    cout<<Hero::info;
    cout<<Hero::output;
    Hero h1;
    cout<<sizeof(h1)<<endl;
    h1.get_energy();
    h1.print();
return 0;
}