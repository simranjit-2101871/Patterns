/*The key point to note in this pattern
    *
   **
  ***
 ****
*****
is that the number of spaces on every row is n-i,means difference of total rows and the particular ith row
*/





//USING FOR LOOP
/*#include<iostream>
using namespace std;
int main(){
    int rows=5;
    for(int i=1;i<=rows;i++){
        //for printing spaces
        for(int j=1;j<=rows-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/






//USING WHILE LOOP
/*#include<iostream>
using namespace std;
int main(){
    int rows=5,i=1,j=1;

    while(i<=rows){
        while(j<=rows-i){
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
        j=1;
    }
    return 0;

}*/