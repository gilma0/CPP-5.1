#include "iteratorZip.hpp"
namespace itertools{
template <typename T, typename R>
class zip{
    T _itera1;
    R _itera2;
public:
    zip(T start, R end) : _itera1(start), _itera2(end) {}
    auto begin() {
    	return  iteratorZip<decltype(_itera1.begin()),decltype(_itera2.begin())>(_itera1.begin(), _itera2.begin());
    }
    auto end()  {
        return iteratorZip<decltype(_itera1.end()),decltype(_itera2.end())>(_itera1.end(), _itera2.end());
    }
};
}
