#include "String.h"
#include<iostream> 
using namespace std;

MyString::MyString()
{
	lenght = 88;
	str = new char[lenght] {};
}

MyString::MyString(int size)
{
	lenght = size;
	str = new char[lenght] {};
}

MyString::MyString(const char* st)
{
	lenght = strlen(st);
	str = new char[lenght + 1];
	strcpy_s(str, lenght + 1, st);
}

MyString::~MyString()
{
	delete[] str;
	lenght = 0;
}

MyString::MyString(const MyString& st)
{
	str = new char[strlen(st.str) + 1]; //or [strlen(len) + 1]
	strcpy_s(str, strlen(st.str) + 1, st.str); //or strlen(len) + 1
	lenght = st.lenght;
	cout << "Copy constructer";
}

bool MyString::MyStrStrt(const char* str)
{
	const char* s = strstr(this->str, str);
	if (s != nullptr) {
		return true;
	}
	return false;
}

int MyString::MyStrlen()
{
	return 0;
}

int MyString::MyChr(char c)
{
	char* s = this->str;
	for (int i = 0; i < lenght + 1; i++)
	{
		if (s[i] == c) {
			return i;
		}
	}
	return -1;

}

void MyString::MyStrCopy(const MyString& obj)
{
	str  = new char[strlen(obj.str) + 1]; //or [strlen(len) + 1]
	strcpy_s(str, strlen(obj.str) + 1, obj.str); //or strlen(len) + 1
	lenght = obj.lenght;   
}

void MyString::MyStrCat(MyString& b)
{
	int intforspace = 1;
	int newLen = lenght + b.lenght;
	char* newStr = new char[newLen + intforspace + 1];
	strcpy_s(newStr, lenght + intforspace + 1, str);
	for (int i = 0; b.str[i] != '/0'; i++)
	{
		if (lenght > 0 && newLen > 0) {
			newStr[lenght] = ' ';
			newStr[lenght + 1 + i] = b.str[i];
		}
	}
}

void MyString::MyDelChr(char c)
{
	int count = 0;

	for (int i = 0; i < lenght + 1; i++) {
		if (c == count) {
			count++;
		}
	}
	int newsize = lenght - count;
	for (int i = 0; i < newsize; i++) {
		char* newstr = new char[newsize + 1];
		int j = 0;
		for (int i = 0; i < lenght + 1; i++) {
			if (str[j] != c) {
				newstr[j] = str[i];
				j++;
			}
		}
		delete[] str;
		str = newstr;
		lenght = newsize;
	}
}

void MyString::Print()
{
	cout << str << endl;
}

MyString::MyString(MyString&& obj)
{
	lenght = obj.lenght;
	obj.lenght = 0;
	str = obj.str;
	obj.str = nullptr;
	cout << "Move constructor";
}

