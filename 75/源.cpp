//  输入一个整数， 把这个数的二进制最低四位替换成 0110；
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main() {
	unsigned int a;
	cin >> a;
	a = a&~15|6;
	cout << "a=" << a << endl;;
	system("pause");
	return 0;

}