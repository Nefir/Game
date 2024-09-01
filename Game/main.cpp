#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void who_win(string sol1, string sol2) {
	if (sol1 == sol2) {
		cout << "Ничья";
	}
	else if ((sol1 == "Камень" and sol2 == "Ножницы") or (sol1 == "Ножницы" and sol2 == "Бумага") or (sol1 == "Бумага" and sol2 == "Камень")) {
		cout << "Первый игрок одержал победу";
	}
	else {
		cout << "Второй игрок одержал победу";
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string logic_answer, sol1, sol2;
	cout << "Хотите ли вы сыграть в 'Камень Ножницы Бумага'? ('Y' или 'N')" << endl;
	cin >> logic_answer;
	if (logic_answer == "Y") {
		cout << "Первый игрок: Введите либо 'Камень' либо 'Ножницы' либо 'Бумага'" << endl;
		cin >> sol1;
		cout << "Второй игрок: Введите либо 'Камень' либо 'Ножницы' либо 'Бумага'" << endl;
		cin >> sol2;
		who_win(sol1, sol2);
	}
	else {
		return 0;
	}
		return 0;
}