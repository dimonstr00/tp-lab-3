#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "DateTime.h"
using namespace std;

int main() {
	DateTime dt(31, 10, 2019);
	cout << dt.getToday() << endl;
	cout<< dt.getTomorrow() << endl;
	cout << dt.getYesterday() << endl;
	cout << dt.getFuture(10) << endl << endl;

	DateTime dt1(13, 11, 2019);
	cout << dt2.getToday() << endl;
} 