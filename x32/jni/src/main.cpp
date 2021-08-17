/*
#include <cstdio>
#include <cstdlib>
#include <dlfcn.h>
#include <cocos2d.h>
#include <gd.h>
#include "libs/hook/inlineHook.h"

using namespace cocos2d;

namespace h_menuLayer {
	void* (*o_init)(CCLayer*);
	void* init(CCLayer* self) {
		auto ret = o_init(self);
    
    //create button

		auto sprite = CCSprite::createWithSpriteFrameName("GJ_createBtn_001.png");

		auto btn = CCMenuItemSprite::create(sprite, sprite, self, menu_selector(CreatorLayer::onMyLevels));
		btn->setScale(0.7);

		auto menu = CCMenu::create();
		menu->addChild(btn, 100);
		menu->setPosition({CCPoint(dir->getScreenRight() - 43, dir->getScreenBottom() + 43 });

		self->addChild(menu, 100);

    //texto de la version uwu

    auto texto = CCLabelMBFont::create("Version 2.2.0.3", "chatFont.fnt");

    texto->setPosition(CCPoint(dir->getScreenLeft() + 2, dir->getScreenTop() - 10));

    label->setScale(.5);

		return ret;
	}
}


__attribute__((constructor))
void fdml_init() {
	hook("_ZN9MenuLayer4initEv", h_menuLayer, init, o_init);
}
*/