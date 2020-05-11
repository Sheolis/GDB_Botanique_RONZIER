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
            void sell(int i);
            void print();
            void printGreenHouse();
            void sleep();

        public :
            void buy(std::string name);
            Botaniste(std::string name);
            void action();
            


};

#endif