#pragma once
#include <iostream>

class Test {

public:

	Test(int num) : val(num) { std::cout << "constructor" << std::endl; };

	explicit operator double() { std::cout << "double" << std::endl; return double(val); }
	explicit operator bool() { return val == 0; }
	friend bool operator <(const Test&, const Test&);
	friend bool operator >(const Test& l, const Test& r) { return !(l < r); }
	friend bool operator ==(const Test& l, const Test& r) { return l.val == r.val; }
	friend std::ostream& operator <<(std::ostream& out, const Test& r) {
		out << r.val;
		return out;
	}
	Test& operator =(const Test& rhs) {
		std::cout << "=" << std::endl;
		if (this != &rhs) {
			val = rhs.val;
		}
		return *this;
	}

private:

	int val;

};

bool operator <(const Test& l, const Test& r) {
	return l.val < r.val;
}
