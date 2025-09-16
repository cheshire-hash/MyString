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
}