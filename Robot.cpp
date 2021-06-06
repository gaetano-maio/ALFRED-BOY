#include <iostream>
#include "Robot.h"
using namespace std;

    #define UP 1
    #define DOWN 2
    #define lEFT 3
    #define RIGHT 4

  Robot::Robot(int a, int b) // [Errore] Il costruttore, come altre funzioni, non viene eseguito. In principio avrebbe dovuto posizionare il robot nelle cordinate x: 0, y:0
  {
      x = a;
      y = b;
  }
