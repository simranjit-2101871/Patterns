#include<iostream>
using namespace std;
int main(){
    int row=5;
   /* int rows=5;
    for(int i=1;i<=rows;i++){
        for(int j=1; j<=rows-1; j++){
            cout<<" ";
        }
        for(int j=1; j<=rows-i+1; j++){
            cout<<"*";
        }
        cout<<endl;
        */

        /*for (int i = 1; i <= row; i++) {
        // leading spaces
        for (int j = 1; j <=row-i; j++)
            cout << " ";
        for (int j = 1; j <=2*i-1  ; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
    */


    for (int i = 1; i <= row; i++) {
        // leading spaces
        for (int j = 1; j <= i - 1; j++)
            cout <<" ";
        // printing stars
        for (int j = 1; j <= 2 * (row - i) + 1; j++){
            cout << "* ";

        }
        cout << endl;
    }
    return 0;
}
