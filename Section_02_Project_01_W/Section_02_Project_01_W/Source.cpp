#include <iostream>
using namespace std;

int MyFunction1(int Param_one, int Param_two)
{
	int local_variable;
	local_variable = Param_one + Param_two;
	cout << "The local variable is: " << local_variable << " !" << endl;
	return local_variable;
}

void MyFunction2()
{
	cout << "Void functions doesn't need the 'return' statement! \n";
	// return;
	
	// When the last line of code of this function (that have a 'void' return-type) is executed,
	// the next expression to be executed will be on the caller, no matter if there is an explicit "return" statement...
	
	// When the return type of the function is "void", the "return" statement is not necessary (it will be implicit),
	// since the generated Assembly code is the same for implicit and explicit "return" statements.
}

void MyFunction3()
{
	cout << "Welcome! \n";
}

int main()
{
	for (;;)
	{
		// ====================================================================================================


		char myCharacter;
		myCharacter = 'Y';

		int myInteger;
		myInteger = 13;

		std::string myString;
		myString = "hello";

		// std::cout << "You Died! \n";  (line 2)
		cout << myCharacter << "\n" << myInteger << endl;

		myCharacter = 'n';
		myInteger = 24;

		cout << myString << endl;

		if (5 != 4)
		{
			cout << "The 'if' Statement is true!" << endl;
		}
		else if (5 !=5)
		{
			cout << "The 'if' Statement if false!" << endl;
		}
		else
		{
			cout << "Third condition was achieved!" << endl;
		}

		MyFunction1(myInteger, 5);
		MyFunction3();
		MyFunction2();


		// ====================================================================================================
		system("pause");
	}
}
