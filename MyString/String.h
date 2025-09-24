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
	int MyStrlen(); //���������� ����� ������
	int MyChr(char c); // ����� ������� � ������(������ ���������� �������, ���� -1)
	void MyStrCopy(const MyString& obj); //����������� �����
	void MyStrCat(MyString& b); // ����������� �����
	void MyDelChr(char c); // ������� ��������� ������
	int MyStrCmp(MyString& b); // ��������� �����
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

