#include<iostream>
using namespace std;
string reverse(string name){
    int start = 0,end = name.size()-1;
    while(start<end){
        char temp = name[start];
        name[start] = name[end];
        name[end] = temp;
        ++start;
        --end;
    }
    return name;
}
int main(){
    string name= "aslamansari";
    reverse(name);
    return 0;
}