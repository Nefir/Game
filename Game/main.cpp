#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void who_win(string sol1, string sol2) {
	if (sol1 == sol2) {
		cout << "�����";
	}
	else if ((sol1 == "������" and sol2 == "�������") or (sol1 == "�������" and sol2 == "������") or (sol1 == "������" and sol2 == "������")) {
		cout << "������ ����� ������� ������";
	}
	else {
		cout << "������ ����� ������� ������";
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string logic_answer, sol1, sol2;
	cout << "������ �� �� ������� � '������ ������� ������'? ('Y' ��� 'N')" << endl;
	cin >> logic_answer;
	if (logic_answer == "Y") {
		cout << "������ �����: ������� ���� '������' ���� '�������' ���� '������'" << endl;
		cin >> sol1;
		cout << "������ �����: ������� ���� '������' ���� '�������' ���� '������'" << endl;
		cin >> sol2;
		who_win(sol1, sol2);
	}
	else {
		return 0;
	}
		return 0;
}