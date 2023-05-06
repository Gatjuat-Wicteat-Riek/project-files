#include <iostream>
#include<string>
using namespace std;
int main(){
    //task 0ne
    /*int balance;
    int counter = 0;
    cout<<"Enter the balance here"<<endl;
    cin>>balance;
    while(balance>=100){
        balance = balance - 100;
        counter++;
        
    }
    while(balance>=20){
        balance = balance - 20;
        counter++;
        
    }
    while(balance>=10){
        balance = balance - 10;
        counter++;
        
    }
    while(balance>=5){
        balance = balance - 5;
        counter++;
        
    }
    while(balance>=1){
        balance = balance - 1;
        counter++;
        
    }cout<<counter<<endl;*/
    //task 2
    /*int num;
    int n = 0;
    cout<<"Enter num here"<<endl;
    cin>>num;
    while (num>=5){
        num = num-5;
        n++;
    }
    while (num>=4){
        num = num-4;
        n++;
    }
    while (num>=3){
        num = num-3;
        n++;
    }
    while (num>=2){
        num = num-2;
        n++;
    }
    while (num>=1){
        num = num-1;
        n++;
    }cout<<n<<endl;*/

    /*int A, B, C;
    cout<<"Enter int A"<<endl;
    cin>>A;
    cout<<"Enter int B"<<endl;
    cin>>B;
     C = B*A/100;
     cout<<C<<endl;*/
//task 4
    /*int n;
    cout<<"Enter number here."<<endl;
    cin>>n;
    if (n>0){
        if (n==1){
            cout<<"one"<<endl;
            
        }
        else if (n==2){
            cout<<"Two"<<endl;
        }
        else if (n==3){
            cout<<"Three"<<endl;
        }
        else if (n==4){
            cout<<"Four"<<endl;
        }
        else if (n==5){
            cout<<"Five"<<endl;
        }
        else if (n==6){
            cout<<"Six"<<endl;
        }
        else if (n==7){
            cout<<"Seven"<<endl;
        }
        else if (n==8){
            cout<<"Eight"<<endl;
        }
        else if (n==9){
            cout<<"Nine"<<endl;
        }
        else if (n>9){
            cout<<"It is greater than Nine"<<endl;
        }
    }
    else{
        cout<<"You have entered negative number"<<endl;

    }*/
    //five 
    /*int score;
    cout<<"Enter the score here"<<endl;
    cin>>score;
    int point;

    if (score >= 0){
        if ((score >=0) && (score < 40)){
            point = 40-score;
            cout<<"Points = "<<point<<endl;

        }
        else if ((score >=40) && (score < 70)){
            point = 70-score;
            cout<<"Points = "<<point<<endl;
        }
        else if ((score >=70) && (score < 90)){
            point = 90-score;
            cout<<"Points = "<<point<<endl;
        }

        
    }
    else{
        cout<<"Expert"<<endl;
    }*/

    string s;
    cout<<"Enter the record here"<<endl;
    cin>>s;
    int count = 0;
    for(int i=0; i<s.size(); i++){

        if ((s[i] =='r') && (s[i+1]=='r') && (s[i+2]=='r')){
            count=3;
            break;
        }
        if ((s[i] =='r') && (s[i+1]=='r')){
            count=2;
            break;
        }
        if ((s[i] =='r')){
            count=1;
            break;
        }
    }

    return 0;
}