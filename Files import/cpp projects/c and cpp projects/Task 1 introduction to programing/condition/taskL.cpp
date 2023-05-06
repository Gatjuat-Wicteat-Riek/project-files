#include<iostream>
using namespace std;
int main(){


    int score;
    cin>>score;

    if ((score>=0) && (score<40)){
        score = 40-score;
        cout<<score<<endl;

    }
    else if((score>=40) && (score<70)){
        score = 70-score;
        cout<<score<<endl;
    }
    else if((score>=70) && (score<90)){
        score = 90-score;
        cout<<score<<endl;
    }
    else{
        cout<<"expert"<<endl;
    }
return 0;
}

