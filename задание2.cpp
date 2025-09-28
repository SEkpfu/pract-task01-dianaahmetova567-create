#include <iostream>
using namespace std;

float dog(float(h), float(r), float(b))
{
	return (h * r) * (1 + b / 100);
}
float tt(float(h))
{
	return h * 0.13;
}
float nn(float(h))
{
	return h * 0.87;
}
int main()
{
	float h, r, b, t, u, g;
	cin >> h >> r >> b;
	t = dog(h, r, b);
	u = tt(t);
	g = nn(t);
	cout << t << endl;
	cout << u << endl;
	cout << g << endl;
	return 0;
}