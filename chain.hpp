#include <iostream>

namespace itertools{

class chain{
public:
	chain();
	chain (range a, range b);
	chain (range a, string b);
	begin(){return iterator;}
	end(){return iterator;}
};

}
