#ifndef CANDLE_H
#define CANDLE_H

#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Candle : public AbstractCard
{
public:
    Candle();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // CANDLE_H
