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

class GEOKO: public TE{
   private:
       int BrGr;
       int LaGr;
       int BrMin;
       int LaMin;
       double BrSec;
       double LaSec;

       double Abstand;

   public :
      GEOKO ();  //Standardkonstruktor, Nutzung eventuell nicht erforderlich!
      GEOKO (int, int, int, int, double, double); //Initialisierungskonstruktor

      int getBrGr();
      int getLaGr();
      int getBrMin();
      int getLaMin();
      double getBrSec();
      double getLaSec();
      double getAbstand();
      
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


};  //Ende class GEOKO


#endif // GEOKO_H_INCLUDED
