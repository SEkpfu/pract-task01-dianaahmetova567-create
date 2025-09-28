/*#include <string>
#include <iostream>
using namespace std;
int f(float h, float tt, float gg, float& kk, float& dd, float& ff)
{
	kk = h * tt * (1 + gg / 100);
	dd = 13 * kk / 100;
	ff = kk - dd;
	return 0;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	float k1, k2, tt1, tt2, gg, kk1, dd1, ff1, kk2, dd2, ff2;
	string surname1, surname2;
	cout << "Введите данные о работнике номер 1 (Фамилия(<=20 символов), кол-во часов, ставка/час)\n";

	cin >> surname1 >> k1 >> tt1;
	cout << "Введите данные о работнике номер 2 (Фамилия(<=20 символов), кол-во часов, ставка/час)\n";
	cin >> surname2 >> k2 >> tt2;
	cout << "Введите премиальный%\n";
	cin >> gg;
	f(k1, tt1, gg, kk1, dd1, ff1);
	f(k2, tt2, gg, kk2, dd2, ff2);
	if (ff1 < 1000)
	{
		cout << surname1 << " заработал меньше 1000 руб." << endl;
	}
	if (ff2 < 1000)
	{
		cout << surname2 << "Заработал меньше 1000 руб." << endl;
	}
	if (dd1 > 50)
	{
		cout << surname1.substr(0, 1) << "-" << surname1.substr(surname1.length() - 1, 1) << "Заплатил налог больше 50 руб." << endl;
	}
	if (dd2 > 50)
	{
		cout << surname2.substr(0, 1) << "-" << surname2.substr(surname2.length() - 1, 1) << "Заплатил налог больше 50 руб." << endl;
	}
}*/