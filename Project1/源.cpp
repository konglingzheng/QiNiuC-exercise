//  ����Բ��ֱ��
//����Բ���ܳ�C  ���S
#include <iostream>
#include <windows.h>

using namespace std;
int main(void) {
	float r;
	float c;
	float s;
	cout << "������Բ��ֱ����";
	cout.precision(2);
	cout.flags(cout.fixed);
	cin >> r ;
	c = 3.14*r*2.0;
	s = 3.14*r*r;
	cout << "Բ���ܳ�Ϊ��" << c << endl;
	cout << "Բ�����Ϊ��" << s << endl;
	system("pause");
	return 0;
}