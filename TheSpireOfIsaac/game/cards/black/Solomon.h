
#ifndef SOLOMON_H
#define SOLOMON_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Solomon: public AbstractCard
{
public:
    Solomon();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // SOLOMON_H
