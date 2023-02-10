#include "Data.hpp"

Data::Data(const Data& obj) {

    this->i = obj.i;
    this->f = obj.f;
    *this = obj;
    return ;
}

Data&   Data::operator=(const Data& obj) {

    this->i = obj.i;
    this->f = obj.f;
    return (*this);
}