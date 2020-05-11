#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include "Plante.h"
#include <time.h>
using namespace std;

int main()
{

        srand (time(NULL));
        Plante* filicaria = new Plante("filicaria");
        filicaria->print();
        filicaria->grow();
        filicaria->print();
       
}