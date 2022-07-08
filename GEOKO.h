/* Dateiname: GEOKO.h:

AD Praktikum 3 - SOSE22
Gruppe: 21
Jonas Pardeyke - 11142973
Nik Tykhomyrov - 11134921

Achtung: Signaturen d�rfen nicht ge�ndert werden!
*/

#ifndef GEOKO_H_INCLUDED
#define GEOKO_H_INCLUDED

#include "TE.h"

using namespace std;

class GEOKO : public TE
{
private:
    int BrGr;
    int LaGr;
    int BrMin;
    int LaMin;
    double BrSec;
    double LaSec;

    double BGinSec;
    double LGinSec;

    double Abstand;

public:
    GEOKO();                                                   // Standardkonstruktor, Nutzung eventuell nicht erforderlich!
    GEOKO(int, int, int, int, double, double, double, double); // Initialisierungskonstruktor
    GEOKO(double, double);                                     // Initialisierungskonstruktor

    void convertToCoordinates(double, double, bool);

    int getBrGr();
    int getLaGr();
    int getBrMin();
    int getLaMin();
    double getBrSec();
    double getLaSec();
    double getAbstand();
    double getBGinSec();
    double getLGinSec();

    bool operator<(const GEOKO &other) const;
    bool operator>(const GEOKO &other) const;
    bool operator==(const GEOKO &other) const;
    bool operator!=(const GEOKO &other) const;

    void setBrGr(int);
    void setLaGr(int);
    void setBrMin(int);
    void setLaMin(int);
    void setBrSec(double);
    void setLaSec(double);

    void setKOinSec(double, double);

}; // Ende class GEOKO

#endif // GEOKO_H_INCLUDED
