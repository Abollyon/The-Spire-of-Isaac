
#ifndef EXODUS_H
#define EXODUS_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Exodus:public AbstractCard
{
public:
    Exodus();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // EXODUS_H
