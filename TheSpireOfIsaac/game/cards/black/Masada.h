
#ifndef MASADA_H
#define MASADA_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Masada:public AbstractCard
{
public:
    Masada();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // MASADA_H
