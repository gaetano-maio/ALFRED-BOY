										//************ -  Move the robot  - ***********************/
										/* Programmers: Vincenzo Intorcia, Gaetano Maio           */
										/* Version: 2.0							  				  */
										/* Last compilation: 20/05/2021			  				  */
                                        //*********************************************************/
// * Librerie.

#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "Robot.h"  // * Incluso il file [Robot.h], in cui è presente la classe [Robot].
using namespace std;

//prova github//


    int direction(int);

    class Score
    {
        public:
        int x;
        int y;
    };

    void vertical (int y)
    {
        int i;

        for(i=0; i<y; i++)
        {
            cout << "\n";
        }
    }

    #define UP 1
    #define DOWN 2
    #define LEFT 3
    #define RIGHT 4

 int main() {

    srand(time(NULL));

    Robot Robot1; 

    Score Score1;

    Robot1.y = 0; Robot1.x = 0;

	int i, Move=0;

	for(i=0; i<=1; i++)
    {
        cout << "Decidi dove spostarti...\n" << endl;

        Score1.x = rand()%10;
        Score1.y = rand()%10;


////////////////////////////// - MAPPA - ////////////////////////////////////////////////////
                                                                                           //
        cout << "<------------------------>";                                              //
                                                                                           //
        vertical(21-Score1.y);                                                             //
                                                                                           //
        cout << setw(Score1.x+1) << "*" << endl;                                           //
                                                                                           //                                                                                           //
        cout << setw(Robot1.x+3) << "  _"              << endl;                            //
        cout << setw(Robot1.x+4) << " [_]"   		   << endl;                            //
        cout << setw(Robot1.x+5) << "/[_]\\"      	   << endl;                            //
        cout << setw(Robot1.x+4) << " ] ["             << endl;                            //
                                                                                           //
        vertical(Robot1.y);                                                                //
                                                                                           //
        cout << "<------------------------>";                                              //
                                                                                           //
        cout << "\n" << endl;                                                              //
                                                                                           //
        cout << "Posizione corrente x: " << Robot1.x << " y: " << Robot1.y << "\n\n";      //
                                                                                           //
/////////////////////////////////////////////////////////////////////////////////////////////

        cout << "Su [W] Sinistra [A] Destra [D] Giu[S] Esci[ESC]: ";

        Move = getch();

        if ((Move==27))
        {
          break;
        }

        else
        {
            switch(direction(Move))
            {

                // In base ai tasti WASD, l'utente può muovere il robottino Alfred.

                case UP:

                if ( Robot1.y+1 <= 20 )
                {
                    Robot1.y++;
                }

                break;



                case DOWN:

                if ( Robot1.y-1 >= 0 )
                {
                    Robot1.y--;
                }

                break;



                case LEFT:

                if ( Robot1.x-1  >= 0 )
                {
                    Robot1.x--;
                }

                break;



                case RIGHT:

                if ( Robot1.x+1 <= 20 )
                {
                    Robot1.x++;
                }

                break;

            }

           // if(Score1.x== && Robot1.y== )
            //{


           // }

        }


        i--;
        system("cls");
    }

////////////////////////////// - MAPPA - ////////////////////////////////////////////////////
                                                                                           //
         cout << "Posizione finale x: " << Robot1.x << " y: " << Robot1.y << "\n\n";       //
                                                                                           //
        cout << "<------------------------>";                                              //
                                                                                           //
        vertical(21-Robot1.y); 
		                                                        						   //
                                                                                           //
        cout << setw(Robot1.x+3) << "  _"              << endl;                            //
        cout << setw(Robot1.x+4) << " [_]"   		   << endl;                            //
        cout << setw(Robot1.x+5) << "/[_]\\"      	   << endl;                            //
        cout << setw(Robot1.x+4) << " ] ["             << endl;                            //
                                                                                           //
        vertical(Robot1.y);                                                                //
        cout << "<------------------------>";                                              //
                                                                                           //
        cout << "\n" << endl;                                                              //
                                                                                           //
                                                                                           //
                                                                                           //
/////////////////////////////////////////////////////////////////////////////////////////////

	return 0;
}

  int direction (int Move)
  {
     int direzione=0;

    if (Move == 119 || Move == 87) //tasto W - sopra
    {
        direzione=UP;
    }

    else if (Move == 97 || Move == 65) //tasto A - sinistra
    {
        direzione=LEFT;
    }

    else if (Move == 115 || Move == 83) //tasto S - sotto
    {
        direzione=DOWN;
    }

    else if (Move == 100 || Move == 68) //tasto D - destra
    {
        direzione=RIGHT;
    }

    return direzione;
  }


