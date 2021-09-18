#include <cstdio>
#include <cstdlib>
#include <dlfcn.h>
#include <cocos2d.h>
#include <gd.h>
#include "libs/hook/inlineHook.h"

// NOTE: the show fps button thing is missing because missing headers say to andy to give the headers LOL

// import cocos
using namespace cocos2d;

class Links : public cocos2d::CCLayer 
{
public:
    void onCredits( cocos2d::CCObject* selector) 
    {
        auto app = cocos2d::CCApplication::sharedApplication( );
        auto url = ("http://ps.fhgdps.com/GDPSEditor22/credits.html");

        app->openURL(url);
    }
    void onEitan( cocos2d::CCObject* selector)
    {
        auto app = cocos2d::CCApplication::sharedApplication( );
        auto url = ("http://youtube.com/c/eitanmdkoficial");

        app->openURL(url);
    }
};
namespace h_menuLayer {

    // define the layer
    void* (*o_init)(CCLayer*);
    void* init(CCLayer* self) {

        auto gm = GameManager::sharedState();
		
        gm->setGameVariable("0109", false); // level info thing
        gm->setGameVariable( "0053", false ); // more games thing
        
        gm->setHasRatingPower( 1 ); // fix mod button thing

    auto ret = o_init(self);
        
        auto dir = CCDirector::sharedDirector();
		
        auto menu = CCMenu::create();
        auto menu2 = CCMenu::create();

        // Created Lvls
        auto createdlvls = CCSprite::createWithSpriteFrameName("GJ_createBtn_001.png");
        createdlvls->setScale(.7);
        auto btn = CCMenuItemSpriteExtra::create(createdlvls,
        createdlvls,
        self,
        menu_selector(CreatorLayer::onMyLevels));
        menu->addChild(btn);
        menu->setPosition(CCPoint(dir->getScreenRight() - 43, dir->getScreenBottom() + 43));
        self->addChild(menu, 100);

        // Version txt
        auto label22 = CCLabelBMFont::create("Version 2.2.0.5", "chatFont.fnt");
        label22->setPosition(CCPoint(dir->getScreenRight() - 55, dir->getScreenTop() - 10));
        label22->setAnchorPoint({ 0, 0 });
        label22->setScale(.5);
        self->addChild(label22);


        // credits button **new addon**
        auto creditos = CCSprite::createWithSpriteFrameName("communityCreditsBtn_001.png");

        auto creditosbut = CCMenuItemSpriteExtra::create(
        creditos,
        creditos,
        self,
        menu_selector(Links::onCredits));
        
        auto creditosmen = CCMenu::create();

        creditosmen->setPosition(CCPoint(dir->getScreenLeft() + 20, dir->getScreenTop() - 35));
        creditosmen->addChild(creditosbut);
        creditosmen->setScale(1);
        self->addChild(creditosmen, 100);

        //the other button XD
        auto showfps = CCSprite::createWithSpriteFrameName("GJ_optionsBtn02_001.png");
        showfps->setScale(1);

        auto btn2 = CCMenuItemSpriteExtra::create(
        showfps,
        showfps,
        self,
        menu_selector(VideoOptionsLayer::onAdvanced));
        
        menu2->addChild(btn2);
        menu2->setPosition(CCPoint(dir->getScreenRight() - 22, dir->getScreenTop() - 35));
        self->addChild(menu2, 100);

        return ret;
    }
}

/*
namespace h_LoadingLayer {
    
const char* (*loading)(cocos2d::CCLayer*);
const char* loading_hk( CCLayer* self ) {
auto gm = GameManager::sharedState();
		
        gm->setGameVariable("0109", false); // level info thing
        gm->setGameVariable( "0053", false ); // more games thing
        
        gm->setHasRatingPower( 1 ); // fix mod button thing
        
        return "Welcome to GDPS Editor 2.2!";
		}
}
*/                                                                                                                                                                                   

namespace MoreOptionsLayerHook
{
    void* (*MoreOptionsLayer_init)(cocos2d::CCLayer*);
    void* MoreOptionsLayer_initHook(cocos2d::CCLayer* self) {

    auto moreOptionsLayer =  MoreOptionsLayer::create();

	auto ret = MoreOptionsLayer_init(moreOptionsLayer);
	    
        moreOptionsLayer->addToggle("Enable information for levels", "0109", "when is enabled you can see all level info from robtop");
        moreOptionsLayer->addToggle("Enable FPS Counter", "0115", "When enabled, your current FPS will be showed while in the menus and playing levels");

        return ret;
    }
}

namespace h_SetGroupIDLayer
{
    void*  (*SetGroupIDLayer)(cocos2d::CCLayer*);
    void* o_SetGroupIDLayer(SetGroupIDLayer* this, GameObject* a2, cocos2d::CCArray* a3) {

        auto ret = o_SetGroupIDLayer(this);

        auto dir = CCDirector::sharedDirector();

        auto group = SetGroupIDLayer::create();

        auto menu = CCMenu::create( );

        group->createToggleButton(
        std::string("Ice Block"), 
        menu_selector(SetGroupIDLayer::onIceBlock), 
        false,
        menu, 
        (CCPoint(dir->getScreenLeft() + 20, dir->getScreenTop() - 35)));

        self->addChild( menu );

        return ret;
    }
}
__attribute__((constructor))
void fdml_init() {
    hook("_ZN9MenuLayer4initEv", h_menuLayer, init, o_init);
	//hook("_ZN12LoadingLayer16getLoadingStringEv", h_LoadingLayer, loading, loading_hk);
    hook("_Z15SetGroupIDLayer4initEP10GameObjectPN7cocos2d7CCArrayE", h_SetGroupIDLayer, SetGroupIDLayer, o_SetGroupIDLayer);
	hook("_ZN16MoreOptionsLayer4initEv", MoreOptionsLayerHook, MoreOptionsLayer_initHook, MoreOptionsLayer_init);
    inlineHookAll();
}
