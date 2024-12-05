
#ifndef SECONDTEMPLE_H
#define SECONDTEMPLE_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class SecondTemple:public AbstractCard
{
public:
    SecondTemple();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // SECONDTEMPLE_H
