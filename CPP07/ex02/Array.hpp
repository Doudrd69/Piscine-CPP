#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <cstdlib>

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

            std::cout << "\nDefault constructor" << std::endl;
            this->_array = NULL;
            this->_size = 0;
        }

        Array(unsigned int n) {

            std::cout << "\nConstructor(u_int n) constructor : " << n << std::endl;
            this->_array = new T[n];
            this->_size = n;
        }

        Array(const Array& obj) {

            std::cout << "\nCopy constructor" << std::endl;
            this->_size = obj._size;
            this->_array = new T[this->_size];
            for (unsigned int i = 0; i < this->_size; i++)
            {
                if (i >= this->_size)
                    throw Array::InvalidIndex();
                this->_array[i] = obj._array[i];
            }
            return ;
        }

        Array& operator=(const Array& obj) {

            if (this != &obj)
            {
                this->_size = obj._size;
                delete[] this->_array;
                this->_array = new T[this->_size];
                for (unsigned int i = 0; i < this->_size; i++)
                {
                    if (i >= this->_size)
                        throw Array::InvalidIndex();
                    this->_array[i] = obj._array[i];
                }
            }
            return *this;
        }

        T& operator[](unsigned int index) {

            if (index >= this->_size)
                throw Array::InvalidIndex();
            return this->_array[index];
        }

        ~Array() { delete[] this->_array; }

        unsigned int    size(void) const {
          
            return (this->_size);
        }

        T   getValue(unsigned int index) const {

            if (index >= this->_size)
                throw Array::InvalidIndex();
            return (this->_array[index]);
        }


    private :

        unsigned int    _size;
        T*              _array;
};

#endif