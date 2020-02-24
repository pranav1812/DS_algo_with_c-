// An array is a collection of objects(items) of same type


// basics of data-types:
// -----------------------------------------------------------------------------------------
// // strings: string keyword works without any header
// // string is a class and all basic string methods work fine without including string

// // concatenation: +
// // assignment/copy: =
// // compare: ==

// #include<iostream>
// // #include<cstring>
// using namespace std;

// int main(){
//     string name="Pranav Vohra";
//     if(name=="1812"){
//         cout<<69<<endl;
//     }else{
//         cout<<name<<"!="<<"1812"<<endl;
//     }
//     cout<<name.substr(1,5)<<endl;
//     cout<<name.find('n')<<endl;
//     cout<<name.length()<<endl;
//     cout<<name.size()<<endl;
//     cout<<name.capacity()<<endl;
//     // name.reserve(17);
//     // cout<<name.capacity()<<endl;
//     name.insert(7,"z");
//     cout<<name<<endl;


// }

// -----------------------------------------------------------------------------------------------

// float, double, int, long, long long

// #include<iostream>
// using namespace std;

// int main(){
//     float num=69.96;
//     double num2=89.5;
//     int num3=96;
//     long num4=69;
//     long long num5=100;
//     cout<<sizeof(num)<<endl;
//     cout<<sizeof(num2)<<endl;
//     cout<<sizeof(num3)<<endl;
//     cout<<(int)(num3/num2)<<endl;
//     cout<<sizeof(num4)<<endl;
//     cout<<sizeof(num5)<<endl;
//     //size of long and long long are same ie. 8 bytes

//     double* address;
//     float* add;
//     double k=69.96;
//     address=&k;
//     //add=&k;  float value can't be assigned to a doublu and vice versa

//     // max value of int is 2147483647
//     int x=2147483649;
//     long y=2147483649;
//     cout<<x<<endl;
//     cout<<y<<endl;
//     bool decision=false;
//     int count=0;
//     while(!decision){
//         if(count==7)
//             decision=true;
//         cout<<(bool)decision<<endl;
//         count++;
//     }

// }

//------------------------------------------------------------------------------------------------

// pointer game

#include<iostream>
using namespace std;
int main(){
    // each time this program runs, new memory location is alloted to the variables
    int x=69;
    int *point=new int(x);
    int **pointer=new int*(point);
    int ***pointer2=&pointer;
    cout<<***pointer2<<endl;
    delete point;
    cout<<**pointer2<<endl;
    cout<<point<<endl;
    delete pointer;
    cout<<***pointer2<<endl;


}