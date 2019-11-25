//输入一个字符
//如果为小写字母，就转换成对应得大写字母
//如果为大写字母，就转换为对应的小写字母
//如果为别的字符，就不转换
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main(void) {
	char ch;
	cout << "请输入一个字符：";
	cin >> ch;
	if (ch >= 'a'&&ch <= 'z') {
		ch = ch - 'a' + 'A';
	}else if (ch >= 'A'&&ch <='Z') {
		ch = ch - 'A' + 'a';
	}
	cout << "转换后为：" << ch << endl;
	system("pause");
	return 0;
}