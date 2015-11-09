#include "algo_wrapper.hpp"
#include <vector>
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
	vector<int> vec = {1, 3, 3, 5, 7, 2};
	assert(find(vec, 3) != vec.end());
	assert(find(vec, 10) == vec.end());
	cout << *adjacent_find(vec) << endl;
	return 0;
}
