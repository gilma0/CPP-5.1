#include <iostream>

namespace itertools{
	class zip{
	public:
		zip();
		zip(range a, string b);
		zip(string a, range b);
		zip(zip a, zip b);
		iterator begin();
		iterator end();
	};
}
