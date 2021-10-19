#ifndef SHARDSPAGE_H
#define SHARDSPAGE_H
#include <cocos2d.h>

class ShardsPage : public cocos2d::CCNode {
public:
  void create(cocos2d::CCObject*);
  void goToPage(cocos2d::CCObject*);
  void updateUserProfileButton(void);
  bool init();
};
#endif
