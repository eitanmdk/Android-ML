cocos2d::CCDirector *__fastcall MoreOptionsLayer::init(MoreOptionsLayer *a1)
{
  cocos2d::CCDirector *v2; // r0
  int v3; // r0
  cocos2d::CCTouchDispatcher *v4; // r0
  cocos2d::CCDirector *v5; // r0
  cocos2d::CCLayer *v6; // r0
  int v7; // r0
  int v8; // r3
  int v9; // r7
  void (__fastcall *v10)(int, int *); // r8
  void (__fastcall *v11)(int, int *); // r8
  const char *v12; // r2
  int v13; // r7
  void (__fastcall *v14)(int, int *); // r8
  cocos2d::CCDictionary *v15; // r0
  cocos2d::CCObject *v16; // r0
  cocos2d::CCDictionary *v17; // r0
  cocos2d::CCObject *v18; // r0
  cocos2d::CCMenu *v19; // r0
  int v20; // r0
  int v21; // r1
  cocos2d::CCArray *v22; // r9
  const char *v23; // r1
  int v24; // r7
  CCMenuItemSpriteExtra *v25; // r7
  void (__fastcall *v26)(CCMenuItemSpriteExtra *, int *); // r11
  const char *v27; // r2
  cocos2d::CCObject *v28; // r7
  cocos2d::CCObject *v29; // r7
  int v30; // r0
  int v31; // r6
  FMODAudioEngine *v32; // r0
  FMODAudioEngine *v33; // r0
  const char *v34; // r1
  int v35; // r6
  int v36; // r0
  cocos2d::CCString *v37; // r0
  int v38; // r0
  int v39; // r0
  CCMenuItemSpriteExtra *v40; // r8
  const cocos2d::CCPoint *v41; // r10
  void (__fastcall *v42)(CCMenuItemSpriteExtra *, int *); // r9
  float v43; // s16
  const char *v44; // r1
  int v45; // r0
  int v46; // r0
  cocos2d::CCDirector *v47; // r0
  int v48; // r9
  const cocos2d::CCPoint *v49; // r11
  void (__fastcall *v50)(int, int *); // r10
  cocos2d::CCDirector *v51; // r0
  float v52; // r0
  const char *v53; // r1
  cocos2d::CCSprite *v54; // r5
  int v55; // r0
  cocos2d::CCDirector *v56; // r0
  int v57; // r5
  const cocos2d::CCPoint *v58; // r10
  void (__fastcall *v59)(int, char *); // r9
  cocos2d::CCDirector *v60; // r0
  float v61; // r0
  const cocos2d::CCPoint *v63; // [sp+10h] [bp-A8h]
  void (__fastcall *v64)(cocos2d::CCObject *, int *); // [sp+10h] [bp-A8h]
  cocos2d::CCDirector *v65; // [sp+14h] [bp-A4h]
  int v66; // [sp+1Ch] [bp-9Ch]
  float v67; // [sp+20h] [bp-98h] BYREF
  float v68; // [sp+24h] [bp-94h]
  char v69[8]; // [sp+28h] [bp-90h] BYREF
  char v70[8]; // [sp+30h] [bp-88h] BYREF
  char v71[8]; // [sp+38h] [bp-80h] BYREF
  char v72[8]; // [sp+40h] [bp-78h] BYREF
  int (*v73)(); // [sp+48h] [bp-70h]
  int v74; // [sp+4Ch] [bp-6Ch]
  int (*v75)(); // [sp+50h] [bp-68h]
  int v76; // [sp+54h] [bp-64h]
  int v77[2]; // [sp+58h] [bp-60h] BYREF
  char v78[16]; // [sp+60h] [bp-58h] BYREF
  int v79[18]; // [sp+70h] [bp-48h] BYREF

  v79[0] = 1258291200;
  v2 = (cocos2d::CCDirector *)cocos2d::CCLayerColor::initWithColor(a1, v79);
  v65 = v2;
  if ( v2 )
  {
    v3 = cocos2d::CCDirector::sharedDirector(v2);
    v4 = (cocos2d::CCTouchDispatcher *)(*(int (__fastcall **)(int))(*(_DWORD *)v3 + 80))(v3);
    cocos2d::CCTouchDispatcher::incrementForcePrio(v4, 2);
    (*(void (__fastcall **)(MoreOptionsLayer *, int))(*(_DWORD *)a1 + 488))(a1, 1);
    v5 = (cocos2d::CCDirector *)(*(int (__fastcall **)(MoreOptionsLayer *, int))(*(_DWORD *)a1 + 524))(a1, 1);
    cocos2d::CCDirector::sharedDirector(v5);
    v6 = (cocos2d::CCLayer *)cocos2d::CCDirector::getWinSize((cocos2d::CCDirector *)&v67);
    v7 = cocos2d::CCLayer::create(v6);
    v8 = *(_DWORD *)a1;
    *((_DWORD *)a1 + 110) = v7;
    (*(void (__fastcall **)(MoreOptionsLayer *, int))(v8 + 220))(a1, v7);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v79, 0.0, 0.0, 80.0, 80.0);
    v9 = cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v79);
    v10 = *(void (__fastcall **)(int, int *))(*(_DWORD *)v9 + 152);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v79, 400.0, 280.0);
    v10(v9, v79);
    (*(void (__fastcall **)(_DWORD, int, int))(**((_DWORD **)a1 + 110) + 224))(*((_DWORD *)a1 + 110), v9, -1);
    v11 = *(void (__fastcall **)(int, int *))(*(_DWORD *)v9 + 92);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v79, v67 * 0.5, v68 * 0.5);
    v11(v9, v79);
    v13 = cocos2d::CCLabelBMFont::create((cocos2d::CCLabelBMFont *)"Options", "bigFont.fnt", v12);
    v14 = *(void (__fastcall **)(int, int *))(*(_DWORD *)v13 + 92);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v79, v67 * 0.5, (float)((float)(v68 * 0.5) + 140.0) - 16.0);
    v14(v13, v79);
    (*(void (__fastcall **)(_DWORD, int))(**((_DWORD **)a1 + 110) + 220))(*((_DWORD *)a1 + 110), v13);
    v15 = (cocos2d::CCDictionary *)(*(int (__fastcall **)(int, int))(*(_DWORD *)v13 + 80))(v13, 1061997773);
    *((_DWORD *)a1 + 106) = -1;
    v16 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(v15);
    *((_DWORD *)a1 + 124) = v16;
    v17 = (cocos2d::CCDictionary *)cocos2d::CCObject::retain(v16);
    v18 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(v17);
    *((_DWORD *)a1 + 123) = v18;
    v19 = (cocos2d::CCMenu *)cocos2d::CCObject::retain(v18);
    v20 = cocos2d::CCMenu::create(v19);
    *((_DWORD *)a1 + 105) = v20;
    (*(void (__fastcall **)(_DWORD, int, int))(**((_DWORD **)a1 + 110) + 224))(*((_DWORD *)a1 + 110), v20, 10);
    MoreOptionsLayer::addToggle(a1, (int)"Auto-Retry", "0026", 0);
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Auto-Checkpoints",
      "0027",
      (int)"Automatically place checkpoints while in practice mode.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Load songs to memory",
      "0019",
      (int)"Songs are loaded into memory before playing. Increases load time but can improve performance.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"High Capacity Mode",
      "0066",
      (int)"Increases draw capacity for batch nodes at level start. Use to improve performance on some levels. May cause "
           "issues on low end devices.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"High StartPos accuracy",
      "0067",
      (int)"Increases the accuracy of start position calculations, but loading a start position takes longer.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Quick checkpoint mode",
      "0068",
      (int)"Tries to place checkpoints more often while in practice mode.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Show restart button",
      "0074",
      (int)"Always shows the restart button on the pause screen.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Fast editor preview",
      "0110",
      (int)"Updates the editor preview from playback at 60fps instead of 20fps. More performance heavy but can be good to"
           " preview more precise effects or song triggers.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Smooth Fix",
      "0023",
      (int)"Makes some optimizations that can reduce lag. Disable if game speed becomes inconsistent.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Auto low detail",
      "0108",
      (int)"Low detail mode is automatically enabled on levels that support it.");
    MoreOptionsLayer::addToggle(a1, (int)"Disable explosion shake", "0014", 0);
    MoreOptionsLayer::addToggle(a1, (int)"Disable shake effects", "0081", 0);
    MoreOptionsLayer::addToggle(a1, (int)"More comments mode", "0094", (int)"More comments per page. Why not?");
    MoreOptionsLayer::addToggle(a1, (int)"Auto load comments", "0090", 0);
    MoreOptionsLayer::addToggle(a1, (int)"Flip pause button", "0015", 0);
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Show Percentage",
      "0040",
      (int)"Show the current percentage next to the progress bar.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Increase max levels",
      "0042",
      (int)"Increases the maximum saved levels from 10 to 100");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Dont save level data",
      "0119",
      (int)"Level stats are still stored, but levels need to be redownloaded every time you restart the game. Makes savin"
           "g and loading faster.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Inc Local Levels Per Page",
      "0093",
      (int)"Increases Created/Saved levels per page from 10 to 20.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Fast practice reset",
      "0052",
      (int)"Reset time after crash in practice mode lowered 1s to 0.5s");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"New completed filter",
      "0073",
      (int)"Completed levels filter is based on percentage from update 2.1.\n<cy>(To recomplete levels with orbs)</c>");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Practice Death Effect",
      "0100",
      (int)"Show special death effects in practice mode");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Disable high object alert",
      "0082",
      (int)"The alert showed when trying to play levels with a high object count is removed.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Disable song alert",
      "0083",
      (int)"The alert showed when trying to play a level without a custom song downloaded is removed.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Manual order",
      "0084",
      (int)"New levels are placed last in the saved levels list. Select if you want to manually move levels to the top.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Show leaderboard percent",
      "0099",
      (int)"To upload your level progress to the Level Leaderboard in 2.11 you need to replay levels completed before 2.1"
           "1. This option toggles viewing the Leaderboard percentage you have on levels.");
    MoreOptionsLayer::addToggle(a1, (int)"Disable gravity effect", "0072", 0);
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Disable play object alert",
      "0056",
      (int)"Playing levels with a high object count won't display a warning.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Default mini icon",
      "0060",
      (int)"Player icon in mini mode is set to default.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Switch spider teleport color",
      "0061",
      (int)"Toggle between using main/secondary color for spider teleport effect.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Switch dash fire color",
      "0062",
      (int)"Toggle between using main/secondary color for dash fire effect.");
    MoreOptionsLayer::addToggle(a1, (int)"Switch wave trail color", "0096", 0);
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Enable move optimization",
      "0065",
      (int)"Optimizes some moving objects. Increases performance but can create some minor visual glitches.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Editor hold to swipe",
      "0057",
      (int)"Editor option. When swipe is not enabled and in edit mode, holding down anywhere on the grid will activate sw"
           "ipe mode after a short duration. Useful when selecting objects without the need to toggle swipe mode");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Swipe cycle mode",
      "0059",
      (int)"Editor option. Tapping on the same position, in edit mode, while swipe mode is enabled will cycle through the"
           " touched objects instead of adding multiple objects to the selection. Useful if you want to select multiple o"
           "bjects that are mixed with other objects.");
    MoreOptionsLayer::addToggle(a1, (int)"Flip platformer controls", "0113", 0);
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Just, dont...",
      "0095",
      (int)"This option doesn't do anything... Well, nothing useful.");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Higher audio quality\n(req. restart)",
      "0022",
      (int)"Switches samplerate from 24000 to 44100");
    MoreOptionsLayer::addToggle(
      a1,
      (int)"Smooth fix in editor",
      "0102",
      (int)"Enables Smooth Fix while playtesting in the editor.");
    v21 = *((_DWORD *)a1 + 122) + 1;
    *((_DWORD *)a1 + 122) = v21;
    v22 = (cocos2d::CCArray *)MoreOptionsLayer::objectsForPage(a1, v21);
    v24 = cocos2d::CCSprite::createWithSpriteFrameName((cocos2d::CCSprite *)"GJ_profileButton_001.png", v23);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v24 + 80))(v24, 1061997773);
    v73 = MoreOptionsLayer::onParental;
    v74 = 0;
    v25 = (CCMenuItemSpriteExtra *)CCMenuItemSpriteExtra::create(v24, 0, a1);
    CCMenuItemSpriteExtra::setSizeMult(v25, 1.2);
    (*(void (__fastcall **)(_DWORD, CCMenuItemSpriteExtra *))(**((_DWORD **)a1 + 105) + 220))(
      *((_DWORD *)a1 + 105),
      v25);
    v26 = *(void (__fastcall **)(CCMenuItemSpriteExtra *, int *))(*(_DWORD *)v25 + 92);
    v63 = (const cocos2d::CCPoint *)*((_DWORD *)a1 + 105);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v78,
      (float)((float)(v67 * 0.5) + 200.0) - 36.0,
      (float)((float)((float)(v68 * 0.5) - 140.0) + 36.0) + 70.0);
    cocos2d::CCNode::convertToNodeSpace((cocos2d::CCNode *)v79, v63);
    v26(v25, v79);
    cocos2d::CCArray::addObject(v22, v25);
    (*(void (__fastcall **)(CCMenuItemSpriteExtra *, _DWORD))(*(_DWORD *)v25 + 164))(v25, 0);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v69,
      (float)((float)(v67 * 0.5) - 200.0) + 75.0,
      (float)((float)(v68 * 0.5) - 140.0) + 35.0);
    v28 = (cocos2d::CCObject *)cocos2d::CCLabelBMFont::create(
                                 (cocos2d::CCLabelBMFont *)"Music Offset (MS)",
                                 "bigFont.fnt",
                                 v27);
    (*(void (__fastcall **)(cocos2d::CCObject *, int))(*(_DWORD *)v28 + 80))(v28, 1053609165);
    v64 = *(void (__fastcall **)(cocos2d::CCObject *, int *))(*(_DWORD *)v28 + 92);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v78, 0.0, 25.0);
    cocos2d::CCPoint::operator+(v79, v69, v78);
    v64(v28, v79);
    (*(void (__fastcall **)(_DWORD, cocos2d::CCObject *))(**((_DWORD **)a1 + 110) + 220))(*((_DWORD *)a1 + 110), v28);
    cocos2d::CCArray::addObject(v22, v28);
    (*(void (__fastcall **)(cocos2d::CCObject *, _DWORD))(*(_DWORD *)v28 + 164))(v28, 0);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v78, 0.0, 0.0, 40.0, 40.0);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v79, (const cocos2d::CCRect *)v78);
    v29 = (cocos2d::CCObject *)cocos2d::extension::CCScale9Sprite::create("square02_small.png", v79);
    (*(void (__fastcall **)(cocos2d::CCObject *, int))(*(_DWORD *)v29 + 444))(v29, 100);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v70, 100.0, 30.0);
    (*(void (__fastcall **)(cocos2d::CCObject *, char *))(*(_DWORD *)v29 + 152))(v29, v70);
    (*(void (__fastcall **)(_DWORD, cocos2d::CCObject *, int))(**((_DWORD **)a1 + 110) + 224))(
      *((_DWORD *)a1 + 110),
      v29,
      -1);
    (*(void (__fastcall **)(cocos2d::CCObject *, char *))(*(_DWORD *)v29 + 92))(v29, v69);
    cocos2d::CCArray::addObject(v22, v29);
    (*(void (__fastcall **)(cocos2d::CCObject *, _DWORD))(*(_DWORD *)v29 + 164))(v29, 0);
    v30 = CCTextInputNode::create(
            (CCTextInputNode *)0x42C80000,
            50.0,
            COERCE_FLOAT("Offset"),
            "Thonburi",
            (const char *)&dword_18,
            (int)"bigFont.fnt");
    *((_DWORD *)a1 + 127) = v30;
    (*(void (__fastcall **)(_DWORD, int, int))(**((_DWORD **)a1 + 110) + 224))(*((_DWORD *)a1 + 110), v30, 20);
    *(_DWORD *)(*((_DWORD *)a1 + 127) + 364) = (char *)a1 + 472;
    (*(void (__fastcall **)(_DWORD, char *))(**((_DWORD **)a1 + 127) + 92))(*((_DWORD *)a1 + 127), v69);
    CCTextInputNode::setMaxLabelScale(*((CCTextInputNode **)a1 + 127), 0.7);
    CCTextInputNode::setMaxLabelWidth(*((CCTextInputNode **)a1 + 127), 200.0);
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(*((_DWORD *)a1 + 127) + 360) + 164))(
      *(_DWORD *)(*((_DWORD *)a1 + 127) + 360),
      0);
    *(_DWORD *)(*((_DWORD *)a1 + 127) + 368) = 4;
    v31 = *((_DWORD *)a1 + 127);
    sub_5D0F1C(v79, "0123456789-", v77);
    CCTextInputNode::setAllowedChars(v31, v79);
    sub_5CFDD0(v79);
    LOWORD(v66) = -21896;
    BYTE2(v66) = -16;
    CCTextInputNode::setLabelPlaceholderColor(*((_DWORD *)a1 + 127), v66);
    CCTextInputNode::setLabelPlaceholderScale(*((CCTextInputNode **)a1 + 127), 0.5);
    cocos2d::CCArray::addObject(v22, *((cocos2d::CCObject **)a1 + 127));
    v32 = (FMODAudioEngine *)(*(int (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)a1 + 127) + 164))(
                               *((_DWORD *)a1 + 127),
                               0);
    v33 = (FMODAudioEngine *)FMODAudioEngine::sharedEngine(v32);
    if ( *((_DWORD *)v33 + 80) )
    {
      v35 = *((_DWORD *)a1 + 127);
      v36 = FMODAudioEngine::sharedEngine(v33);
      v37 = (cocos2d::CCString *)cocos2d::CCString::createWithFormat(
                                   (cocos2d::CCString *)"%i",
                                   *(const char **)(v36 + 320));
      v38 = cocos2d::CCString::getCString(v37);
      sub_5D0F1C(v79, v38, v77);
      CCTextInputNode::setString(v35, v79);
      sub_5CFDD0(v79);
    }
    v39 = cocos2d::CCSprite::createWithSpriteFrameName((cocos2d::CCSprite *)"GJ_closeBtn_001.png", v34);
    v75 = MoreOptionsLayer::onClose;
    v76 = 0;
    v40 = (CCMenuItemSpriteExtra *)CCMenuItemSpriteExtra::create(v39, 0, a1);
    CCMenuItemSpriteExtra::setSizeMult(v40, 1.5);
    (*(void (__fastcall **)(_DWORD, CCMenuItemSpriteExtra *))(**((_DWORD **)a1 + 105) + 220))(
      *((_DWORD *)a1 + 105),
      v40);
    v41 = (const cocos2d::CCPoint *)*((_DWORD *)a1 + 105);
    v42 = *(void (__fastcall **)(CCMenuItemSpriteExtra *, int *))(*(_DWORD *)v40 + 92);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v77,
      (float)((float)(v67 * 0.5) - 200.0) + 5.0,
      (float)((float)(v68 * 0.5) + 140.0) - 5.0);
    cocos2d::CCNode::convertToNodeSpace((cocos2d::CCNode *)v79, v41);
    v42(v40, v79);
    v43 = v68 * 0.5;
    v45 = cocos2d::CCSprite::createWithSpriteFrameName((cocos2d::CCSprite *)"GJ_arrow_01_001.png", v44);
    v77[0] = (int)MoreOptionsLayer::onPrevPage;
    v77[1] = 0;
    v46 = CCMenuItemSpriteExtra::create(v45, 0, a1);
    *((_DWORD *)a1 + 125) = v46;
    v47 = (cocos2d::CCDirector *)(*(int (__fastcall **)(_DWORD, int))(**((_DWORD **)a1 + 105) + 220))(
                                   *((_DWORD *)a1 + 105),
                                   v46);
    v48 = *((_DWORD *)a1 + 125);
    v49 = (const cocos2d::CCPoint *)*((_DWORD *)a1 + 105);
    v50 = *(void (__fastcall **)(int, int *))(*(_DWORD *)v48 + 92);
    v51 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v47);
    v52 = COERCE_FLOAT(cocos2d::CCDirector::getScreenLeft(v51));
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v72, v52 + 20.0, v43);
    cocos2d::CCNode::convertToNodeSpace((cocos2d::CCNode *)v79, v49);
    v50(v48, v79);
    CCMenuItemSpriteExtra::setSizeMult(*((CCMenuItemSpriteExtra **)a1 + 125), 1.5);
    v54 = (cocos2d::CCSprite *)cocos2d::CCSprite::createWithSpriteFrameName(
                                 (cocos2d::CCSprite *)"GJ_arrow_01_001.png",
                                 v53);
    cocos2d::CCSprite::setFlipX(v54, 1);
    v79[0] = (int)MoreOptionsLayer::onNextPage;
    v79[1] = 0;
    v55 = CCMenuItemSpriteExtra::create(v54, 0, a1);
    *((_DWORD *)a1 + 126) = v55;
    v56 = (cocos2d::CCDirector *)(*(int (__fastcall **)(_DWORD, int))(**((_DWORD **)a1 + 105) + 220))(
                                   *((_DWORD *)a1 + 105),
                                   v55);
    v57 = *((_DWORD *)a1 + 126);
    v58 = (const cocos2d::CCPoint *)*((_DWORD *)a1 + 105);
    v59 = *(void (__fastcall **)(int, char *))(*(_DWORD *)v57 + 92);
    v60 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v56);
    v61 = COERCE_FLOAT(cocos2d::CCDirector::getScreenRight(v60));
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, v61 - 20.0, v43);
    cocos2d::CCNode::convertToNodeSpace((cocos2d::CCNode *)v72, v58);
    v59(v57, v72);
    CCMenuItemSpriteExtra::setSizeMult(*((CCMenuItemSpriteExtra **)a1 + 126), 1.5);
    MoreOptionsLayer::goToPage(a1, 0);
  }
  return v65;
}
