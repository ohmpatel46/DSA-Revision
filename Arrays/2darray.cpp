#include<iostream>
using namespace std;

// int main(){
//     //Method-1 static array
//     int a[2][3]={{1,2,3},{4,5,6}};

//     //Array of pointers
//     int *b[2];
//     b[0]= new int[3];
//     b[1]= new int[3];

//     //Array through double pointers
//     int **c;
//     c= new int*[2];
//     c[0]=new int[3];
//     c[1]=new int[3];
//     return 0;
// }

int main( )

{ unsigned int x[4][3] ={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, (10, 11, 12}}; 

    cout<<x+3<<*(x+3)<<(*(x+2)+3);

}