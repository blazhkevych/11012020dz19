/*
* Пользователь 	вводит с клавиатуры символ.Вывести на 	экран его код.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введите символ с клавиатуры: ";
	char a;
	cin >> a;
	cout << a << " имеет ASCII код " << static_cast<int>(a) << endl;
	return 0;
}
