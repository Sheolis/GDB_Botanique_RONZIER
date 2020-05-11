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
            int _fertilizers;
            void sell(Plante plante);
            void print();
            void printGreenHouse();
            void sleep();
            void buy(std::string name);

        public :
            Botaniste(std::string name);
            void action();
            


};

#endif