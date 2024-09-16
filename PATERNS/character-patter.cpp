
/*PRINT CHARACTER PATTERN
A
BB
CCC
DDDD
EEEEE
*/

/*#include<iostream>
using namespace std;
int main(){
    int rows=5;
    char point ='A';
    
    for(int i=1;i<=rows;i++){
        
        for(int j=1;j<=i;j++){
            cout<<point;
        }
        point++;
        cout<<endl;
    }
    return 0;

}
*/

//USING FOR LOOP//
/*#include<iostream>
using namespace std;
int main(){
    int rows=5;
    int i=1;
    char point='A';
    while(i<=rows){
        int j=1;
        while(j<=i){
            cout<<point;
            j++;
        }
        point++;
        i++;
        cout<<endl;
    }
    return 0;
}*/





/*PRINT CONTINUOUS CAHR PATERN
A
BC
DEF
GHIJ
*/
/*#include<iostream>
using namespace std;
int main(){
    int rows=5;
    char point='A';
    //the key factor here will be that in precoius code the char was iterating with row but it is iterating with respect to column
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<point<<" ";
            point++;
        }
        cout<<endl;
    }
    return 0;
}
*/



