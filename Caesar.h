#pragma once
#include <iostream>
#include <string>
using namespace std;
class Caesar
{
private:
	int key;
	string regist(string text);
public:
	Caesar(int x) :
		key(x) {}
	string encryption(string row);
	string decryption(string row);
};