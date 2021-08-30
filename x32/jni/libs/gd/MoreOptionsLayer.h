#ifndef MOREOPTIONSLAYER_H
#define MOREOPTIONSLAYER_H

#include <cocos2d.h>

class MoreOptionsLayer : public cocos2d::CCLayer
{
public:
    virtual bool init();

    int addToggle(const char* display, const char* key, const char* extraInfo);
    
    static MoreOptionsLayer* create();
};

#endif
