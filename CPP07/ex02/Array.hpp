#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array {

    public :

        class InvalidIndex : public std::exception {
            public:
                virtual const char *what() const throw() {
                     return "Error code : 1";
                }
        };

        Array() {
            std::cout << "Default constructor" << std::endl;
            this->_array = NULL;
        }

        Array(unsigned int n) {
            //std::cout << "Constructor(u_int n) constructor" << std::endl;
            this->_array = new T[n];
            this->_size = n;
        }

        Array(const Array& obj) {
            std::cout << "Copy constructor" << std::endl;
            this->_size = obj._size;
            this->_array = new T[this->_size];
            for (unsigned int i = 0; i < this->_size; i++) {
                if (i > this->_size)
                    throw Array::InvalidIndex();
                this->_array[i] = obj._array[i];
            }
        }

        Array& operator[](unsigned int index) {
            if (index < this->_size)
                return this->_array[index];
            throw Array::InvalidIndex();
        }

        Array&  operator=(const Array& obj) {
            std::cout << "Assignment operator overload" << std::endl;
            if (this != &obj) {
		        delete[] this->_array;
                this->_size = obj._size;
		        this->_array = new T[this->size];
                for (unsigned int i = 0; i < this->_size; i++) {
                    if (i > this->_size)
                        throw Array::InvalidIndex();
                    this->_array[i] = obj._array[i];
                }
	        }
            return *this;
        }

        ~Array() { delete[] this->_array; }

        int    size() {
            return (this->_size);
        }

        void    setValue(unsigned int i, T value) {
            if (i >= this->_size)
                throw Array::InvalidIndex();
            this->_array[i] = value;
        }

        T   getValue(unsigned int i) {
            if (i >= this->_size)
                throw Array::InvalidIndex();
            return (this->_array[i]);
        }

    private :

        unsigned int    _size;
        T*              _array;
};

#endif