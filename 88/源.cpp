//����һ���ַ�
//���ΪСд��ĸ����ת���ɶ�Ӧ�ô�д��ĸ
//���Ϊ��д��ĸ����ת��Ϊ��Ӧ��Сд��ĸ
//���Ϊ����ַ����Ͳ�ת��
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main(void) {
	char ch;
	cout << "������һ���ַ���";
	cin >> ch;
	if (ch >= 'a'&&ch <= 'z') {
		ch = ch - 'a' + 'A';
	}else if (ch >= 'A'&&ch <='Z') {
		ch = ch - 'A' + 'a';
	}
	cout << "ת����Ϊ��" << ch << endl;
	system("pause");
	return 0;
}