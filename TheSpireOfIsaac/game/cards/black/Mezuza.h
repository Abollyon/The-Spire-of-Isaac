
#ifndef MEZUZA_H
#define MEZUZA_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Mezuza: public AbstractCard
{
public:
    Mezuza();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // MEZUZA_H
