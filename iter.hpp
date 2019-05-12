#include <iterator>
#pragma once

class myit
{
private:
    int value_;

public:

    myit(int value){// : value_(value){
    	value_=value;
    }
    int operator*(){ return value_;}
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
