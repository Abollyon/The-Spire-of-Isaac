
#ifndef WAILINGWALL_H
#define WAILINGWALL_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class WailingWall: public AbstractCard
{
public:
    WailingWall();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // WAILINGWALL_H
