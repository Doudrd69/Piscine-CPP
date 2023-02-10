#ifndef DATA_HPP
# define DATA_HPP

class Data {

    public :

        Data() {};
        Data(int int_value, float float_value) : i(int_value), f(float_value) {} ;
        Data(const Data& obj);
        Data& operator=(const Data& obj);
        ~Data() {};

        int     i;
        float   f;
};

#endif