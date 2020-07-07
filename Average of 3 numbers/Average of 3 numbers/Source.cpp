#include <iostream>

using namespace std;

int main() {
	cout << "Constants \n" << endl;

	cout << "Write the average of the 3 numbers" << endl;


	int num1, num2, num3;

	cout << "What is the first number: " << endl;
	cin >> num1;

	cout << "What is the second number: " << endl;
	cin >> num2;

	cout << "What is the third number: " << endl;
	cin >> num3;

	float average = (num1 + num2 + num3) / 3;

	cout << "The average is: " << average << endl;

	return 0;
}