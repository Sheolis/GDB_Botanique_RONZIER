#include "Plante.h"



Plante::Plante(std::string name) :_name(name), _hydro(5), _health(5), _age(0)
{};

void Plante::print(){
        std::cout << "Specie : " << _name << std::endl
                << "Hydratation : " << _hydro << std::endl
                << "Health : " << _health << std::endl
                << "Age : " << _age << std::endl;
}

void Plante::grow(){
        if(_health >= 7){
            if(_health >= 9){
                    _age += 2;
            }else{
                    _age += 1;
            }
        }else if(_health <= 3){
            if(_health <= 1){
                    _age += 0;
            }else{
                    _age += 0.5;
            }
        }
}

void Plante::timeIteration(){
        _hydro -= 0.5;
        if(_hydro >= 7){
            if(_hydro >= 9){
                    _health += -1;
            }else{
                    _health += -0.5;
            }
        }else if(_hydro <= 3){
            if(_hydro <= 1){
                    _health += -1;
            }else{
                    _health += -0.5;
            }
        }
        this->print();
}