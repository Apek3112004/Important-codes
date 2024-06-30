// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;
// void sayDigit(int n,string arr[]){
//     //base case:
//     if(n==0){
//         return ;
//     }
//     //processing :
//     int digit=n%10;
//     n=n/10;
//     //recursive call:
//     sayDigit(n);
//     cout<<arr[digit];
// }
// int main(){
//     int n;
//     cout<<"enter a number :"<<endl;
//     cin>>n;
//     stack<string>s;
//     while(n!=0){
//         int digit=n%10;
//         switch (digit)
//         {
//         case 1:
//             s.push("one\t");
//             break;
//         case 2:
//             s.push("two\t");
//             break;
//         case 3:
//             s.push("three\t");
//             break;
//         case 4:
//             s.push("four\t");
//             break;
//         case 5:
//             s.push("five\t");
//             break;
//         case 6:
//             s.push("six\t");
//             break;
//         case 7:
//             s.push("seven \t");
//             break;
//         case 8:
//             s.push("eight\t");
//             break;
//         case 9:
//             s.push("nine\t");
//             break;
//         case 0:
//             s.push("zero\t");
//             break;
//         default:
//             s.push("unidentified\t");
//             break;
//         }
//         n=n/10;
//     }
//     int top=s.size()-1;
//     while(top!=-1){
//         cout<<s.top();
//         top--;
//         s.pop();
//     }
//     //let us do the same thing easily :
//     int num;
//     cin>>num;
//     string *arr=new string[11];
//     arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
//     sayDigit(n,arr[]);

// return 0;
// }