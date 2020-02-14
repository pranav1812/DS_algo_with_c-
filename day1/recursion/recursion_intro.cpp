// recurssion is basically a function calling itself
// it is a very important concept as far as dynamic programming, CP and advanced algorithms are concerned

// as an intro code we'll write a code to print 1st 10 multiples of 5 using recursion
//note: this kind of problems are not supposed to be done using recursion rather use iteration

#include<iostream>
using namespace std;

void printnum(int i){
    if(i==10)
        cout<<5*10<<endl;
    else{
        cout<<5*i<<endl;
        printnum(++i);//post increment would have led to infinite recursion as input would have been assigned i not i+1
    }
}

int main(){
    printnum(1);
}