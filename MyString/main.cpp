#include<iostream> 
#include "String.h"
using namespace std;

int main() {
	MyString obj1("Hello");
	obj1.Print();
	MyString obj2 = obj1;
	obj2.Print();
}