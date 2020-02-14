// functions make it easy to debug a code and should be used only when you require a particular piece
// of code at multiple places. Note: 1 loop does not mean multiple places

// function contains return type, name, type and name of arguments, order and number of arguments
#include<iostream>
using namespace std;

int max(int a, int b){
    if(a>b)
        return a;
    return b;
}
int main(){
    cout<<max(69,96)<<endl;
}