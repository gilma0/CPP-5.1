#include <iostream>
#include <iterator>
#include "iter.hpp"
#include "range.hpp"
#include <string>
#pragma once
using namespace std;

namespace itertools{
template <typename T, typename R>
	class zip{
	public:
		zip(T a, R b){

		}
		myit begin(){
			return myit(1234);
		}
		myit end(){
			return myit(1234);
		}
	};
}
