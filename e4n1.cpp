// Experiment4 Problem no. 1 //

#include<iostream>

using namespace std;

void menu()
{
	int choice;
	int num1, num2;
	double result;
	char exit_flag = 'y';
	
	cout << "MENU:" << endl;
	cout << "\t1. Add" << endl;
	cout << "\t2. Subtract" << endl;
	cout << "\t3. Multiply" << endl;
	cout << "\t4. Divide" << endl;
	cout << "\t5. Modulus" << endl;
	
	do
	{
		cout << "Enter your choice: "; 
		cin >> choice;
		cout << "Enter your two numbers: "; 
		cin >> num1 >> num2;
		
		switch(choice)
		{
			case 1: 
				result = num1 + num2;
				break;
			case 2: 
				result = num1 - num2;
				break;
			case 3: 
				result = num1 * num2;
				break;
			case 4: 
				result = num1 / num2;
				break;
			case 5: 
				result = num1 % num2;
				break;
			default: cout << "Invalid Input";
		}
		
		cout << "Result: " << result << endl;
		cout << "Continue?(y/n)"; 
		cin >> exit_flag;
		
		if(exit_flag != 'y' || exit_flag != 'Y')
		{
			break;
		}
	}
	while(true);
}

int main()
{
	menu();
}

