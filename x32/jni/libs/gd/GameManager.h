#pragma once

#include <cocos2d.h>

class GameManager {
	
	public:
    GameManager();
    virtual ~GameManager();

    static GameManager* sharedState( );

    bool getGameVariable( const char* g_var );
    void setGameVariable( const char* g_var, bool toggle );

    bool hasRatingPower( );
    void setHasRatingPower( int ratingPower );

    void addGameAnimation( int animationID, int animationType, float duration, std::string animationName, std::string animationColorName );

    cocos2d::ccColor3B colorForIdx( int id ); 
};
