#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Guess the number between 1 to 100: ";
    int guess,llim=1,rlim=100;
    cin>>guess;
    
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<> rgen(llim,rlim);
    int num=rgen(gen);
    while(guess!=num){
        if(num>=guess+10){
            cout<<"Wrong Guess! Number is too big. Try again: ";
        }
        else if(num<=guess-10){
            cout<<"Wrong Guess! Number is too small. Try again: ";
        }
        else if(num>guess&&num<guess+10){
            cout<<"You are too close! Try higher: ";
        }
        else{
            cout<<"You are too close! Try lower: ";
        }
        cin>>guess;

    }
    cout<<"You Won!!!"<<endl;

    return 0;
}