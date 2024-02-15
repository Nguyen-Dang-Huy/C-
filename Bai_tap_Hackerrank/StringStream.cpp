#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
}

int main() {
    string str;
    cin >> str;
    // vector<int> integers = parseInts(str);
    // for(int i = 0; i < integers.size(); i++) {
    //     cout << integers[i] << "\n";
    // }
    for (int i=0; i <str.length();i++){
        if (str[i]!=',')
            cout << str[i];
        else
            cout << endl;
    }
    return 0;
}