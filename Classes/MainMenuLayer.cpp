//
//  MainMenuLayer.cpp
//  DragonFly
//
//  Created by Paras Mendiratta on 07/11/12.
//
//



#include "MainMenuLayer.h"
#include "GameSceneLoader.h"

USING_NS_CC;
USING_NS_CC_EXT;


MainMenuLayer::MainMenuLayer()
{
    
}

MainMenuLayer::~MainMenuLayer()
{
    CC_SAFE_RELEASE(mMenuItemStatusLabelBMFont);
}

void MainMenuLayer::onNodeLoaded(cocos2d::CCNode * pNode,  cocos2d::extension::CCNodeLoader * pNodeLoader)
{

}

SEL_MenuHandler MainMenuLayer::onResolveCCBCCMenuItemSelector(CCObject * pTarget, CCString * pSelectorName)
{
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "playPressed", MainMenuLayer::playPressed);
    return NULL;
}

SEL_CCControlHandler MainMenuLayer::onResolveCCBCCControlSelector(CCObject * pTarget, CCString * pSelectorName)
{
    return NULL;
}

bool MainMenuLayer::onAssignCCBMemberVariable(CCObject * pTarget, CCString * pMemberVariableName, CCNode * pNode)
{
    return false;
}

void MainMenuLayer::playPressed(cocos2d::CCObject *pSender)
{
    std::cout << "Play Button is pressed.\n";
    
    CCNodeLoaderLibrary *pNodeLibrary = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    pNodeLibrary->registerCCNodeLoader("GameScene", GameSceneLoader::loader());
    
    cocos2d::extension::CCBReader *pReader = new cocos2d::extension::CCBReader(pNodeLibrary);
    pReader->autorelease();
    
    CCScene *gameScene = pReader->createSceneWithNodeGraphFromFile("GameScene.ccbi");
    
    CCDirector *pDirector = CCDirector::sharedDirector();
    
    pDirector->replaceScene(gameScene);
    
}

