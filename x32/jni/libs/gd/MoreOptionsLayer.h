#pragma once

#include <CCLayer.h>

class MoreOptionsLayer : cocos2d::CCLayer
{
public:
    virtual bool init();

    int addToggle(const char* display, const char* key, const char* extraInfo);
    
    bool (*MoreOptionsLayer_init)(MoreOptionsLayer*);
    bool MoreOptionsLayer_initHook(MoreOptionsLayer* self) {

        if (!MoreOptionsLayer_init(self)) 
            return false;

        self->addToggle("Enable information for levels", "0109", "when is enabled you can see all level info from robtop");
        self->addToggle("Enable FPS Counter", "0115", "When enabled, your current FPS will be showed while in the menus and playing levels");

        return true;
};
