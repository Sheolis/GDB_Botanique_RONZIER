#ifndef __PLANTE_H_
#define __PLANTE_H_

#include <iostream>
#include <vector>
#include <string>


class Plante {
        private:
            std::string _name;
            int _hydro; //0 to 10
            int _health; // 0 to 10
            float _age; // 0 to ++
        public:
            void grow();
            void print();
            Plante(std::string nom);
};

#endif