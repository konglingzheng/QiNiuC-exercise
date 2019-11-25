//  输入圆的直径
//计算圆的周长C  面积S
#include <iostream>
#include <windows.h>

using namespace std;
int main(void) {
	float r;
	float c;
	float s;
	cout << "请输入圆的直径：";
	cout.precision(2);
	cout.flags(cout.fixed);
	cin >> r ;
	c = 3.14*r*2.0;
	s = 3.14*r*r;
	cout << "圆的周长为：" << c << endl;
	cout << "圆的面积为：" << s << endl;
	system("pause");
	return 0;
}