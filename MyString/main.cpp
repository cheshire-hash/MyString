#include<iostream> 
#include "String.h"
using namespace std;

int main() {
	/*MyString obj1("Hello");
	obj1.Print();
	MyString obj2 = obj1;
	obj2.Print();
	MyString obj3("World");
	obj2.MyStrCopy(obj3);
	obj2.Print();
	int rez = obj2.MyChr('r');
	cout << rez;
	obj1.MyStrCat(obj3);
	obj1.Print();
	obj1.MyDelChr('l');
	obj1.Print();
	obj1.MyStrCmp(obj2);
	MyString a = move(obj1);
	a.Print();
	a.ShowCount();
	MyString b = a + obj2;
	b.Print();
	MyString c = b - "or";
	c.Print();
	MyString d = c - "l";
	d.Print();*/
	MyString str1("Hello");
	str1.Print();
	str1.ShowLen();
	++str1;
	cout << "After prefix increment:" << endl;
	str1.ShowLen();
	--str1;
	str1.Print();
	MyString str2("World");
	str1 = str2;
	str1.Print();
	MyString str3 = move(str2);
	str3 += str1;
	str3.Print();
	str3 -= "l";
	str3.Print();

}