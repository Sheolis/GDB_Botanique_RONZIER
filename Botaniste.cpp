#include "Botaniste.h"
#include "Plante.h"

Botaniste::Botaniste(std::string name) : _name(name), _money(10), _fertilizers(1){};

void Botaniste::print(){
        std::cout << "Name : " << _name << std::endl 
                << "Money : " << _money << std::endl;
}

void Botaniste::printGreenHouse(){
        for( int i= 0; i < _greenhouse.size(); i++ ){
            _greenhouse[i]->print();
        }
        std::cout << endl;
}

void Botaniste::buy(std::string name){
        _greenhouse.push_back(new Plante(name));
}

void Botaniste::action(){
        this->print();
        std::cout << "Do you want to :" << std::endl
                    << "[0] buy some fertilizer(cost 15)" << std::endl
                    << "[1] buy a plant(cost 10)" << std::endl
                    << "[2] sell a plant(must at least have an age of 5)" << std::endl
                    << "[3] water a plant" << std::endl
                    << "[4] fertilize a plant" << std::endl
                    << "[5] check your greenhouse" << std::endl
                    << "[6] sleep" << std::endl << std::endl;
        int choice;
        std::cin >> choice;

        if(choice == 0){//buy fertilizer

                if(_money >= 15){
                        _money += -15;
                        std::cout << "You buy a fertilizer, you now have " << _fertilizers << " of them." << std::endl << std::endl;
                }else{
                        std::cout << "You don't have enough money" << std::endl << std::endl;
                }
                this->action();

        }else if(choice == 1){//buy a plant
                
                if(_money >= 10){
                        _money += -10;
                        std::cout << "Name your plant" << std::endl;
                        std::string newPlant;
                        std::cin >> newPlant;
                        this->buy(newPlant);
                }else{
                        std::cout << "You don't have enough money" << std::endl << std::endl;
                }
                this->action();


        }else if(choice == 2){//sell a plant

                std::cout << "Which plant do you want to sell ?" << std::endl << std::endl;
                this->printGreenHouse();
                std::string plant2sell;
                std::cin >> plant2sell;
                for( int i= 0; i < _greenhouse.size(); i++ ){
                                if (_greenhouse[i]->getName() == plant2sell){
                                        
                                }
                        }
        }else if(choice == 3){//water a plant
                std::cout << "Which plant do you want to water ?" << std::endl << std::endl;
                this->printGreenHouse();
                std::string plant2water;
                std::cin >> plant2water;
                for( int i= 0; i < _greenhouse.size(); i++ ){
                                if (_greenhouse[i]->getName() == plant2fert){
                                        _greenhouse[i]->water();
                                        std::cout << _greenhouse[i].getName() <<" has been watered." << std::endl << std::endl;  
                                }
                        }
                this->action();

        }else if(choice == 4){//fertilize a plant

                if(_fertilizers >0){
                        _fertilizers += -1;
                        std::cout << "Which plant do you want to fertilize ?" << std::endl;
                        this->printGreenHouse();
                        std::string plant2fert;
                        std::cin >> plant2fert;
                        for( int i= 0; i < _greenhouse.size(); i++ ){
                                if (_greenhouse[i]->getName() == plant2fert){
                                        _greenhouse[i]->fertilize();   
                                }
                        }
                }else{
                        std::cout << "You don't have enough fertilizer" << std::endl;
                }
                this->action();

        }else if(choice == 5){//check greenhouse

                this->printGreenHouse();
                this->action();

        }else if(choice == 6){//sleep
            
        }

}

void Botanist::sell(int i){
        if(plante->getAge()>=5){

        }
}
