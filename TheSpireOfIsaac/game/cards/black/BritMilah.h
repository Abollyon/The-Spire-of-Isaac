
#ifndef BRITMILAH_H
#define BRITMILAH_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class BritMilah:public AbstractCard
{
public:
    BritMilah();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // BRITMILAH_H
