#pragma once
#include <iostream>

class Test {

public:

	Test(int num) : val(num) {};

	friend bool operator <(const Test&, const Test&);
	friend bool operator >(const Test& l, const Test& r) {
		return !(l < r);
	}
	friend std::ostream& operator <<(std::ostream& out, const Test& r) {
		out << r.val;
		return out;
	}
	Test& operator =(const Test& rhs) {
		if (this != &rhs) {
			val = rhs.val;
		}
		return *this;
	}
	
private:

	int val;

};

bool operator < (const Test& l, const Test& r) {
	return l.val < r.val;
}
