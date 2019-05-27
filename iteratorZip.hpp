#include <utility>
#include <iostream>
namespace itertools{
using namespace std;
template <typename T,typename R>
ostream &operator<<(ostream &os, const pair<T,R>&p){
    os << p.first << ',' << p.second;
    return os;
}
template <typename U, typename V>
    class iteratorZip {
        U _itera1;
        V _itera2;
    public:
        iteratorZip(U a, V b) : _itera1(a), _itera2(b) {}
        bool operator!=(iteratorZip<U,V> const &other) {
            return (_itera1 != other._itera1) && (_itera2 != other._itera2);
        }
        pair<decltype(*_itera1),decltype(*_itera2)> operator*() const{
            return pair< decltype(*_itera1), decltype(*_itera2)> (*_itera1,*_itera2);
        }
        iteratorZip<U,V> &operator++(){
            ++_itera1;
            ++_itera2;
            return *this;
        }
    };
}
