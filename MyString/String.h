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
 
};

