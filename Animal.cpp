#include "Animal.h"

Animal::Animal(std::string nom) : _name(nom), _fatigue(0), _ennui(0), _faim(0)
{};

std::string Animal::getName(){ return _name;};
int Animal::getFatigue(){ return _fatigue;};
int Animal::getEnnui(){ return _ennui;};
int Animal::getFaim(){ return _faim;};

void Animal::print(){
        std::cout << _name << std::endl
                << "fatigue : " << _fatigue << std::endl
                << "ennui : " << _ennui << std::endl
                << "faim : " << _faim << std::endl;
}

void Animal::jouer(){
        _ennui -= rand() % 4 + 2;
        _fatigue += 1;
        _faim += _ennui;
        this -> noMinus();
        this -> print();
}

void Animal::manger(){
        _faim -= 5 - _fatigue;
        this -> noMinus();
        this -> print();
}

void Animal::dormir(){
        _fatigue =  _ennui % 4;
        _ennui += rand() % 4 + 2;
        this -> print();
}


/*void Animal::noMinus(int attribut){
        if(attribut<0){
                attribut = 0;
        }
}*/
void Animal::noMinus(){
        if(_fatigue<0){
                _fatigue = 0;
        }
        if(_ennui<0){
                _ennui = 0;
        }
        if(_faim<0){
                _faim = 0;
        }
}
/*void Escargot::avancer()
{
        _distance += _motivation;
        if(_motivation > 0) _motivation -= 1;
};

void Escargot::printPiste(){
        for(int i = 0; i<_distance; i++) {
                std::cout << "-";
        }
        std::cout << this->getLook() << std::endl;
}

void Escargot::action(){
        int choix = rand() % 2 + 1;
        if (choix == 1) {
                _motivation += 1;
        }
        else {
                this->avancer();
        }
        return this->printPiste();
}

int Escargot::victory(){
        if ( _distance >= 100) {
                std::cout << _name <<" l'emporte" << std::endl;
                return 1;
        }
        return 0;
}*/