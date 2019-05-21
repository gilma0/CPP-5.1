#include "iteratorChain.hpp"
namespace itertools{
template <typename T, typename R>
class chain{
    T _iter1;
    R _iter2;
	public:
    chain(T start, R end) : _iter1(start), _iter2(end) {}
    auto begin() {
         return  iteratorChain<decltype(_iter1.begin()),decltype(_iter2.begin())>(_iter1.begin(), _iter2.begin());
    }
    auto end()  {
         return iteratorChain<decltype(_iter1.end()),decltype(_iter2.end())>(_iter1.end(), _iter2.end());
    }
};
}
