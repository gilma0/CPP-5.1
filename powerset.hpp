#include <set> // for set operations
#include <vector>
#include <cmath>
#include <iostream>
#include "iteratorPowerset.hpp"
namespace itertools{
template <typename T>
class powerset{
   public:
    T _start;
    powerset(T start) : _start(start) {}                                                                                                              // constructor
    auto begin() const{return iteratorPowerset<decltype(_start.begin())> (_start.begin(), _start.end());}
        auto end()  const{return iteratorPowerset<decltype(_start.begin())>(_start.end(), _start.end());}
};                                                                                                                                                  // class


}
