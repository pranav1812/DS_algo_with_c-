// simple program to find factorial of a number using recursion
#include<iostream>
using namespace std;

long long fact(int i){
    if(i==1)
        return 1;
    else
        return i*fact(--i);
}
int main(){
    cout<<fact(20)<<endl;
}