#ifndef __CHATON_H_
#define __CHATON_H_

#include <iostream>
#include <vector>
#include <string>
#include "Animal.h"

class Chaton : public Animal{
        private:
        public:
            void print();
            Chaton(std::string nom);
};

#endif