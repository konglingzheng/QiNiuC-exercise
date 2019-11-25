#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main(void) {
	string in;
	string in2;
	int num=0;
	int len=0;
/*	while (cin >> in) {
		num++;
		len = len + in.length();
	}
	cout << "一共有" << num << "个单词" << endl;
	cout << "总长度：" << len << endl;
	num = 0;
	len = 0;
	system("pause");*/
	while (getline(cin,in2)) {
		num++;
		len += in2.length();
	}
	cout << "一共有" << num << "个单词" << endl;
	cout << "总长度：" << len << endl;
	system("pause");
	return 0;

}