
#ifndef HANUKKAH_H
#define HANUKKAH_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Hanukkah:public AbstractCard
{
public:
    Hanukkah();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // HANUKKAH_H
