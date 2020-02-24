//now we'll move to application of recursion in a cp question Tower of Hanoi
/*
    Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:
    1) Only one disk can be moved at a time.
    2) Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
    3) No disk may be placed on top of a smaller disk.
*/
#include <iostream>
#include<vector>
#include<cstring>

using namespace std;



void shift(vector<string> &vect,int n,char from,char to,char through){
    if(n==1){
        //cout<<'o'<<endl;
        vect.push_back('from+to');
        return;
    }

    shift(vect,n-1,from,through,to);
    //shift(1,from,to,through);
    vect.push_back('from+to');

    shift(vect,n-1,through,to,from);
}

int main(){
    vector<string>shifts;
    shift(shifts,4,'1','2','3');
    cout<<::shifts[2]<<endl;
}