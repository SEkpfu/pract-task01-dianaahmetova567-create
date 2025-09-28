/*#include <iostream>
using namespace std;
int f(float h, float tt, float gg, float& kk, float& dd, float& ff)
{
    kk = h * tt * (1 + gg / 100);
    dd = 13 * kk / 100;
    ff = kk - dd;
    return 0;
}
void minmaxelm(float a[], int n, float& nmn, float& nmx, float& mx, float& mn)
{
    nmn = 0;
    nmx = 0;
    mx = a[0];
    mn = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < mn)
        {
            mn = a[i];
            nmn = i;
        }
        if (a[i] > mx)
        {
            mx = a[i];
            nmx = i;
        }
    }
}
int oversmthg(float a[], int n, float smthg)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > smthg)
        {
            k++;
        }
    }
    return k;
}
float sumelm(float a[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
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
        cout << "������� ���������� ����� � ������ ��� ��������� " << i + 1 << endl;
        cin >> k[i] >> tt[i];
    }
    float ff[mx], dd[mx], kk[mx], over50k[mx], obsh = 0;
    for (int i = 0; i < n; i++)
    {
        f(k[i], tt[i], gg, kk[i], dd[i], ff[i]);
        over50k[i] = 0;
    }
    minmaxelm(ff, n, nmn, nmax, max, mn);
    kl = oversmthg(ff, n, 50000);
    for (int i = 0; i < n; i++)
    {
        if (ff[i] > 50000)
        {
            over50k[i] = 1;
        }
    }
    obsh = sumelm(dd, n);
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

}*/