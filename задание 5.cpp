/*#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int s1, s2, tt1, tt2;
	float tik, tok;
	cout << "Введите данные о работнике номер 1\n";
	cin >> s1 >> tt1;
	cout << "Введите данные о работнике номер 2\n";
	cin >> s2 >> tt2;
	cout << "Введите процент премии\n";
	cin >> tik;
	tok = (s1 * tt1 + s2 * tt2) * (1 + tik / 100) * 0.87;
	if (s1 * tt1 > s2 * tt2)
	{
		cout << "Работник номер 1 заработал больше\n";
	}
	else if (s1 * tt1 == s2 * tt2)
	{
		//cout << "Работники заработали одиннакого\n";
	}
	else
	{
		cout << "Работник номер 2 заработал больше\n";
	}
	cout << "Сумма 2 работников вместе = " << tok;
}*/