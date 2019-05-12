#include <iostream>
#include <iterator>
#include "iter.hpp"
#pragma once

namespace itertools{
template <typename T>
class range{
public:
	T _start;
	T _end;
	range(T a, T b) : _start(a) , _end(b){

	}
	myit begin(){
		return myit(_start);
	}
	myit end(){
		return myit(_end);
	}
	//T operator*() { return T};
};

}
