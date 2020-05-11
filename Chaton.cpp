#include "Chaton.h"

Chaton::Chaton(std::string nom) : Animal(nom){};

void Chaton::print(){
        std::cout << _name << " kitty" << std::endl
                << "fatigue : " << _fatigue << std::endl
                << "ennui : " << _ennui << std::endl
                << "faim : " << _faim << std::endl;
}