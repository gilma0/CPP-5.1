#include <iostream>
#include <iterator>
#include "range.hpp"
#include <string>
#pragma once
using namespace std;

namespace itertools{
	class zip{
	public:
		zip();
		zip(range a, string b);
		zip(string a, range b);
		zip(zip a, zip b);
		int* begin();
		int* end();
	};
}
