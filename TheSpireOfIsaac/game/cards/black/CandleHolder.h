
#ifndef CANDLEHOLDER_H
#define CANDLEHOLDER_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class CandleHolder:public AbstractCard
{
public:
    CandleHolder();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // CANDLEHOLDER_H
