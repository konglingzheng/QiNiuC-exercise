//  ����һ�������� ��������Ķ����������λ�滻�� 0110��
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