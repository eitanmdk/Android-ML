
#include <cstdio>
#include <cstdlib>
#include <dlfcn.h>
#include <cocos2d.h>
#include <gd.h>
#include "libs/hook/inlineHook.h"

using namespace cocos2d;

namespace h_MenuLayer {

    
    void* (*o_init)(CCLayer*);
    void* init(CCLayer* self) {
        auto ret = o_init(self);
        
        auto dir = CCDirector::sharedDirector();

        auto menu = CCMenu::create();
        auto menu2 = CCMenu::create();
        
        // Created Lvls
        auto createdlvls = CCSprite::createWithSpriteFrameName("GJ_createBtn_001.png");
        createdlvls->setScale(.7);
        auto btn = CCMenuItemSpriteExtra::create(createdlvls, createdlvls, self, menu_selector(CreatorLayer::onMyLevels));
        menu->addChild(btn);
        menu->setPosition(CCPoint(dir->getScreenRight() - 43, dir->getScreenBottom() + 43));
        self->addChild(menu, 100);

        // Version txt
        auto label22 = CCLabelBMFont::create("Version 2.2.0.3", "chatFont.fnt");
        label22->setPosition(CCPoint(dir->getScreenLeft() + 2, dir->getScreenTop() - 10));
        label22->setAnchorPoint({ 0, 0 });
        label22->setScale(.5);
        self->addChild(label22);


        //Sai
        auto sai = CCLabelBMFont::create("sai estuvo aqui uwu", "chatFont.fnt");
        
        return ret;
    }
}


namespace h_MoreOptionsLayer {
    
        void* (*o_anit)(CCLayer*);
    void* anit(CCLayer* self) {
        auto ret = o_anit(self);
    
    bool (*MoreOptionsLayer_init)(MoreOptionsLayer*);
bool MoreOptionsLayer_initHook(MoreOptionsLayer* self);
{
    self->addToggle("Enable FPS Counter", "0116", "When enabled, your current FPS will be showed while in the menus and playing levels");
}
    }
}
__attribute__((constructor))
void fdml_init() {
    hook("_ZN9MenuLayer4initEv", h_MenuLayer, init, o_init);
    hook("_ZN16MoreOptionsLayer4initEv", MoreOptionsLayer, anit, o_anit);
    inlineHookAll();
}
