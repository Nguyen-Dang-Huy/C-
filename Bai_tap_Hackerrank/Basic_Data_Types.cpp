#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    string s, temp="";
    int counter=0;
    float f;
    double d;
    getline(cin,s);
    s=s+' ';
    for (int i=0; i<s.length();i++){
        if (s[i]!=' '){
            temp =temp +s[i];
        }
        else{
            counter+=1;
            if (counter==1){
                cout<< temp<<endl;
                temp="";
            }
            if (counter==2){
                cout<< temp<<endl;
                temp="";
            }
            if (counter==3){
                cout<< temp<<endl;
                temp="";
            }
            if (counter==4){
                f=stof(temp);
                cout << setprecision(3) << fixed << f << endl;
                temp="";
            }
            if (counter==5){
                d=stod(temp);
                cout << setprecision(9) << fixed << d;
            }
        }
        

    }
    return 0;
}