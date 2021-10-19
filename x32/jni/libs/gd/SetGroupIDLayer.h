#ifndef SETGROUPIDLAYER_H
#define SETGROUPIDLAYER_H

#pragma once

#include <cocos2d.h>

class SetGroupIDLayer;

class SetGroupIDLayer : public cocos2d::CCLayer
{
    public:

    SetGroupIDLayer();
    bool init();
    void onPassable( cocos2d::CCObject* ref );
    void onAlwaysHide( cocos2d::CCObject* ref );
    void onIceBlock( cocos2d::CCObject* ref );
    void NonStick( cocos2d::CCObject* ref );
    static SetGroupIDLayer* create();

    void createToggleButton( std::string label, cocos2d::SEL_MenuHandler SEL, bool toggle, cocos2d::CCMenu* menu, cocos2d::CCPoint position );
};
#endif