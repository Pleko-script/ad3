/* Dateiname: GEOKO.cpp:

AD Praktikum 3 - SOSE22
Gruppe: 21
Jonas Pardeyke - 11142973
Nik Tykhomyrov - 11134921

Enth�lt den Code der Methoden der Klassen POINT, LINE und CIRCLE
*/

#include "GEOKO.h"
#include "TE.h"
#include <iostream>

using namespace std;

GEOKO::GEOKO() {}

GEOKO::GEOKO(int lg, int bg, int lm, int bm, double ls, double bs, double LGSec, double BGSec)
{
    BrGr = bg;
    LaGr = lg;
    BrMin = bm;
    LaMin = lm;
    BrSec = bs;
    LaSec = ls;

    BGinSec = BGSec;
    LGinSec = LGSec;
}

GEOKO::GEOKO(double LGSec, double BGSec)
{

    LGinSec = LGSec;
    BGinSec = BGSec;

    convertToCoordinates(LGSec, BGSec, 0);
}

int GEOKO::getBrGr()
{
    return BrGr;
}
int GEOKO::getLaGr()
{
    return LaGr;
}
int GEOKO::getBrMin()
{
    return BrMin;
}
int GEOKO::getLaMin()
{
    return LaMin;
}
double GEOKO::getBrSec()
{
    return BrSec;
}
double GEOKO::getLaSec()
{
    return LaSec;
}
double GEOKO::getAbstand()
{
    return Abstand;
}
double GEOKO::getLGinSec()
{
    return LGinSec;
}
double GEOKO::getBGinSec()
{
    return BGinSec;
}

void GEOKO::setBrGr(int bg)
{
    BrGr = bg;
}
void GEOKO::setLaGr(int lg)
{
    LaGr = lg;
}
void GEOKO::setBrMin(int bm)
{
    BrMin = bm;
}
void GEOKO::setLaMin(int lm)
{
    LaMin = lm;
}
void GEOKO::setBrSec(double bs)
{
    BrSec = bs;
}
void GEOKO::setLaSec(double ls)
{
    LaSec = ls;
}
void GEOKO::setKOinSec(double LG, double BG)
{
    convertToCoordinates(LG, BG, 1);

    LGinSec = LG;
    BGinSec = BG;
}

bool GEOKO::operator<(const GEOKO &other) const
{
    if (this->Abstand < other.Abstand)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool GEOKO::operator>(const GEOKO &other) const
{
    if (this->Abstand > other.Abstand)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool GEOKO::operator==(const GEOKO &other) const
{
    if (this->Abstand == other.Abstand)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool GEOKO::operator!=(const GEOKO &other) const
{
    if (this->Abstand != other.Abstand)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void GEOKO::convertToCoordinates(double LGSec, double BGSec, bool mitte)
{

    int LGmin = LGSec / 60;
    double LGsec = LGSec - LGmin * 60;
    int LGgrad = LGmin / 60;
    LGmin = LGmin % 60;

    int BGmin = BGSec / 60;
    double BGsec = BGSec - BGmin * 60;
    int BGgrad = BGmin / 60;
    BGmin = BGmin % 60;

    if (mitte == 0)
    {
        cout << "-----Neue Koordiante-----" << endl;
    }
    else
    {
        cout << "-----Mitte-----" << endl;
    }

    cout << "Laenge (" << fixed << LGSec << ")" << endl;
    cout << "Grad:    " << LGgrad << endl;
    cout << "Minute:  " << LGmin << endl;
    cout << "Sekunde: " << fixed << LGsec << endl;
    cout << endl;
    cout << "Breite (" << fixed << BGSec << ")" << endl;
    cout << "Grad:    " << BGgrad << endl;
    cout << "Minute:  " << BGmin << endl;
    cout << "Sekunde: " << fixed << BGsec << endl;
    cout << endl;
    cout << endl;

    LaGr = LGgrad;
    BrGr = BGgrad;
    LaMin = LGmin;
    BrMin = BGmin;
    LaSec = LGsec;
    BrSec = BGsec;
}
