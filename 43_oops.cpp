//INHERITANCE :
#include<iostream>
using namespace std;
class Human{
    public:
        int height;
        int weight;
        int age;
    public:
        int getAge(){
            return this->age;
        }
        int setweight(int w){
            cout<<"set weight\n";
            this->weight=w;
        }
};
class male:public Human{
    public:
        string colour;
        void sleep(){
            cout<<"Male sleeping\n";
        }
};


int main(){
    male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.colour<<endl;
    obj1.getAge();

return 0;
}