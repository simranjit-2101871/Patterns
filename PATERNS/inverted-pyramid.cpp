/*PRINT INVERTED Star PYRAMID
* * * *
* * *
* *
*
*/
/*#include<iostream>
using namespace std;
int main(){
    int rows=5;
    int star=5;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=star;j++){
            cout<<"*"<<" ";
        }
        star--;
        cout<<endl;
    }
    return 0;
}
*/





/*HALF INVERTED USING NUMBERS
1 2 3 4
1 2 3
1 2
1
*/
/*#include<iostream>
using namespace std;
int main(){
    int rows=4;
    int star=4;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=star;j++){
            cout<<j<<" ";
        }
        star--;
        cout<<endl;
    }
    return 0;
}
*/







//Two equilateral triangles are joined to build the cone ,well this pattern can also be drawn if i would just place spaces in between of mirrored inverted and inverted rigth angle triangle//
/*PRINT THE CONE PYRAMID
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    * 
*/



/*
#include <iostream>
using namespace std;
 
// Driver code
int main()
{


       int n = 5;
       int n_1=4;
 
    // ith row has n-i leading spaces
    // and i elements
    for (int i = 1; i <= n; i++) {
        // n-i leading spaces
        for (int j = 0; j < n - i; j++)
            cout << " ";
 
        // i elements
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    

    
    //2nd part of cone
    // ith row has n-i+1 elements
    for (int i = 1; i <= n_1; i++) {
        // leading spaces
        for (int j = 1; j <= i; j++)
            cout << " ";
        for (int j = 1; j <= n_1 - i + 1; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
*/


//Time Complexity: O(n^2)
//Auxiliary Space: O(1),no extra space is used





/*MIRRORED INVERTED RIGHT TRIANGLE
***** 
 ****
  ***
   **
    *
*/

#include<iostream>
using namespace std;
int main(){
    int row=5;
  

for (int i = 1; i <= row; i++) {
        // leading spaces
        for (int j = 1; j <=row-1; j++)
            cout << " ";
        for (int j = 1; j <= row - i + 1; j++)
            cout << "* ";
        cout << endl;
    }
return 0;
}




