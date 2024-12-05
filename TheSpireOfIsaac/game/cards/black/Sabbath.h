
#ifndef SABBATH_H
#define SABBATH_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Sabbath:public AbstractCard
{
public:
    Sabbath();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // SABBATH_H
