#include <iostream>
using namespace std;
int main()
{
	std::cout << "My name is Amber. Help me solve this equation for x. Ax + B = 0" << std::endl;
	
	float A;
	float B;
	float X;
	
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "A=" << A << endl;
	cout << "Please enter a value for B: ";
	cin >> B;
	cout << "And B=" << B << endl;
	
	X = (-B / A);
	
	cout << "X=" << X << endl;
}
