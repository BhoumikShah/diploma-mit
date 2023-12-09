#include<iostream>
using namespace std;

void add(int a, int b)
{ 
	cout<<"sum = "<<(a+b);
} 

void add(float a, float b)
{
	cout<<endl<<"sum = "<<(a+b);
} 

// Driver code
int main()
{
float floatNumbers[] = {1.5f, 2.5f, 3.5f, 4.5f, 5.5f};
    float floatSum = 0.0f;

    for (int i = 0; i < 5; ++i) {
        floatSum += floatNumbers[i];
    }

    cout << "Sum of float numbers = " << floatSum << endl;

    // Adding 10 integer numbers
    int intNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int intSum = 0;

    for (int i = 0; i < 10; ++i) {
        intSum += intNumbers[i];
    }

    cout << "Sum of integer numbers = " << intSum << endl;

	return 0;
}
