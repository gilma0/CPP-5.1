#include <iostream>
#include <iterator>

namespace itertools{

class range{
public:
	range();
	range(int a, int b);
	range(double a, double b);
	range(char a, char b);
	int* begin();
	int* end();
};

}
