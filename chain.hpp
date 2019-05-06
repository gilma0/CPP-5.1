#include <iostream>
#include <iterator>

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
