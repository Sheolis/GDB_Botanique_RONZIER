#include "Plante.h"



Plante::Plante(std::string name) :_name(name), _hydro(5), _health(3), _age(0), _cropStatu(4), _fertilizerReceived(false), _isAlive(true)
{};

void Plante::print(){
        std::cout << "Specie : " << _name << std::endl
                << "Is alive :" << _isAlive << std::endl
                << "Hydratation (ideal = 5): " << _hydro << std::endl
                << "Crop statu (ideal = 5): " << _cropStatu << std::endl
                << "Health : " << _health << std::endl
                << "Age : " << _age << std::endl << std::endl;

}

void Plante::grow(){
        if(_health >= 7){
            if(_health >= 9){
                    _age += 3;
            }else{
                    _age += 2;
            }
        }else if(_health <= 3){
            if(_health <= 1){
                    _age += 0;
            }else{
                    _age += 0.5;
            }
        }else{
                _age += 1;
        }
}

void Plante::timeIteration(){
        _fertilizerReceived = false;
        _cropStatu += -1;
        _hydro -= 1;
        this->grow();

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
        }else{
            _health += 1;
        }
        if(_cropStatu < 4 || _cropStatu > 6){
            _health += -1;
        }
        if (_health <= 0){
            _isAlive = false;
            std::cout << _name << "died" << std::endl;
        }
        
}

void Plante::water(){
        _hydro += 2;
}

void Plante::fertilize(){
        _health += 0.5;
}

void Plante::crop(){
    _cropStatu += 2;
    if (_cropStatu > 2){
            _health += -0.5;
    }else if(_cropStatu >5){
            _health += -1;
    }
}

std::string Plante::getName(){ return _name; };
float Plante::getAge(){ return _age; };
bool Plante::getDeathStatus(){ return _isAlive;};