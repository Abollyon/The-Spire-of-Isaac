
#ifndef GLASS_H
#define GLASS_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Glass:public AbstractCard
{
public:
    Glass();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // GLASS_H
