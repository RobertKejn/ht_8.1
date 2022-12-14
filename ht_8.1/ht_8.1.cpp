#include <Windows.h>
#include <string>
#include <iostream>
#include "BadLength.h"

int function(std::string str, int forbidden_length) {
	if (str.length() != forbidden_length) return str.length();
	else throw BadLength{"Запретная длина строки"};
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int forbidden_length = 0;
	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;
	while (true)
	{
		try {
			std::string str;
			std::cout << "Введите слово: ";
			std::cin >> str;
			int length = function(str, forbidden_length);
			std::cout << "Длина слова " << str << " равна " << length << "\n";
		}
		catch (BadLength &e) {
			std::cout << "Вы ввели слово запретной длины!До свидания";
			break;
		}
	}

}
