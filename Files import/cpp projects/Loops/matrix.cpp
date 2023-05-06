#include<iostream>
using namespace std;
int main(){

    //printing the matrix of 3 rows and 4 columns
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    cout<<"The order of the matrix elements is this"<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //printing the matrix of 3 rows and 4 columns
     int b[3][4] = {{1,3,4,10}, {15,5,6,12}, {7,8,9,11}};

    cout<<"The order of the matrix elements is this"<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    } 
    //print a matrix with 5 rows and 4 colums
    int c[5][3] = {{1,3,4}, {4,5,6}, {7,8,9},{22,34,16},{24,25,26}};

    cout<<"The order of the matrix elements is this"<<endl;

    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            
            cout <<c[i] [j] <<"  ";
        }
        cout <<endl;
    }
    // addition of matrixes
    // for square matrix
    int t[2][2] = {{1,2}, {3,4}};

    int g[2][2] ={{3,4}, {5,6}};

    int sum [2][2];

    for(int i =0; i<2; i++){

        for(int j=0; j<2; j++){

            sum[i][j] =t[i][j] + g[i][j];
        }
    }
    cout<<"The matrix obtained by adding 2 matrixes"<<endl;

  for(int i =0; i<2; i++){

    for(int j=0; j<2; j++){

        cout<<sum[i][j]<<" ";
    }
    cout<<endl;
  }

  //for retangular matrix

  int m[4][2] = {{1,2}, {3,4}, {11,9}, {5,19}};

    int h[4][2] ={{3,4}, {5,6}, {12,4}, {13,7}};

    int count [4][2];

    for(int i =0; i<4; i++){

        for(int j=0; j<2; j++){

            count[i][j] =t[i][j] + g[i][j];
        }
    }
    cout<<"The matrix obtained by adding 2 matrixes"<<endl;

  for(int i =0; i<4; i++){

    for(int j=0; j<2; j++){

        cout<<count[i][j]<<" ";
    }
    cout<<endl;
  }           
}