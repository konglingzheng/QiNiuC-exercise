#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
int main() {
	int year;
	string months[12] = { "31","0","31","30","31","30","31","31","30","31","30","31" };
	int month;
	cout << "���������" << endl;
	cin >> year;
	cout << "�������·�" << endl;
	cin >> month;
	if (year < 0 || month>12 || month < 0) {
		cout << "�Ƿ�����" << endl;
		system("pause");
		return 1;
	}
	if (month != 2) {
		cout << year << "��" << month << "��" << "��" << months[month - 1] << "��" << endl;
	}else {
		if (year % 4 == 0) {
			if (year % 100 == 0) {
				cout << year << "��" << month << "��" << "��" << 29<< "��," <<"Ϊ��������"<< endl;
			}else {
				cout << year << "��" << month << "��" << "��" << 29 << "��," <<"Ϊ��ͨ����"<< endl;
			}
		}
		else {
			cout << year << "��" << month << "��" << "��" << 28 << "��," <<"Ϊƽ��"<< endl;
		}
	}
	system("pause");
	return 0;
}
