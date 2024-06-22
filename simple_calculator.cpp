#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Enter 1st Number: ";
    int num1,num2;
    cin>>num1;
    cout<<"Enter 2nd Number: ";
    cin>>num2;
    cout<<"Enter operator from (+,-,*,/): ";
    char op;
    cin>>op;
    int result;
    switch(op){
        case '+': result=num1+num2;
        break;
        case '-': result=num1-num2;
        break;
        case '*': result=num1*num2;
        break;
        case '/': result=num1/num2;
        break;
        default: cout<<"Wrong operator selected. Execute again.";
        return 0;
    }
    cout<<"Answer is: "<<result<<endl;

    return 0;
}