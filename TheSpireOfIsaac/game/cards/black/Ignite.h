
#ifndef IGNITE_H
#define IGNITE_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Ignite: public AbstractCard
{
public:
    Ignite();
    void use(AbstractPlayer *p,AbstractMonster *m);
    void effect(AbstractCard *c);
    AbstractCard *makeCopy();
};

#endif // IGNITE_H
