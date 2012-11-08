//
//  GameSceneLoader.h
//  DragonFly
//
//  Created by Paras Mendiratta on 07/11/12.
//
//

#ifndef DragonFly_GameSceneLoader_h
#define DragonFly_GameSceneLoader_h

#include "GameScene.h"

/* Forward declaration. */
class CCBReader;

class GameSceneLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(GameSceneLoader, loader);
    
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(GameScene);
};

#endif
