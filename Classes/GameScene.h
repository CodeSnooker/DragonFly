//
//  GameScene.h
//  DragonFly
//
//  Created by Paras Mendiratta on 07/11/12.
//
//

#ifndef __DragonFly__GameScene__
#define __DragonFly__GameScene__

#include "cocos2d.h"
#include "cocos-ext.h"

class GameScene :   public cocos2d::CCLayer,
public cocos2d::extension::CCBSelectorResolver,
public cocos2d::extension::CCBMemberVariableAssigner
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(GameScene, create);
    
    GameScene();
    virtual ~GameScene();
    
    virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuItemSelector(cocos2d::CCObject * pTarget, cocos2d::CCString * pSelectorName);
    virtual cocos2d::extension::SEL_CCControlHandler onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, cocos2d::CCString * pSelectorName);
    virtual bool onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, cocos2d::CCString * pMemberVariableName, cocos2d::CCNode * pNode);
    
    cocos2d::CCLabelTTF *scoreLabel;
    
private:
    cocos2d::CCLabelBMFont *mMenuItemStatusLabelBMFont;
};


#endif /* defined(__DragonFly__GameScene__) */
