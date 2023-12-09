#include <iostream>
using namespace std;

void multiply(int a, int b)
{
cout << "area of lab = " << (a * b);
}

void multiply(int a)
{
	cout << endl << "area of classroom = " << (a*a);
}

// Driver code
int main()
{
	multiply(10, 2);
	multiply(5);

	return 0;
}
