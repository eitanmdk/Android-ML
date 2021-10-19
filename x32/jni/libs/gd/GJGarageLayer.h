#pragma once

#include <cocos2d.h>

class GJGarageLayer : public cocos2d::CCLayer
{

public:
    GJGarageLayer();
    virtual ~GJGarageLayer();
     void onShards(cocos2d::CCObject*);
     void onInfo(cocos2d::CCObject*);
     void onShop(cocos2d::CCObject*);
     bool init();
};
