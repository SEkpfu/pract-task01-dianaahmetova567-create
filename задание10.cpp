/*#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	const int workers = 4, months = 12;
	float h[workers][months], stavka[workers], dd[workers][months],
		kk[workers][months], ff[workers][months], gg, all[workers][months][3], summanaloga = 0;
	cout << "������� �����������%\n";
	cin >> gg;
	for (int i = 0; i < workers; i++)
	{
		cout << "������� ��������� ������ ��� ��������� " << i + 1 << endl;
		cin >> stavka[i];
		for (int j = 0; j < months; j++)
		{
			cout << "������� ���������� ������������ ����� ��� ��������� " << i + 1 << " � ������ " << j + 1 << endl;
			cin >> h[i][j];
		}
	}
	for (int i = 0; i < workers; i++)
	{
		for (int j = 0; j < months; j++)
		{
			all[i][j][0] = stavka[i] * h[i][j] * (1 + gg / 100);              //sum
			all[i][j][1] = all[i][j][0] * 0.13;   ///dd
			all[i][j][2] = all[i][j][0] - all[i][j][1]; /// ff
		}

	}
	cout << "�����, ���������� ������ ���������� �� ���� �� ������ ������ = " << all[0][1][2] << "���.\n";
	for (int i = 0; i < months; i++)
	{
		summanaloga += all[2][i][1];
	}
	cout << "����� ����� ������ � 3 ��������� �� ���� ��� " << summanaloga << " ���.\n";
	float mx = all[0][2][2], nbolshe = 0, brigada = 0;
	for (int i = 1; i < workers; i++)
	{
		if (all[i][2][2] > mx)
		{
			mx = all[i][2][2];
			nbolshe = i;
		}
	}
	cout << "������ ���� ��������� � 3 ������ �������� ��� ������� " << nbolshe + 1 << endl;
	for (int i = 0; i < workers; i++)
	{
		for (int j = 0; j < months; j++)
		{
			brigada += all[i][j][2];
		}
	}
	cout << "��� ������� ���������� �� ��� " << brigada << " ���.\n";
}*/