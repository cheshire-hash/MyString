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

void MyString::Print()
{
	cout << str << endl;
}

