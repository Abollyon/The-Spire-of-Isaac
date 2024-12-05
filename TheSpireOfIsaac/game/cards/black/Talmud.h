
#ifndef TALMUD_H
#define TALMUD_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Talmud:public AbstractCard
{
public:
    Talmud();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // TALMUD_H
