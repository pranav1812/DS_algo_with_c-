#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string partName(int length,string number){
    //cout<<number<<endl;
    string partname="";
    for(int i=0;i<length;i++){
        if((length-i)%2){
            string options[18]={"1"," one","2"," two","3"," three","4"," four","5"," five","6"," six","7"," seven","8"," eight","9"," nine"};
            string temp=number.substr(i,1);
            for(int j=0;j<17;j+=2){
                if(options[j]==temp)
                    partname+=options[j+1];

            }
            if(length-i==3)
                partname+=" hundred";

        }
        else{
            string options[18]={"1"," onty","2"," twenty","3"," thirty","4"," forty","5"," fifty","6"," sixty","7"," seventy","8"," eighty","9"," ninety"};
            string temp=number.substr(i,1);
            for(int j=0;j<17;j+=2){
                if(options[j]==temp)
                    partname+=options[j+1];
        }
    }

    }
    return partname;
}

string partValue(int no){
    string arr[5]={" ","thousand","million","billion","trillion"};
    return arr[no-1];
}

int countParts(string number){

    return ceil((float)number.length()/3);
}
string inWords(int parts,string number){
    string arr[parts];
    string ans;
    int index=0,head=0;
    int firstPart=number.length()%3 !=0 ? number.length()%3  : 3;
    string partIndigits=number.substr(head,firstPart);
    string partname=partName(firstPart,partIndigits)+' '+partValue(parts);

    arr[0]=partname;
    ans=partname;
    head+=firstPart;

    for(int i=1;i<parts;i++){
        string partIndigits=number.substr(head,3);
        //cout<<partIndigits<<endl;
        string partname=partName(3,partIndigits)+' '+partValue(parts-i);
        arr[i]=partname;
        ans+=partname;
        head+=3;
    }
    string answer=" ";
    for(int i=0;i<parts;i++){
        answer+=arr[i];
    }
    return ans;

}

int main(){
    string num;
    getline(cin,num);
    int parts=countParts(num);
    string word=inWords(parts,num);

    cout<<word<<endl;
}