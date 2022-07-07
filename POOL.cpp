/* Dateiname: POOL.cpp:

AD Praktikum 3 - SOSE22
Gruppe: 21
Jonas Pardeyke - 11142973
Nik Tykhomyrov - 11134921

Enth�lt den Code der Methoden der Klassen POINT, LINE und CIRCLE
*/

#include "POOL.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

POOL::POOL() {}

POOL::POOL(long Maximal)
{
    Index = new GEOKO[Maximal];
    Max = Maximal;
    Anz = 0;
}

double LGsum = 0;
double BGsum = 0;
double LGschnitt;
double BGschnitt;

bool POOL::addElement(GEOKO *element)
{

    element->setP((TE *)malloc(sizeof(TE)));
    element->setL((TE *)malloc(sizeof(TE)));
    element->setR((TE *)malloc(sizeof(TE)));

    if (Anz > 0)
    {

        if (Anz % 2 == 1)
        {

            element->setP(Index[Anz / 2].getL());
            cout << "Index nr:" << Anz / 2 << " Modul:True" << endl;
        }
        else
        {
            element->setP(Index[(Anz / 2) - 1].getR());

            cout << "Index nr:" << Anz / 2 << " Modul:false" << endl;
        }
    }

    cout << "P: " << element->getP() << endl;
    cout << "L: " << element->getL() << endl;
    cout << "R: " << element->getR() << endl;
    cout << "Anz: " << Anz << endl;

    if (Anz < Max)
    {
        Index[Anz] = *element;
        Anz++;

        LGsum = LGsum + element->getLGinSec();
        BGsum = BGsum + element->getBGinSec();

        LGschnitt = LGsum / Anz;
        BGschnitt = BGsum / Anz;

        return true;
    }
    else
    {
        cout << endl;
        cout << ">>>>>Liste voll!<<<<<" << endl;
        cout << endl;
        return false;
    }
}

void POOL::showMitte()
{
    Mitte->setKOinSec(LGschnitt, BGschnitt);
}

bool POOL::pruefeBaum()
{
    for (int i = 0; i < Anz; i++)
    {
        if (Index[i].getL() != NULL)
        {
            if (Index[i].getL()->getP() != &Index[i])
            {
                return false;
            }
        }
        if (Index[i].getR() != NULL)
        {
            if (Index[i].getR()->getP() != &Index[i])
            {
                return false;
            }
        }
    }
    return true;
}

GEOKO *POOL::getMitte()
{
    return Mitte;
}

/*
void POOL::versinke(GEOKO *Feld, int Anz, int i)
{
    while (i <= Anz / 2)
    {
        int LN = i * 2;
        if (LN < Anz)
        {
            if (Feld[LN] > Feld[LN - 1])
                LN++;
        }
        if (Feld[LN - 1] > Feld[i - 1])
        {
            vertausche(i - 1, LN - 1);
            i = LN;
        }
        else
            i = Anz;
    }
}

void POOL::erzeugeHeap(GEOKO *Feld, int Anz)
{
    int N = (Anz / 2);
    for (int i = N; i >= 1; i--)
        versinke(Feld, Anz, i);
}

void POOL::heapSort(GEOKO *Feld, int Anz)
{
    erzeugeHeap(Feld, Anz);
    for (int i = Anz; i > 1; i--)
    {
        vertausche(0, i - 1);
        versinke(i - 1, 1);
    }
}

void POOL::vertausche(GEOKO *Feld, int Von, int Nach)
{
    int Tmp = Feld[Von];
    Feld[Von] = Feld[Nach];
    Feld[Nach] = Tmp;
}*/