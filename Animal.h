#ifndef __ANIMAL_H_
#define __ANIMAL_H_

#include <iostream>
#include <vector>
#include <string>

class Animal{
    protected:
        std::string _name;
        int _fatigue;
        int _ennui;
        int _faim;
        void noMinus();
        virtual void print();

    public:
        Animal(std::string nom);
        std::string getName();
        int getFatigue();
        int getEnnui();
        int getFaim();
        void manger();
        void dormir();
        void jouer();

};

#endif


