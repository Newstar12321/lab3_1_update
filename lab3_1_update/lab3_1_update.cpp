#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int num;
	cout << "Введите ваше число ";
	cin >> num;
	if ((num < 100) || (num >= 1000))
		{
		cerr << "Ошибка: число должно быть положительным трехзначным" << endl;
		return 1;
		}
	if (
		((num / 100) != (num % 100 / 10)) &&
		((num / 100) != (num % 10)) &&
		((num % 100 / 10) != (num % 10))
		)
	{
		cout << "Все цифры числа различны" << endl;
	}
	else
	{
		cout << "Не все цифры числа различны" << endl;
	}
}