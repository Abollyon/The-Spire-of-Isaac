
#ifndef MACCABEANS_H
#define MACCABEANS_H



#include "../AbstractCard.h"
#include "../../characters/AbstractPlayer.h"
#include "../../monsters/AbstractMonster.h"
class Maccabeans: public AbstractCard
{
public:
    Maccabeans();
    void use(AbstractPlayer *p,AbstractMonster *m);
    AbstractCard *makeCopy();
};

#endif // MACCABEANS_H
