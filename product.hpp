#include "iteratorProduct.hpp"
namespace itertools{
using namespace std;

template <typename T, typename R>

class product{

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

public:
    T _iter1;
    R _iter2;
    product(T start, R end) : _iter1(start), _iter2(end) {} // constructor
    auto begin() const{
        return  iteratorProduct<decltype(_iter1.begin()),decltype(_iter2.begin())>(_iter1.begin(), _iter2.begin()); }  // iteratable object
    auto end()  const{
        return iteratorProduct<decltype(_iter1.end()),decltype(_iter2.end())>(_iter1.end(), _iter2.end()); }  // iteratable object
};

}
