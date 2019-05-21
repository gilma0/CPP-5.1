namespace itertools{
template <typename T>
class iteratorRange {
	 T _value;
    public:
        iteratorRange(T value) : _value(value){}
        bool operator!=(iteratorRange const &other) const{
            return _value != (other._value);
        }
        T operator*() const{
            return _value;
        }
        iteratorRange &operator++() {
            ++_value;
            return *this;
        }
    };
}
