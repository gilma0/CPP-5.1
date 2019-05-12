#include <iterator>
#pragma once

class myit
{
private:
    double value_;

public:

    myit(double value){// : value_(value){
    	value_=value;
    }
    double operator*(){ return value_;}
    bool operator==( myit& other){
    	return value_ == other.value_;
    }
    bool operator!=( myit& other){
    	return !(*this == other);
    }
    myit& operator++(){
    	++value_;
    	return *this;
    }
};
