#include <iostream>

namespace itertools{

class range{
public:
	range();
	range(int a, int b);
	range(double a, double b);
	range(char a, char b);
	iterator begin();
	iterator end();
};

}
