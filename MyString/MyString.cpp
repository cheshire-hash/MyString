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
	str = new char[strlen(st.str)]; //or [strlen(len) + 1]
	strcpy_s(str, strlen(st.str), st.str); //or strlen(len) + 1
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
	return lenght;
}

int MyString::MyChr(char c)
{
	return 0;
}

MyString MyString::MyStrCopy(const MyString& obj)
{
	str  = new char[strlen(obj.str)]; //or [strlen(len) + 1]
	strcpy_s(str, strlen(obj.str), obj.str); //or strlen(len) + 1
	lenght = obj.lenght;   
	return MyString();
}

