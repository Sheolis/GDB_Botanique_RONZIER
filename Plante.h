#ifndef __PLANTE_H_
#define __PLANTE_H_

#include <iostream>
#include <vector>
#include <string>


class Plante {
        private:
            std::string _name;
            float _hydro; //0 to 10
            float _health; // 0 to 10
            float _age; // 0 to ++
            bool _fertilizerReceived;
            float _cropStatu;
            bool _isAlive;
        public:
            Plante(std::string nom);
            void fertilize();
            void grow();
            void timeIteration();
            void print();
            void water();
            void crop();
            std::string getName();
            float getAge();
            bool getDeathStatus();

};

#endif