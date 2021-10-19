#pragma once

#include <cocos2d.h>

// size 0x2F4
class EffectGameObject : public cocos2d::CCNode
{ 
public:
    EffectGameObject();
    virtual ~EffectGameObject();

    static EffectGameObject* create(char const*);

    bool init( char const* );
};
