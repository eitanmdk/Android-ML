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
     /*
     void onRewards(cocos2d::CCObject* selector)
     {
      auto layer = RewardsPage::create();
      layer->show();
     }
     */
    void onTest(cocos2d::CCObject* selector) {

    FLAlertLayer::create( nullptr, "Stack Trace", "ss.str()", "Exit", nullptr, 450., true, 300. )->show( );
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


namespace h_LoadingLayer {
    
const char* (*loading)(cocos2d::CCLayer*);
const char* loading_hk( CCLayer* self, void* ) {
auto gm = GameManager::sharedState();
		
        gm->setGameVariable("0109", false); // level info thing
        gm->setGameVariable( "0053", false ); // more games thing
        
        gm->setHasRatingPower( 1 ); // fix mod button thing
        
        return "Welcome to GDPS Editor /*
2.2!";
		}
}    


*/
/*
namespace h_SetGroupIDLayer
{
    SetGroupIDLayer*  (*SetGroupIDLayer)(cocos2d::CCLayer*);
    SetGroupIDLayer* o_SetGroupIDLayer(cocos2d::CCLayer* self, GameObject* a2, cocos2d::CCArray* a3) {

        auto ret = SetGroupIDLayer(self);

        auto dir = CCDirector::sharedDirector();

        auto menu = CCMenu::create( );

        ret->createToggleButton(
        std::string("Ice Block"), 
        menu_selector(SetGroupIDLayer::onIceBlock), 
        false,
        menu, 
        (CCPoint(dir->getScreenLeft() + 20, dir->getScreenTop() - 35)));

        self->addChild( menu );

        return ret;
    }
}
*/
namespace h_GJGarageLayer
{
    void* (*o_GJGarageLayer)(cocos2d::CCLayer*);
    void* GJGarageLayer(cocos2d::CCLayer* self) {

        auto ret = o_GJGarageLayer(self);

        auto dir = CCDirector::sharedDirector();

        auto info = CCSprite::createWithSpriteFrameName("GJ_infoIcon_001.png");

        auto infobut = CCMenuItemSpriteExtra::create(
        info,
        info,
        self,
        menu_selector(GJGarageLayer::onInfo));
        
        auto infomen = CCMenu::create();

        infomen->setPosition({40, 170});
        infomen->addChild(infobut);
        infomen->setScale(1);
        self->addChild(infomen);


        return ret;
    }
}

namespace MoreOptionsLayerHook
{
    MoreOptionsLayer* (*CCLayer)(MoreOptionsLayer*);
    MoreOptionsLayer* MoreOptionsLayer_initHook(CCLayer* self) {

    auto ret = MoreOptionsLayer_init(self);
        
        MoreOptionsLayer::addToggle(false, "Enable information for levels", "0109", "when is enabled you can see all level info from robtop");
        MoreOptionsLayer::(false, "Enable FPS Counter", "0115", "When enabled, your current FPS will be showed while in the menus and playing levels");

        return ret;
    }
}

namespace h_CreatorLayer
{
    void* (*o_CreatorLayer)(cocos2d::CCLayer*);
    void* CreatorLayer(cocos2d::CCLayer* self) {
         auto ret = o_CreatorLayer(self);

        auto dir = CCDirector::sharedDirector();


        auto creditos = CCSprite::createWithSpriteFrameName("communityCreditsBtn_001.png");

        auto creditosbut = CCMenuItemSpriteExtra::create(
        creditos,
        creditos,
        self,
        menu_selector(Links::onCredits));
        
        auto creditosmen = CCMenu::create();

        creditosmen->setPosition({30, 30});
        creditosmen->addChild(creditosbut);
        creditosmen->setScale(1);
        self->addChild(creditosmen, 100);

        auto children = self->getChildren();
		CCMenu* menu = (CCMenu*)children->objectAtIndex(1);

		auto menuObjs = menu->getChildren();

		CCNode* mapPack = (CCNode*)menuObjs->objectAtIndex(8);

		menu->removeChild(mapPack, true);

		CCNode* Featured = (CCNode*)menuObjs->objectAtIndex(6);
		CCNode* HOF = (CCNode*)menuObjs->objectAtIndex(7);
		CCNode* Search = (CCNode*)menuObjs->objectAtIndex(8);

		CCNode* Create = (CCNode*)menuObjs->objectAtIndex(0);
		CCNode* Saved = (CCNode*)menuObjs->objectAtIndex(1);
		CCNode* Scores = (CCNode*)menuObjs->objectAtIndex(2);

		Featured->setPositionX(Create->getPositionX());
		HOF->setPositionX(Saved->getPositionX());
		Search->setPositionX(Scores->getPositionX());


        return ret;
    }
}
__attribute__((constructor))
void fdml_init() {
    hook("_ZN9MenuLayer4initEv", h_menuLayer, init, o_init);
	hook("_ZN12LoadingLayer16getLoadingStringEv", h_LoadingLayer, loading, loading_hk);
    //hook("_Z15SetGroupIDLayer4initEP10GameObjectPN7cocos2d7CCArrayE", h_SetGroupIDLayer, SetGroupIDLayer, o_SetGroupIDLayer);
	//hook("_ZN16MoreOptionsLayer4initEv", MoreOptionsLayerHook, MoreOptionsLayer_initHook, MoreOptionsLayer_init);
    hook("_ZN13GJGarageLayer4initEv", h_GJGarageLayer, GJGarageLayer, o_GJGarageLayer);
    hook("_ZN12CreatorLayer4initEv", h_CreatorLayer, CreatorLayer, o_CreatorLayer);
    inlineHookAll();
}
