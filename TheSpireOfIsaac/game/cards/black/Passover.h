
#ifndef PASSOVER_H
#define PASSOVER_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Passover:public AbstractCard
{
public:
    Passover();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // PASSOVER_H
