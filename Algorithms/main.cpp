#include <iostream>
#include <vector>
#include <string>
#include "Headers/Search Algorithms/Linear Search.h"
#include "Header.h"
#include <algorithm>
#include <xutility>

using namespace std;

int main() {

	vector<Test> v{ Test(1),Test(2),Test(3),Test(4) };

	auto mhm = algorithms::search::Linear_Search(v.begin(), v.end(), false);

}