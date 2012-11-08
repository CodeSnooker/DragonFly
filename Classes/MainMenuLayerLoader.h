//
//  MainMenuLayerLoader.h
//  DragonFly
//
//  Created by Paras Mendiratta on 07/11/12.
//
//

#ifndef DragonFly_MainMenuLayerLoader_h
#define DragonFly_MainMenuLayerLoader_h

#include "MainMenuLayer.h"

/* Forward declaration. */
class CCBReader;

class MainMenuLayerLoader : public cocos2d::extension::CCLayerLoader
{
    public:
        CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(MainMenuLayerLoader, loader);
        
    protected:
        CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(MainMenuLayer);
};


#endif
