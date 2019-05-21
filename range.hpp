#include "iteratorRange.hpp"
namespace itertools{
template <typename T>
class range{
    T _start;
    T _end;
	public:
    range(T a, T b) : _start(a), _end(b) {}
    auto begin() const { return iteratorRange(_start); }
    auto end() const { return iteratorRange(_end); }
};


}
