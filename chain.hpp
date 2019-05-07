#include <iostream>
#include <iterator>
#include "range.hpp"
#include <string>
#pragma once
using namespace std;

namespace itertools{

class chain{
public:
	chain();
	chain (range a, range b);
	chain (range a, string b);
	int* begin();
	int* end();
};

}
