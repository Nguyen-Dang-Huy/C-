#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b,c="";
    cin >>a;
    cin >>b;
    cout << a.length() << " ";
    cout << b.length() << endl;
    c=a+b;
    cout <<c<<endl;
    cout <<b[0];
    for (int i=1;i<a.length();i++)
        cout <<a[i];
    cout <<" ";
    cout <<a[0];
    for (int i=1;i<b.length();i++)
        cout <<b[i];
    return 0;
}