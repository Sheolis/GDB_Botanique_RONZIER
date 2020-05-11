#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include "Animal.h"
#include "Chaton.h"
#include <time.h>
using namespace std;

int main()
{

        srand (time(NULL));
        Animal* bob = new Animal("Bob");
        Chaton* eric = new Chaton("Eric");
        Animal* atlanta = new Animal("Opposum");
        bob->jouer();
        eric->jouer();
}