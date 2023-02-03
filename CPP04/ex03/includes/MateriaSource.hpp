#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
   
    public:

        MateriaSource();
        MateriaSource(const MateriaSource& obj);
        MateriaSource& operator=(const MateriaSource& obj);
        virtual ~MateriaSource() {}

        virtual void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const & type);

    private :

        AMateria*   _inventory[4];
};

#endif