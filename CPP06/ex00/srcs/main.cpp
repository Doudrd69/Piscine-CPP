#include <iostream>
#include <cstdlib>

int main(int argc, char **argv) {

    if (argc == 2)
    {
        double      d;
        float       f;
        long		i;
        char        *end;

        i = std::strtol(argv[1], &end, 10);
        if (*end == 0) {
            std::cout << "i is an int ! " << i << std::endl;
            if (std::isprint(i) != 0)
                std::cout << "Char: " << static_cast<char>(i) << std::endl;
            else
                std::cout << "Char: Non displayable" << std::endl;
            std::cout << "Int: " << static_cast<int>(i) << std::endl;
            std::cout << "Float: " << static_cast<float>(i) << std::endl;
            std::cout << "Double: " << static_cast<double>(i) << std::endl;
            return 0;
        }

        d = std::strtod(argv[1], &end);
        if (*end == 0) {
            std::cout << "d is a double ! " << d <<  std::endl;
            d == d ? std::cout << "Its a real number" << std::endl : std::cout << "Its NaN" << std::endl;
            if (std::isprint(d) != 0)
                std::cout << "Char: " << static_cast<char>(d) << std::endl;
            else
                std::cout << "Char: Non displayable" << std::endl;
            std::cout << "Int: " << static_cast<int>(d) << std::endl;
            std::cout << "Float: " << static_cast<float>(d) << std::endl;
            std::cout << "Double: " << static_cast<double>(d) << std::endl;
            return 0;
        }

        f = std::strtof(argv[1], &end);
        if (*end == 0) {
            std::cout << "f is a float ! " << f << std::endl;
            if (std::isprint(f) != 0)
                std::cout << "Char: " << static_cast<char>(f) << std::endl;
            else
                std::cout << "Char: Non displayable" << std::endl;
            std::cout << "Int: " << static_cast<int>(f) << std::endl;
            std::cout << "Float: " << static_cast<float>(f) << std::endl;
            std::cout << "Double: " << static_cast<double>(f) << std::endl;
            return 0;
        }
        std::cout << "Argument should be a scalar type !";
        std::cout << " --> char / int / float / double" << std::endl;
        return 1;
    }
    std::cout << "Error : wrong number of arguments : only one is requested" << std::endl;
    return 1;
}

//types scalaires suivants : char, int, float ou double
    //avec typeid on obtient c / i / f / d
//regarder du cote de sstream

// 1-détecter le type du littéral passé en paramètre
    // 2-le convertir de sa représentation sous forme de chaîne de caractères
    //vers son véritable type
    // 3-le convertir explicitement vers les trois autres types de données