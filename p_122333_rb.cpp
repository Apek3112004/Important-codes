//     1
//    22
//   333
//  4444
// 55555
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
    for (int i = 1; i <= n; i++) {
        // Print spaces for the left alignment
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print the repeating digit for the current row
        for (int k = 1; k <= i; k++) {
            cout << i;
        }

        // Move to the next line after printing each row
        cout <<endl;
    }
return 0;
}