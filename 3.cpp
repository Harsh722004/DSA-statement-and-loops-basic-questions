#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    bool ISPRIME=true;
    for(int i=2;i<=a-1;i++){
        if(a % i==0){
            ISPRIME=false;
            break;

        }


    }
    if(ISPRIME==true){
        cout<<"prime no\n";

    }else{
        cout<<"non prime";
    }
    return 0;
}