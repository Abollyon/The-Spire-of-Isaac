#ifndef DEFEND_BLACK_H
#define DEFEND_BLACK_H

#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"

class Defend_Black : public AbstractCard
{
public:
    Defend_Black();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // DEFEND_BLACK_H
