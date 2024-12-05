#ifndef _STRIKE_BLACK_H_
#define _STRIKE_BLACK_H_

#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Strike_Black : public AbstractCard
{
public:
    Strike_Black();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif
