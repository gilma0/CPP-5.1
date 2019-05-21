#include <utility> // pair

namespace itertools{
using namespace std;
template <typename A, typename B>
    class iteratorProduct{
        A _iter1;
        B _iter2;
        B _iter2b;
    public:
        iteratorProduct(A a, B b) :
        	_iter1(a),
			_iter2(b),
			_iter2b(b) {}
        bool operator!=(iteratorProduct<A,B> const &other){

            if ((_iter1 != other._iter1) && !(_iter2 != other._iter2)){
            	_iter2 = _iter2b;
                ++_iter1;
            }

            return (_iter1 != other._iter1);
        }
        pair<decltype(*_iter1),decltype(*_iter2)> operator*() const{
            return pair< decltype(*_iter1), decltype(*_iter2)> (*_iter1,*_iter2);
        }
        iteratorProduct<A,B> &operator++(){
            ++_iter2;
            return *this;
        }
    };

}
