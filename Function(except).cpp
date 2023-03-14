#include <iostream>
using namespace std;
int Function(int a, int b)
{
	int t;
	t = a / b;
	cout << "the t is :" << t << endl;
	return t;
}
int main()
{
	int c1 = Function(5, 1);
	int c2 = Function(2, 1);
	int c3 = Function(9, 3);
}