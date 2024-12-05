
#ifndef AZAZEL_H
#define AZAZEL_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Azazel:public AbstractCard
{
public:
    Azazel();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // AZAZEL_H
