
#ifndef MARTYRBLOOD_H
#define MARTYRBLOOD_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class MartyrBlood:public AbstractCard
{
public:
    MartyrBlood();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // MARTYRBLOOD_H
