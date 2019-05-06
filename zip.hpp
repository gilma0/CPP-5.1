#include <iostream>
#include <iterator>

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
