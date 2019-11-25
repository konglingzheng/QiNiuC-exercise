//输入数字 0 - 9
//打印对应的 大写数字
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main(void) {
	int num = 0;
	string array[10] = {"零","一","二","三","四","五","六","七","八","九"};
	cin >> num;
	if (num >= 0 && num <= 9) {
		cout << num << "对应的大写数字是：" << array[num ] << endl;
	}
	else {
		cout << "输入有无" << endl;
	}
	system("pause");
	return 0;
}