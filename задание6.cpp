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
	cout << "������� ������ � ��������� ����� 1 (�������(<=20 ��������), ���-�� �����, ������/���)\n";

	cin >> surname1 >> k1 >> tt1;
	cout << "������� ������ � ��������� ����� 2 (�������(<=20 ��������), ���-�� �����, ������/���)\n";
	cin >> surname2 >> k2 >> tt2;
	cout << "������� �����������%\n";
	cin >> gg;
	f(k1, tt1, gg, kk1, dd1, ff1);
	f(k2, tt2, gg, kk2, dd2, ff2);
	if (ff1 < 1000)
	{
		cout << surname1 << " ��������� ������ 1000 ���." << endl;
	}
	if (ff2 < 1000)
	{
		cout << surname2 << "��������� ������ 1000 ���." << endl;
	}
	if (dd1 > 50)
	{
		cout << surname1.substr(0, 1) << "-" << surname1.substr(surname1.length() - 1, 1) << "�������� ����� ������ 50 ���." << endl;
	}
	if (dd2 > 50)
	{
		cout << surname2.substr(0, 1) << "-" << surname2.substr(surname2.length() - 1, 1) << "�������� ����� ������ 50 ���." << endl;
	}
}*/