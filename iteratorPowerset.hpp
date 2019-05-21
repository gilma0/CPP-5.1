namespace itertools{
using namespace std;
template <typename T>
ostream &operator<<(ostream &os,  vector<T> &S){
    os << "{";
    auto iter = S.begin();
    int flag=true;
    while (iter != S.end()){
    	if(flag==true){
    		os << *(iter++);
    		flag=false;
    	}
    	else{
    		os << ',' << *(iter++);
    	}
    }
    os << "}";
    return os;
}
template <typename R>
    class iteratorPowerset{
        R _iter1;
        R _iter2;
        int count;
        int index;
    	public:
        iteratorPowerset(R a, R b) : _iter1(a),_iter2(b),index(0),count(0){
            R _element_iterator = _iter1;
            while (_element_iterator != _iter2){
                ++count;
                ++_element_iterator;
            }
            count = pow(2, count);
        }

        bool operator!=(iteratorPowerset<R>  &other){
            return ((count - index) != (other.count - other.index - 1));
        }

        auto operator*() const{
            R _element_iterator = _iter1;
            vector<typename remove_const<typename remove_reference<decltype(*_iter1)>::type>::type> S;
            int i = index;
            while (i != 0 && _element_iterator != _iter2){
                int r = i % 2;
                i = i >> 1;
                if (r == 1)
                    S.emplace_back(*_element_iterator);//emplace_back =insert element at the end

                ++_element_iterator;
            }
            return S;
        }
        iteratorPowerset<R> &operator++() {
            ++index;
            return *this;
        }
    };
 }
