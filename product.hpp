#include <iostream>
#include <iterator>
#include "range.hpp"
#include <string>
#pragma once
using namespace std;
namespace itertools{
	class product{
	public:
		product();
		product (range a, string b);
		int* begin();
		int* end();
	};
}
