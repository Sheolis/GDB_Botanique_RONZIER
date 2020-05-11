#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include "Plante.h"
#include "Botaniste.h"
#include <time.h>

using namespace std;

int main()
{

        srand (time(NULL));
        Botaniste* bob = new Botaniste("Bob");
        bob->action();
       
}