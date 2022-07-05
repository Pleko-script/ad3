/* Dateiname: TE.h:

AD Praktikum 3 - SOSE22
Gruppe: 21
Jonas Pardeyke - 11142973
Nik Tykhomyrov - 11134921

Achtung: Signaturen dürfen nicht geändert werden!
*/

#ifndef TE_H_INCLUDED
#define TE_H_INCLUDED

using namespace std;

class TE{
   private:
       TE* P;
       TE* L;
       TE* R;

   public :
      TE ();  //Standardkonstruktor, Nutzung eventuell nicht erforderlich!
      TE (TE*, TE*, TE*); //Initialisierungskonstruktor

      TE* getP();
      TE* getL();
      TE* getR();

      void setP(TE*);
      void setL(TE*);
      void setR(TE*);

};  //Ende class TE


#endif // TE_H_INCLUDED
