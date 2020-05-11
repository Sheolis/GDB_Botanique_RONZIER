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
        if(_health >= 5){
                if(_hydro >= 5){
                    _age += -0.1*(5 + _hydro) +2;
                }
                else{
                    _age += -0.1*(15 - _hydro) +2;
                }
        }else{
                if(_hydro >= 5){
                    _age += -0.1*( _hydro) +2;
                }
                else{
                    _age += -0.1*(10 - _hydro) +2;
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