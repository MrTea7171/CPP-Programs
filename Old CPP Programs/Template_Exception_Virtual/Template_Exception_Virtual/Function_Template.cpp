#include<iostream>
using namespace std;

template<typename T>
T large(T n1, T n2)
{
	if (n1>n2)
	{
		return n1;
	}
	else
	{
		return n2;
	}
}
/*int main()
{
	int i1, i2;
	float f1, f2;
	char c1, c2;
	cout << "enter two integers:\n";
	cin >> i1 >> i2;
	cout << large(i1, i2) << "is large." << endl;
	cout << "\nEnter two floating point numbers:\n";
	cin >> f1 >> f2;
	cout << large(f1, f2) << "is large" << endl;
	cout << "\nEnter two characters:\n" << endl;
	cin >> c1 >> c2;
	cout << large(c1, c2) << " has large ASCII value" << endl;
	return 0;
}*/