#include <iostream>
#include <vector>
#include <string>
using namespace std;
//sRight表示为等式右边
string sRight;
//sLeft表示为等式左边
string sLeft;
int main() {
    string s;
    cin >> s;
    cout << s << endl;

    //这一步使sRight是等式的右边，sLeft是等式的左边
    for (int i=0;i<s.length();i++) {
        if (s[i] == '=') {
            sRight = s.substr(0,i);
            sLeft = s.substr(i+1,s.length()-i);
        }
    }


}
