#include "stdafx.h"
#include <string>
#include <iostream>
#include "Caesar.h"

using namespace std;
string Caesar::encryption(string row) {
	int alphabet = 26;
	string text; 
	for (int i = 0; i < row.size() ; i++)
	{
		
		if (isdigit(row[i])) {
			throw 1;
		}

		else {
			if (isalpha(row[i])) {
				row[i] += key;
				if (row[i] > 'z')
					row[i] = row[i] - alphabet;
				text += row[i]; 
				text = regist(row);
			}
		}
	}
	return text;
}

string Caesar::decryption(string row) {
	int alphabet = 26;
	
	string text; 
	for (int i = 0; i < row.size() ; i++)
	{
		
		if (isdigit(row[i])) {
			throw 1;
		}

		else {
			if (isalpha(row[i])) {

				row[i] -= key;
				if (row[i] < 'a')
					row[i] = row[i] + alphabet;

				text += row[i]; 
				text = regist(row);			 
			}
		}
	}
	return text;
}

string Caesar::regist(string row)
{
	string text;
	for (int i = 0; i < row.size() ; i++)
	{
		
		if (isdigit(row[i])) {
			throw 1;
		}

		else {
			if (isalpha(row[i])) {
				text += toupper(row[i]); 
			}
		}
	}
	return text;
}

