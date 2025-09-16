#pragma once
class MyString
{
	char* str;
	int lenght;
public:
	MyString();
	MyString(int size);
	MyString(const char* st);
	~MyString();
	MyString(const MyString& obj);
	bool MyStrStrt(const char* str);
	int MyStrlen(); //возвращает длину строки
 
};

