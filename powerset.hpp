#include <iostream>
#include <iterator>
#include "chain.hpp"
#include "range.hpp"
#pragma once

namespace itertools{
	class powerset{
	public:
		powerset();
		powerset(range a);
		powerset(chain a);
		int* begin();
		int* end();
	};
}
