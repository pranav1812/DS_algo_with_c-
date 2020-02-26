// classes are like user defined datatypes with desired properties and methods
#include<iostream>
using namespace std;

class Car{
    public:
        string brand;
        string type;
        string model;
        int price;
        int milage;
        Car(string brand1, string model1, string type1,int price1, int milage1){
            brand= brand1;
            model= model1;
            price=price1;
            milage=milage1;
            type= type1;
        }
        int valueForMoney1(int price, int milage){

            int reply= price/milage <=50000? 10: price/milage <=60000? 9:price/milage <=70000? 8:price/milage <=80000? 7: 6;
            return reply;
        }
        int valueForMoney2(int price, string type){
            int reply;
            if(type=="luv")
                reply= price<1500000? 10: price<2000000? 9: price<2500000? 8: price<3000000? 7:6;
            if(type=="suv")
                reply= price<800000? 10: price<1200000? 9: price<1500000? 8: price<1800000? 7:6;

            if(type=="regular")
                reply= price<500000? 10: price<800000? 9: price<1000000? 8: price<1300000? 7:6;

            return reply;
        }
        string valueForMoney(int rep1,int rep2){
            int pro=rep1*rep2;
            string rep= pro>80? "yes": pro>65? "your call": "no";
            return rep;
        }


};

int main(){
    Car sx4=Car("Suzuki","2012","luv",1300000,18);
    Car verna=Car("hundai","2017","luv",1000000,15);
    cout<<sx4.valueForMoney(sx4.valueForMoney1(sx4.price, sx4.milage), sx4.valueForMoney2(sx4.price, sx4.type))<<endl;

}
// Rule of thumb:never name the parameters of constructor functions same as properties
// you can fall into deep shit unless you know the reason for error