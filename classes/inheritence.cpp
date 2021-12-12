// understanding the access specifiers

#include<iostream>
using namespace std;

class Citizen{
    private:
        string adharNum;
         string PAN;

    public:
        string name;
        int age;
        Citizen(string name1, int age1, string adharNum1, string PAN1){
            // bullshit that may occur: if you name the parameters as name, age .... instead of name1, age1 ...
            // you won't be able to see/ get a wrong value when call these properties

            name=name1;
            age=age1;
            adharNum=adharNum1;
            PAN=PAN1;

        }
        void show(){
            cout<<PAN<<endl;
        }

};
int main(){
    Citizen gaga=Citizen("himanshu",19,"illegal420","PB6969");
    cout<<"details \n"<<gaga.name<<endl;
    //cout<<gaga.PAN<<endl; will not work as PAN is not public
    gaga.show();
    Citizen santa("santa",19,"jdkalcm","woihrjfdc");
    cout<<"details \n"<<santa.name<<endl;
}
