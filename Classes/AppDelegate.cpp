#include "AppDelegate.h"

#include "cocos2d.h"
#include "HelloWorldScene.h"
#include "MainMenuLayer.h"
#include "MainMenuLayerLoader.h"
#include "CCBReader.h"
#include "CCNodeLoaderLibrary.h"

USING_NS_CC;
USING_NS_CC_EXT;


AppDelegate::AppDelegate()
{

}

AppDelegate::~AppDelegate()
{
}

bool AppDelegate::applicationDidFinishLaunching()
{
    // initialize director
    CCDirector *pDirector = CCDirector::sharedDirector();
    pDirector->setOpenGLView(CCEGLView::sharedOpenGLView());

    // enable High Resource Mode(2x, such as iphone4) and maintains low resource on other devices.
    // pDirector->enableRetinaDisplay(true);

    // turn on display FPS
    pDirector->setDisplayStats(false);

    // set FPS. the default value is 1.0/60 if you don't call this
    pDirector->setAnimationInterval(1.0 / 60);

    //cocos2d::extension::CCNodeLoaderLibrary * ccNodeLoaderLibrary = cocos2d::extension::CCNodeLoaderLibrary::sharedCCNodeLoaderLibrary();
    //cocos2d::extension::CCBReader* ccbReader = new cocos2d::extension::CCBReader(ccNodeLoaderLibrary);
    //CCScene *mainMenuScene = ccbReader->createSceneWithNodeGraphFromFile("MainMenuScene.ccbi");

    //ccColor4B startColor = ccc4(178, 233, 252, 255);
    //ccColor4B endColor = ccc4(149, 199, 244, 255);
    //CCLayerGradient *gradientLayer = CCLayerGradient::create(startColor, endColor);
    //mainMenuScene->addChild(gradientLayer, -1);

    cocos2d::CCLog("Test Message");
    
    CCNodeLoaderLibrary *pNodeLibrary = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    pNodeLibrary->registerCCNodeLoader("MainMenuLayer", MainMenuLayerLoader::loader());
    
    cocos2d::extension::CCBReader *pReader = new cocos2d::extension::CCBReader(pNodeLibrary);
    pReader->autorelease();
    
    CCScene *mainScene = pReader->createSceneWithNodeGraphFromFile("MainMenuScene.ccbi");

    /* Read a ccbi file. */
    // Load the scene from the ccbi-file, setting this class as
    // the owner will cause lblTestTitle to be set by the CCBReader.
    // lblTestTitle is in the TestHeader.ccbi, which is referenced
    // from each of the test scenes.
    //CCNode * node = ccbReader->readNodeGraphFromFile("MainMenuScene.ccbi");
    
  
    
    //CCDirector::sharedDirector()->pushScene(CCTransitionFade::create(0.5f, scene, transitionColor));
    

    //((MainMenuScene*)mainMenuScene)->setKeypadEnabled(true);
    
    // create a scene. it's an autorelease object
    //CCScene *pScene = HelloWorld::scene();

    // run
    pDirector->runWithScene(mainScene);

    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground()
{
    CCDirector::sharedDirector()->pause();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground()
{
    CCDirector::sharedDirector()->resume();
    
    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
}
