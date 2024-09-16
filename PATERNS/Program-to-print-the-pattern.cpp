/*DIFFERENT NUMBERS
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

//The key point here in this code is value always changing so means we should iterate j or we should take some other varible and increment it//
/*#include<iostream>
using namespace std;
int main(){
    int rows=6;
    int c=1;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<i;j++){
            //well if we use j and increment it then after every ith iteration the value of j will be reset//
             cout<<c<<" ";
             c++;
        }
        cout<<endl;
    }
    return 0;

}
*/





/*DIFFERENT NUMBERS
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

//The key point here is that the orinting on every row is equivalent to that ith row and it is iterating with row only so will print the value of i//
/*#include<iostream>
using namespace std;
int main(){
    int rows=5;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/






/*DIFFERENT NUMBERS
1
1 2
1 2 3
1 2 3 4
1 2 3 3 5
*/


//Here we can clearly see that the value of j is being printed that is why it is reseting again and again with row iteration//
/*#include<iostream>
using namespace std;
int main(){
    int rows=5;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/





/*ALL the above code has:
    Time Complexity: O(n2)

    Auxiliary Space: O(1)
*/

