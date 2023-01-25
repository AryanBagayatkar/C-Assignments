#include<iostream>
using namespace std;

int main(){
    int x ;
    cout<<"Enter a Number : ";
    cin>>x;

    if(x%3==0 && x%5==0){
        cout<<"This is good Number";
    }
    else if(x%3==0 && x%5!=0){
        cout<<"This is bad Number";
    }
    else if(x%3!=0 && x%5==0){
        cout<<"This is poor Number";
    }
    else{
        cout<<"-1";
    }
    return 0;
}

