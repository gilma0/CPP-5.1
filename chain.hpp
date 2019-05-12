#include <iostream>
#include <iterator>
#include "iter.hpp"
#include "range.hpp"
#include <string>
#pragma once
using namespace std;

namespace itertools{
template <typename T, typename R>
class chain{
public://///
	T _start;
	R _end;//
	chain (T a, R b) : _start(a), _end(b){

	}
	myit begin(){
		//return myit(_start.begin());
		return myit(1234);
	}
	myit end(){
		//return myit(_end.end());
		return myit(1234);
	}
};

}
