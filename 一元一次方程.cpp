#include<iostream>
#include<vector>
using namespace std;

vector<char> s;
vector<int> numbers;
vector<char> fuHao;
char inputChar;


int main()
{
    //输入算式
	//==============================
	cout << "Please input characters, end with '#':" << endl;
    do {
        cin >> inputChar;
        if (inputChar != '#') {
            s.push_back(inputChar);
		}
    }
	while (inputChar != '#');

    cout << "The inputing is complete." << endl;
	//==============================

    for (int i = 0; i < s.size(); i++)
    {
        //判断式子的开头是否符号
        if (i == 0 && (s[i] != '+' || s[i] != '-' || s[i] != '*' || s[i] != '*'))
        {
            s.insert(s.begin(),'+');
        }
    }
	//输出算式
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
    int jx = -1;
    int numberjx;
	//提取符号和数字
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == '+' || s[i] == '-') || (s[i] == '*' || s[i] == '/'))
        {
            fuHao.push_back(s[i]);
        }
    }
    cout << endl << "Debug:fuHao=";
    for(int i=0;i<fuHao.size();i++)
    {
        cout << fuHao[i] << " ";
    }
    cout << endl;
	return 0;
}