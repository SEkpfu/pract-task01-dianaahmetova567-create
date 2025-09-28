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
    const int mx = 100;//Максимaльное число работников
    float gg, mn, nmn, max, nmax, kl = 0;
    int n;
    cout << "Введите кол-во пользователей\n";
    cin >> n;
    cout << "Введите премиальный%\n";
    cin >> gg;
    float k[mx], tt[mx];
    for (int i = 0; i < n; i++)
    {
        cout << "введите количество часов и ставку для работника " << i + 1 << endl;
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
    cout << "Работник " << nmn + 1 << " получил меньше всех\n";
    cout << "Работник " << nmax + 1 << " получил больше всех, а именно " << max << " руб.\n";
    if (kl > 0)
    {
        cout << "Работники в количестве " << kl << " человек получили более 50000 руб., а именно работники под номерами:\n";
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
        cout << "Никто не получил более 50000 руб.\n";
    }

    cout << "Общая сумма налога, уплаченная всей бригадой = " << obsh << " руб.\n";

}*/