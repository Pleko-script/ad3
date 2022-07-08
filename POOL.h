/* Dateiname: POOL.h:

AD Praktikum 3 - SOSE22
Gruppe: 21
Jonas Pardeyke - 11142973
Nik Tykhomyrov - 11134921

Achtung: Signaturen d�rfen nicht ge�ndert werden!
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
        GEOKO* Root;


   public :
      POOL ();  //Standardkonstruktor, Nutzung eventuell nicht erforderlich!
      POOL (long Maximal); //Initialisierungskonstruktor

      bool addElement(GEOKO*);
      bool pruefeBaum();

      long getAnz();
      long getMax();
      GEOKO* getIndex();
      GEOKO* getMitte();

      void setAnz(long);
      void setMax(long);

      void showMitte();
      void setAbstand();

      void versinke(GEOKO*, int , int );
      void erzeugeHeap(GEOKO *, int );
      void heapSort(GEOKO *, int );
      void vertausche(GEOKO *, int , int );

      void bubbleSort();
};  //Ende class POOL


#endif // POOL_H_INCLUDED
