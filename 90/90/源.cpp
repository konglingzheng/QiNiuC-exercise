#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
int main() {
	int year;
	string months[12] = { "31","0","31","30","31","30","31","31","30","31","30","31" };
	int month;
	cout << "请输入年份" << endl;
	cin >> year;
	cout << "请输入月份" << endl;
	cin >> month;
	if (year < 0 || month>12 || month < 0) {
		cout << "非法输入" << endl;
		system("pause");
		return 1;
	}
	if (month != 2) {
		cout << year << "年" << month << "月" << "有" << months[month - 1] << "天" << endl;
	}else {
		if (year % 4 == 0) {
			if (year % 100 == 0) {
				cout << year << "年" << month << "月" << "有" << 29<< "天," <<"为世纪闰年"<< endl;
			}else {
				cout << year << "年" << month << "月" << "有" << 29 << "天," <<"为普通闰年"<< endl;
			}
		}
		else {
			cout << year << "年" << month << "月" << "有" << 28 << "天," <<"为平年"<< endl;
		}
	}
	system("pause");
	return 0;
}
