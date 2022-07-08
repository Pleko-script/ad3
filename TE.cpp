/* Dateiname: TE.cpp:

AD Praktikum 3 - SOSE22
Gruppe: 21
Jonas Pardeyke - 11142973
Nik Tykhomyrov - 11134921


*/

#include "TE.h"

using namespace std;

TE::TE() {}

TE::TE(TE *parent, TE *left, TE *right)
{
    P = parent;
    L = left;
    R = right;
}

TE *TE::getP()
{
    return P;
}
TE *TE::getL()
{
    return L;
}
TE *TE::getR()
{
    return R;
}

TE *TE::getThis()
{
    return this;
}

void TE::setP(TE *parent)
{
    P = parent;
}
void TE::setL(TE *left)
{
    L = left;
}
void TE::setR(TE *right)
{
    R = right;
}
