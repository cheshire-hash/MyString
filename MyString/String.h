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
	int MyStrlen(); //���������� ����� ������
	int MyChr(char c); // ����� ������� � ������(������ ���������� �������, ���� -1)
	void MyStrCopy(const MyString& obj); //����������� �����
	void MyStrCat(MyString& b); // ����������� �����
	void MyDelChr(char c); // ������� ��������� ������
	int MyStrCmp(MyString& b); // ��������� �����
	void Print();
	MyString(MyString&& obj);
 
};

