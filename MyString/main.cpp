#include<iostream> 
#include "String.h"
using namespace std;

int main() {
	MyString obj1("Hello");
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

}