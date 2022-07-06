/* Dateiname: POOL.h:

AD Praktikum 3 - SOSE22
Gruppe: 21
Jonas Pardeyke - 11142973
Nik Tykhomyrov - 11134921

Achtung: Signaturen dürfen nicht geändert werden!
*/

#ifndef POOL_H_INCLUDED
#define POOL_H_INCLUDED

#include "GEOKO.h"
#include <cstddef>

using namespace std;

class POOL{
   private:
        long Max;
        long Anz;
        GEOKO* Mitte = new GEOKO();
        GEOKO* Index;
        GEOKO* Root = Index;


   public :
      POOL ();  //Standardkonstruktor, Nutzung eventuell nicht erforderlich!
      POOL (long Maximal); //Initialisierungskonstruktor

      bool addElement(GEOKO*);
      bool pruefeBaum();

      long getAnz();
      long getMax();
      GEOKO* getMitte();

      void setAnz();
      void setMax();

      void showMitte();


};  //Ende class POOL


#endif // POOL_H_INCLUDED
