#include <iostream>
#include <vector>
#include <list>
#include "Headers/Sorting Algorithms/Insertion_Sort.h"
#include "Header.h"

using namespace std;

int main() {

	vector<double> v{ 4,6,3,7,8,9 };
	vector<Test> v2{ Test(4), Test(3), Test(7), Test(1) };
	list<double> l(v.begin(), v.end());


	algorithms::sort::Insertion_Sort(l.rbegin(), l.rend());

	//cout << (*v2.begin() < *(v2.end() - 1));

	for (auto& item : l)
		cout << item << endl;

}