//
//  MainMenuLayer.h
//  DragonFly
//
//  Created by Paras Mendiratta on 07/11/12.
//
//

#ifndef __DragonFly__MainMenuLayer__
#define __DragonFly__MainMenuLayer__

#include "cocos2d.h"
#include "cocos-ext.h"

class MainMenuLayer :
  public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener
{
    public:
	  CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(MainMenuLayer, create);
    
        MainMenuLayer();
        virtual ~MainMenuLayer();

        virtual void onNodeLoaded(cocos2d::CCNode * pNode, cocos2d::extension::CCNodeLoader * pNodeLoader);
        virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuItemSelector(cocos2d::CCObject * pTarget, cocos2d::CCString * pSelectorName);
        virtual cocos2d::extension::SEL_CCControlHandler onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, cocos2d::CCString * pSelectorName);
        virtual bool onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, cocos2d::CCString * pMemberVariableName, cocos2d::CCNode * pNode);
    


        void playPressed(cocos2d::CCObject * pSender);
    
private:
    cocos2d::CCLabelBMFont * mMenuItemStatusLabelBMFont;
};

#endif /* defined(__DragonFly__MainMenuLayer__) */
