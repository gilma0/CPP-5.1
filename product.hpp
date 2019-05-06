#include <iostream>
#include <iterator>

namespace itertools{
	class product{
	public:
		product();
		product (range a, string b);
		int* begin();
		int* end();
	};
}
