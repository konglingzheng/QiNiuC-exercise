//�������� 0 - 9
//��ӡ��Ӧ�� ��д����
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main(void) {
	int num = 0;
	string array[10] = {"��","һ","��","��","��","��","��","��","��","��"};
	cin >> num;
	if (num >= 0 && num <= 9) {
		cout << num << "��Ӧ�Ĵ�д�����ǣ�" << array[num ] << endl;
	}
	else {
		cout << "��������" << endl;
	}
	system("pause");
	return 0;
}