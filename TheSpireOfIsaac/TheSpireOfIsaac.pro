QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
RC_ICONS=icon.ico

QMAKE_CXXFLAGS_RELEASE += -O0 -g
QMAKE_CXXFLAGS += -Wno-attributes



# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    campfire.cpp \
    cardbutton.cpp \
    cardgroupwidget.cpp \
    cardwidget.cpp \
    combatroom.cpp \
    creaturewidget.cpp \
    game/cards/AbstractCard.cpp \
    game/cards/CardGroup.cpp \
    game/cards/DamageInfo.cpp \
    game/cards/RandomCard.cpp \
    game/cards/black/Azazel.cpp \
    game/cards/black/BritMilah.cpp \
    game/cards/black/Candle.cpp \
    game/cards/black/CandleHolder.cpp \
    game/cards/black/David.cpp \
    game/cards/black/Defend_Black.cpp \
    game/cards/black/Exodus.cpp \
    game/cards/black/Glass.cpp \
    game/cards/black/Hanukkah.cpp \
    game/cards/black/Ignite.cpp \
    game/cards/black/Maccabeans.cpp \
    game/cards/black/MartyrBlood.cpp \
    game/cards/black/Masada.cpp \
    game/cards/black/Mezuza.cpp \
    game/cards/black/NoahsArk.cpp \
    game/cards/black/Passover.cpp \
    game/cards/black/Sabbath.cpp \
    game/cards/black/SecondTemple.cpp \
    game/cards/black/Shofar.cpp \
    game/cards/black/Solomon.cpp \
    game/cards/black/Strike_Black.cpp \
    game/cards/black/Talmud.cpp \
    game/cards/black/WailingWall.cpp \
    game/cards/black/YomKippur.cpp \
    game/cards/colorless/Burn.cpp \
    game/cards/colorless/Dazed.cpp \
    game/cards/colorless/Slimed.cpp \
    game/cards/colorless/Void.cpp \
    game/cards/colorless/Wound.cpp \
    game/characters/AbstractPlayer.cpp \
    game/characters/Jew.cpp \
    game/core/AbstractCreature.cpp \
    game/dungeon/Dungeon.cpp \
    game/monsters/AbstractMonster.cpp \
    game/monsters/CorruptHeart.cpp \
    game/monsters/MonsterGroup.cpp \
    game/monsters/SpireShield.cpp \
    game/monsters/SpireSpear.cpp \
    game/powers/AbstractPower.cpp \
    game/powers/Artifact.cpp \
    game/powers/BackAttackLeft.cpp \
    game/powers/BackAttackRight.cpp \
    game/powers/Barricade_.cpp \
    game/powers/BeatOfDeath.cpp \
    game/powers/BritMilah_.cpp \
    game/powers/CandleHolder_.cpp \
    game/powers/Corruption_.cpp \
    game/powers/DarkEmbrace_.cpp \
    game/powers/DemonForm_.cpp \
    game/powers/Frail.cpp \
    game/powers/Invincible.cpp \
    game/powers/Masada_.cpp \
    game/powers/NoDraw.cpp \
    game/powers/NoahsArk_.cpp \
    game/powers/PainfulStabs.cpp \
    game/powers/Strength.cpp \
    game/powers/Surrounded.cpp \
    game/powers/Talmud_.cpp \
    game/powers/Vulnerable.cpp \
    game/powers/Weak.cpp \
    game/powers/YomKippur_.cpp \
    game/powers/expiation.cpp \
    game/powers/trial.cpp \
    game/relics/AbstractRelic.cpp \
    game/rooms/AbstractRoom.cpp \
    game/rooms/BossRoom.cpp \
    game/rooms/CampfireRoom.cpp \
    game/rooms/EliteRoom.cpp \
    game/rooms/ShopRoom.cpp \
    getcard.cpp \
    main.cpp \
    mainwindow.cpp \
    map.cpp \
    mapwidget.cpp \
    menu.cpp \
    powerwidget.cpp \
    shop.cpp \
    statebar.cpp \
    usecard.cpp

HEADERS += \
    campfire.h \
    cardbutton.h \
    cardgroupwidget.h \
    cardwidget.h \
    combatroom.h \
    creaturewidget.h \
    game/cards/AbstractCard.h \
    game/cards/CardGroup.h \
    game/cards/DamageInfo.h \
    game/cards/RandomCard.h \
    game/cards/black/Azazel.h \
    game/cards/black/BritMilah.h \
    game/cards/black/Candle.h \
    game/cards/black/CandleHolder.h \
    game/cards/black/David.h \
    game/cards/black/Defend_Black.h \
    game/cards/black/Exodus.h \
    game/cards/black/Glass.h \
    game/cards/black/Hanukkah.h \
    game/cards/black/Ignite.h \
    game/cards/black/Maccabeans.h \
    game/cards/black/MartyrBlood.h \
    game/cards/black/Masada.h \
    game/cards/black/Mezuza.h \
    game/cards/black/NoahsArk.h \
    game/cards/black/Passover.h \
    game/cards/black/Sabbath.h \
    game/cards/black/SecondTemple.h \
    game/cards/black/Shofar.h \
    game/cards/black/Solomon.h \
    game/cards/black/Strike_Black.h \
    game/cards/black/Talmud.h \
    game/cards/black/WailingWall.h \
    game/cards/black/YomKippur.h \
    game/cards/colorless/Burn.h \
    game/cards/colorless/Dazed.h \
    game/cards/colorless/Slimed.h \
    game/cards/colorless/Void.h \
    game/cards/colorless/Wound.h \
    game/characters/AbstractPlayer.h \
    game/characters/Jew.h \
    game/core/AbstractCreature.h \
    game/dungeon/Dungeon.h \
    game/monsters/AbstractMonster.h \
    game/monsters/CorruptHeart.h \
    game/monsters/MonsterGroup.h \
    game/monsters/SpireShield.h \
    game/monsters/SpireSpear.h \
    game/powers/AbstractPower.h \
    game/powers/Artifact.h \
    game/powers/BackAttackLeft.h \
    game/powers/BackAttackRight.h \
    game/powers/Barricade_.h \
    game/powers/BeatOfDeath.h \
    game/powers/BritMilah_.h \
    game/powers/CandleHolder_.h \
    game/powers/Corruption_.h \
    game/powers/DarkEmbrace_.h \
    game/powers/DemonForm_.h \
    game/powers/Frail.h \
    game/powers/Invincible.h \
    game/powers/Masada_.h \
    game/powers/NoDraw.h \
    game/powers/NoahsArk_.h \
    game/powers/PainfulStabs.h \
    game/powers/Strength.h \
    game/powers/Surrounded.h \
    game/powers/Talmud_.h \
    game/powers/Vulnerable.h \
    game/powers/Weak.h \
    game/powers/YomKippur_.h \
    game/powers/expiation.h \
    game/powers/trial.h \
    game/relics/AbstractRelic.h \
    game/rooms/AbstractRoom.h \
    game/rooms/BossRoom.h \
    game/rooms/CampfireRoom.h \
    game/rooms/EliteRoom.h \
    game/rooms/ShopRoom.h \
    getcard.h \
    mainwindow.h \
    map.h \
    mapwidget.h \
    menu.h \
    powerwidget.h \
    shop.h \
    statebar.h \
    usecard.h

FORMS += \
    campfire.ui \
    cardgroupwidget.ui \
    cardwidget.ui \
    combatroom.ui \
    creaturewidget.ui \
    getcard.ui \
    mainwindow.ui \
    mapwidget.ui \
    menu.ui \
    powerwidget.ui \
    shop.ui \
    statebar.ui \
    usecard.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
