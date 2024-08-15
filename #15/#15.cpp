
//write a program to ask the user to enter number 1, number2 then print the max number
#include <iostream>
using namespace std;

void readnumber(int &number1, int &number2)
{
	cout << "enter the number 1 \n";
	cin >> number1;
	cout << "enter the number 2 \n";
	cin >> number2;


}
int maxof2numbers(int number1, int number2)
{
	if (number1 >= number2)
		return number1;
	else
		return number2;

}
void printmaxnumber(int max)
{

	cout << "the max number is : " << max << endl;
}
int main()
{
	int number1, number2;
	readnumber(number1,number2);
	printmaxnumber(maxof2numbers(number1, number2)); 






  
}