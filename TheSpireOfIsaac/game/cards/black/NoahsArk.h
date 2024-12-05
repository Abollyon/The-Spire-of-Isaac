#ifndef NOAHSARK_H
#define NOAHSARK_H

#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class NoahsArk : public AbstractCard
{
public:
    NoahsArk();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // NOAHSARK_H
