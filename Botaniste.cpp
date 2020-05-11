#include "Botaniste.h"
#include "Plante.h"

Botaniste::Botaniste(std::string name) : _name(name), _money(10){};

void Botaniste::print(){
        std::cout << "Name : " << _name << std::endl 
                << "Money : " << _money << std::endl;
}

void Botaniste::printGreenHouse(){
        for( int i= 0; i < _greenhouse.size(); i++ ){
            _greenhouse[i]->print();
        }
}

void Botaniste::buy(std::string name){
        _greenhouse.push_back(new Plante(name));
}

void Botaniste::action(){
        this->print();
        std::cout << "Do you want to :" << std::endl;
}
