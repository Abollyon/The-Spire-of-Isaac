
#ifndef SHOFAR_H
#define SHOFAR_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Shofar: public AbstractCard
{
public:
    Shofar();
    void use(AbstractPlayer *p,AbstractMonster *m);
    void effect(AbstractCard *c);
    AbstractCard *makeCopy();
};

#endif // SHOFAR_H
