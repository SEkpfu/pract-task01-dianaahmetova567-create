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
    setlocale(LC_ALL, "");
    const int mx = 100;//������a����� ����� ����������
    float gg, mn, nmn, max, nmax, kl = 0;
    int n;
    cout << "������� ���-�� �������������\n";
    cin >> n;
    cout << "������� �����������%\n";
    cin >> gg;
    float k[mx], tt[mx];
    for (int i = 0; i < n; i++)
    {
        cout << "������� ���������� ����� � ������ ��� ��������� " << i << endl;
        cin >> k[i] >> tt[i];
    }
    float ff[mx], dd[mx], kk[mx], over50k[mx], obsh = 0;
    for (int i = 0; i < n; i++)
    {
        f(k[i], tt[i], gg, kk[i], dd[i], ff[i]);
        over50k[i] = 0;
    }
    mn = ff[0];
    nmn = 0;
    max = ff[0];
    nmax = 0;
    for (int i = 1; i < n; i++)
    {
        if (ff[i] < mn)
        {
            nmn = i;
            mn = ff[i];

        }
        if (ff[i] > max)
        {
            max = ff[i];
            nmax = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ff[i] > 50000)
        {
            kl++;
            over50k[i] = 1;

        }
        obsh += dd[i];
    }
    cout << "�������� " << nmn + 1 << " ������� ������ ����\n";
    cout << "�������� " << nmax + 1 << " ������� ������ ����, � ������ " << max << " ���.\n";
    if (kl > 0)
    {
        cout << "��������� � ���������� " << kl << " ������� �������� ����� 50000 ���., � ������ ��������� ��� ��������:\n";
        for (int i = 0; i < n; i++)
        {
            if (over50k[i] == 1)
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << "����� �� ������� ����� 50000 ���.\n";
    }

    cout << "����� ����� ������, ���������� ���� �������� = " << obsh << " ���.\n";


}