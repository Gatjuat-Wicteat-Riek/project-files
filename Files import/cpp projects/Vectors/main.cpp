#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int> myVector;

int sum(0);

myVector.push_back(100);
myVector.push_back(50);
myVector.push_back(200);


while(!myVector.empty()){
sum += myVector.back();
myVector.pop_back();

}
cout << "The element of the vectors are: " << sum << endl;
cout << myVector.back() << endl;
cout << myVector.front() << endl;
cout << myVector.size() << endl;
}