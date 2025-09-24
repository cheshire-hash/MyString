#pragma once
static int count = 0;
class MyString
{
	static int count;
	char* str;
	int lenght;
public:
	MyString();
	MyString(int size);
	MyString(const char* st);
	~MyString();
	MyString GetString();
	MyString(const MyString& obj);
	bool MyStrStrt(const char* str);
	int MyStrlen(); //возвращает длину строки
	int MyChr(char c); // поиск символа в строке(индекс найденного символа, либо -1)
	void MyStrCopy(const MyString& obj); //копирование строк
	void MyStrCat(MyString& b); // объединение строк
	void MyDelChr(char c); // удаляет указанный символ
	int MyStrCmp(MyString& b); // сравнение строк
	void Print();
	MyString(MyString&& obj);
	static int GetCount();
	static void ShowCount();
	int GetLen();
	void ShowLen();
	MyString operator+(MyString& b);
	MyString operator-(const char* c);	
	MyString& operator++();
	MyString operator++(int);
	MyString& operator--();
	MyString operator--(int);
	MyString& operator=(const MyString& obj);
	MyString& operator=(MyString&& obj);
	MyString& operator+=(MyString& b);
	MyString& operator-=(const char* obj);
	bool operator==(MyString& obj);
	bool operator>(MyString& obj);
	bool operator<(MyString& obj);
 
};

