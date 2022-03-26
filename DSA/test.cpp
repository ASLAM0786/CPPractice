#include<iostream>

using namespace std;
int main(){
    int x;
    cin>>x;

    //case 1000> 10 extra
    //case 500 5 extra
    //100 2 extra
    // case <100 -2 extra
    if(x>=1000){
        x = x+10;
    }
    else if(x>=500){
        x = x+5;
    }
    else if(x>=100){
        x+=2;
    }
    else{
        x-=2;
    }
    cout<<"Final Amount"<<x;
}