#pragma once

#include <CCLayer.h>

class MoreOptionsLayer : cocos2d::CCLayer
{
public:
    virtual bool init();

    int addToggle(const char* display, const char* key, const char* extraInfo);
    
    void* (*MoreOptionsLayer_init)(CCLayer*);
    void* MoreOptionsLayer_initHook(CCLayer* self) {

        auto ret = o_anit(self);

        self->addToggle("Enable information for levels", "0109", "when is enabled you can see all level info from robtop");
        self->addToggle("Enable FPS Counter", "0115", "When enabled, your current FPS will be showed while in the menus and playing levels");

        return ret;
};
