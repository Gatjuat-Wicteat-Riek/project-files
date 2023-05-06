#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> myVector;

    vector<int> :: iterator it;

    for(int i =0; i<10; i++){

        myVector.push_back(i);

        int sum =0;

        it = myVector.begin();

        while(it != myVector.end() ){

            sum += *it;

            it++;
        }
   
        
    cout << "The total number is: " << sum << endl;
        
    }   

}