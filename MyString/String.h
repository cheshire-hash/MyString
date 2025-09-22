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
	int MyChr(char c); // поиск символа в строке(индекс найденного символа, либо -1)
	void MyStrCopy(const MyString& obj); //копирование строк
	void MyStrCat(MyString& b); // объединение строк
	void MyDelChr(char c); // удаляет указанный символ
	int MyStrCmp(MyString& b); // сравнение строк
	void Print();
	MyString(MyString&& obj);
 
};

