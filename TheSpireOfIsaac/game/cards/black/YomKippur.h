
#ifndef YOMKIPPUR_H
#define YOMKIPPUR_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class YomKippur:public AbstractCard
{
public:
    YomKippur();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // YOMKIPPUR_H
