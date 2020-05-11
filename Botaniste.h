#ifndef __BOTANISTE_H_
#define __BOTANISTE_H_

#include <iostream>
#include <vector>
#include <string>
#include "Plante.h"


class Botaniste{
        private :
            std::string _name;
            int _money;
            std::vector <Plante*> _greenhouse;
        public :
            Botaniste(std::string name);
            void sleep();
            void buy(std::string name);
            void sell(Plante plante);
            void action();
            void print();
            void printGreenHouse();


};

#endif