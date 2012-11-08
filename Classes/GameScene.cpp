//
//  GameScene.cpp
//  DragonFly
//
//  Created by Paras Mendiratta on 07/11/12.
//
//

#include "GameScene.h"

USING_NS_CC;
USING_NS_CC_EXT;

GameScene::GameScene()
: mMenuItemStatusLabelBMFont(NULL)
{}

GameScene::~GameScene()
{
    CC_SAFE_RELEASE(mMenuItemStatusLabelBMFont);
}



SEL_MenuHandler GameScene::onResolveCCBCCMenuItemSelector(CCObject * pTarget, CCString * pSelectorName)
{
    //CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "playPressed", MainMenuLayer::playPressed);
    return NULL;
}

SEL_CCControlHandler GameScene::onResolveCCBCCControlSelector(CCObject * pTarget, CCString * pSelectorName)
{
    return NULL;
}

bool GameScene::onAssignCCBMemberVariable(CCObject * pTarget, CCString * pMemberVariableName, CCNode * pNode)
{
    return false;
}
