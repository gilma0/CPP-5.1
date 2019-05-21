
namespace itertools{

template <typename A, typename B>
	   class iteratorChain {
	       A _itera1;
	       B _itera2;
	       bool flag;
	   	   public:
	       iteratorChain(A a, B b) : _itera1(a), _itera2(b){
	    	   flag=true;
	       }
	       decltype(*_itera1) operator*() const{
	       	           if(flag){
	       	               return *_itera1;
	       	           }
	       	           else{
	       	               return *_itera2;
	       	           }
	       }
	       bool operator!=(iteratorChain<A,B> const &other){
	           if (flag && !(_itera1 != (other._itera1))) {
	        	   flag = false;
	           }
	           if(flag){
	               return (_itera1 != (other._itera1));
	           }
	           else {
	               return (_itera2 != (other._itera2));
	           }
	       }
	       iteratorChain<A,B> &operator++() {
	           if(flag){
	               ++_itera1;
	           }
	           else {
	               ++_itera2;
	           }
	           return *this;
	       }
	   };
}
