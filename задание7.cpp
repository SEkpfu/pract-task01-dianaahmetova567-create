/*#include <iostream>
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
	setlocale(LC_ALL, "");
	float gg, obsh = 0;
	cout << "¬ведите премиальный %\n";
	cin >> gg;
	for (int i = 1; i < 6; i++)
	{
		cout << "¬ведите кол-во часов и почасовую ставку работника номер " << i << endl;
		float h, tt, kk, dd, ff;
		cin >> h >> tt;
		f(h, tt, gg, kk, dd, ff);
		obsh += ff;
	}
	cout << "ќбща€ сумма = " << obsh << " руб.\n";
	cout << "—редн€€ зп = " << obsh / 5 << " руб.\n";
}*/