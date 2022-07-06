/* Dateiname: POOL.cpp:

AD Praktikum 3 - SOSE22
Gruppe: 21
Jonas Pardeyke - 11142973
Nik Tykhomyrov - 11134921

Enth�lt den Code der Methoden der Klassen POINT, LINE und CIRCLE
*/

#include "POOL.h"
#include <iostream>

using namespace std;

POOL::POOL(){}

POOL::POOL(long Maximal){
    Index = new GEOKO[Maximal];
    Max = Maximal;
    Anz = 0;
}


double LGsum = 0;
double BGsum = 0;
double LGschnitt;
double BGschnitt;

bool POOL::addElement(GEOKO* element){

    if (Anz < Max){
        Index[Anz] = *element;
        Anz++;

        LGsum = LGsum + element->getLGinSec();
        BGsum = BGsum + element->getBGinSec();

        LGschnitt = LGsum / Anz;
        BGschnitt = BGsum / Anz;

        cout<< "Mitte"<<endl;
        cout << "Länge: " << LGschnitt << endl;
        cout << "Breite: " << BGschnitt << endl;
        cout<<endl;


        return true;
    }
    else{
        return false;
    }
}

bool POOL::pruefeBaum(){
    for (int i = 0; i < Anz; i++){
        if (Index[i].getL() != NULL){
            if (Index[i].getL()->getP() != &Index[i]){
                return false;
            }
        }
        if (Index[i].getR() != NULL){
            if (Index[i].getR()->getP() != &Index[i]){
                return false;
            }
        }
    }
    return true;
}
