#include "String.h"
#include<iostream> 
using namespace std;
int MyString::count = 0;
MyString::MyString()
{
	lenght = 88;
	str = new char[lenght] {};
	count++;
}

MyString::MyString(int size)
{
	lenght = size;
	str = new char[lenght] {};
	count++;
}

MyString::MyString(const char* st)
{
	lenght = strlen(st);
	str = new char[lenght + 1];
	strcpy_s(str, lenght + 1, st);
	count++;
}

MyString::~MyString()
{
	delete[] str;
	lenght = 0;
	count--;
}

MyString MyString::GetString()
{
	return MyString();
}

MyString::MyString(const MyString& st)
{
	str = new char[strlen(st.str) + 1]; //or [strlen(len) + 1]
	strcpy_s(str, strlen(st.str) + 1, st.str); //or strlen(len) + 1
	lenght = st.lenght;
	cout << "Copy constructer";
	count++;
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
	for (int i = 0; i < lenght; i++)
	{
		if (s[i] == c) {
			return i;
		}
	}
	return -1;

}

void MyString::MyStrCopy(const MyString& obj)
{
	delete[] str;
	str  = new char[strlen(obj.str) + 1]; //or [strlen(len) + 1]
	strcpy_s(str, strlen(obj.str) + 1, obj.str); //or strlen(len) + 1
	lenght = obj.lenght;   
}

void MyString::MyStrCat(MyString& b)
{
	int intForSpace = 1; // space between strings
	int newLen = lenght + intForSpace + b.lenght;

	char* newStr = new char[newLen + 1]; // +1 for null terminator
	strcpy_s(newStr, newLen + 1, str);
	newStr[lenght] = ' ';
	strcpy_s(newStr + lenght + 1, b.lenght + 1, b.str);

	// Delete old string and update object
	delete[] str;
	str = newStr;
	lenght = newLen;
}

void MyString::MyDelChr(char c)
{
	int j = 0;
	for (int i = 0; i < lenght; ++i)
	{
		if (str[i] != c)
		{
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0'; 
	lenght = j;  
}

int MyString::MyStrCmp(MyString& b)
{
	int i = 0;
	while (str[i] == b.str[i]) {
		if (str[i] == '\0' || b.str[i] == '\0') {
			break;
		}
		i++;
	}
	return str[i] - b.str[i];
}

//void MyString::MyDelChr(char c)
//{
//	int count = 0;
//
//	for (int i = 0; i < lenght + 1; i++) {
//		if (c == count) {
//			count++;
//		}
//	}
//	int newsize = lenght - count;
//	for (int i = 0; i < newsize; i++) {
//		char* newstr = new char[newsize + 1];
//		int j = 0;
//		for (int i = 0; i < lenght + 1; i++) {
//			if (str[j] != c) {
//				newstr[j] = str[i];
//				j++;
//			}
//		}
//		delete[] str;
//		str = newstr;
//		lenght = newsize;
//	}
//} DONT WORK

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
	count++;
}

int MyString::GetCount()
{
	return count;
}

void MyString::ShowCount()
{
	cout << MyString::GetCount() << endl;
}

MyString MyString::operator+(MyString& b)
{
	MyString temp(*this);
	strcpy_s(temp.str, lenght + 1, str);
	temp.MyStrCat(b);
	return temp;
}

MyString MyString::operator-(const char* c)
{
	MyString temp(*this);
	for (int i = 0; c[i] != '\0'; i++) {
		temp.MyDelChr(c[i]);
	}
	return temp;
}

MyString& MyString::operator++() {
	int space = 1;
	int nullterminator = 1;
	char* newstr = new char[lenght + space + nullterminator];
	if (str != nullptr) {
		strcpy_s(newstr, lenght + space + nullterminator, str);
	}
	newstr[lenght] = ' ';
	newstr[lenght + space] = '\0';
	delete[] str;
	str = newstr;
	lenght = lenght + space;
	return *this;
}
