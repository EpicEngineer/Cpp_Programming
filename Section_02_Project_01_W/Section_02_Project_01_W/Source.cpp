#include <iostream>
using namespace std;

void main()
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

		cout << myCharacter << "\n" << myInteger << endl;
		// std::cout << "You Died! \n";  (line 2)

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


		// ====================================================================================================
		system("pause");
	}
}