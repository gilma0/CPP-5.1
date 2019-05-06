#include <iostream>

namespace itertools{
	class powerset{
	public:
		powerset();
		powerset (range a);
		powerset (chain a);
		iterator begin();
		iterator end();
	};
}
