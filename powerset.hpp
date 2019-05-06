#include <iostream>
#include <iterator>

namespace itertools{
	class powerset{
	public:
		powerset();
		powerset (range a);
		powerset (chain a);
		int* begin();
		int* end();
	};
}
