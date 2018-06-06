#include "stdafx.h"
#include <iostream>
#include <string>
#include "Caesar.h"

using namespace std;
int main()
{
	string row, text;
	int mode, key;
	try {
		cout << "Enter string> ";
		getline(cin, row);
		cout << " 1 - For encryption  2 - For decryption ";
		cin >> mode;
		cout << "Enter key> ";
		cin >> key;
		Caesar c(key);
		if (mode == 1) {
			row = c.encryption(row);
			cout << row << " ";
		}

		else if (mode == 2) {
			row = c.decryption(row);
			cout << row << " ";
		}
	}

	catch (int k)
	{
		cout << "Error " << k << "! You cannot use digit or Russian alphabet" << endl;
	}

	return 0;
}