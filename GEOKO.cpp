/* Dateiname: GEOKO.cpp:

AD Praktikum 3 - SOSE22
Gruppe: 21
Jonas Pardeyke - 11142973
Nik Tykhomyrov - 11134921

Enth�lt den Code der Methoden der Klassen POINT, LINE und CIRCLE
*/

#include "GEOKO.h"
#include "TE.h"

using namespace std;

GEOKO::GEOKO(){}

GEOKO::GEOKO(int bg, int lg, int bm, int lm, double bs, double ls){
    BrGr = bg;
    LaGr = lg;
    BrMin = bm;
    LaMin = lm;
    BrSec = bs;
    LaSec = ls;


    //erstelle Baumstruktur
    //TE baumElement = new TE(TE* p, TE* l, TE* r);
}



int GEOKO::getBrGr(){
    return BrGr;
}
int GEOKO::getLaGr(){
    return LaGr;
}
int GEOKO::getBrMin(){
    return BrMin;
}
int GEOKO::getLaMin(){
    return LaMin;
}
double GEOKO::getBrSec(){
    return BrSec;
}
double GEOKO::getLaSec(){
    return LaSec;
}
double GEOKO::getAbstand(){
    return Abstand;
}

void GEOKO::setBrGr(int bg){
    BrGr = bg;
}
void GEOKO::setLaGr(int lg){
    LaGr = lg;
}
void GEOKO::setBrMin(int bm){
    BrMin = bm;
}
void GEOKO::setLaMin(int lm){
    LaMin = lm;
}
void GEOKO::setBrSec(double bs){
    BrSec = bs;
}
void GEOKO::setLaSec(double ls){
    LaSec = ls;
}
bool GEOKO::operator<(const GEOKO &other) const{
    if(this->Abstand < other.Abstand){
        return true;
    }
    else{
        return false;
    }
}
bool GEOKO::operator>(const GEOKO &other) const{
    if(this->Abstand > other.Abstand){
        return true;
    }
    else{
        return false;
    }
}
bool GEOKO::operator==(const GEOKO &other) const{
    if(this->Abstand == other.Abstand){
        return true;
    }
    else{
        return false;
    }
}
bool GEOKO::operator!=(const GEOKO &other) const{
    if(this->Abstand != other.Abstand){
        return true;
    }
    else{
        return false;
    }
}
