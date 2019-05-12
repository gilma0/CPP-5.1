#include <iostream>
#include <iterator>
#include "iter.hpp"
#include "chain.hpp"
#include "range.hpp"
#pragma once

namespace itertools{
template <typename T>
	class powerset{
	public:
	T _start;
		powerset(T a) : _start(a){

		}
		myit begin(){
			//return myit(_start);
			return myit(1234);
		}
		myit end(){
			//return myit(_start);
			return myit(1234);
		}
	};
}
