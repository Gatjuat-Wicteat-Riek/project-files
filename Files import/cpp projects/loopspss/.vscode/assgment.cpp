#include <iostream>
using namespace std;
int main() {

    int d[5][5] = {0};
    int result = 0;

    for(int i = 0; i < 5;i++){

        for(int j = 0;j < 5;j++){

            cin >> d[i][j];
            
            if(d[i][j] == 1){

                result = abs(i-2) + abs(j-2);
            }
        }
    }
    cout << result << endl;
    return 0;
}