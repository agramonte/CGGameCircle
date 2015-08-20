#include "CGGameCircle.h"
#include "s3eGameCircle.h"

namespace gamecircle {

//-------------------------------------------------
    bool isAvailable() {
        return s3eGameCircleAvailable();
    }
    
//-------------------------------------------------
    void gamecircleInit(bool achievements, bool leaderboards){
        if (achievements && leaderboards) {
            s3eGameCircleInitialize(S3E_GAMECIRCLE_ACHIEVEMENTS|S3E_GAMECIRCLE_LEADERBOARDS);
        }else if (achievements) {
            s3eGameCircleInitialize(S3E_GAMECIRCLE_ACHIEVEMENTS);
        }else if (leaderboards) {
            s3eGameCircleInitialize(SS3E_GAMECIRCLE_LEADERBOARDS);
        }
        
        s3eGameCircleSetPopUpLocation(S3E_GAMECIRCLE_LOCATION_TOP_RIGHT);
        
    }

//-------------------------------------------------
    void gamecircleTerminate(){
        s3eGameCircleTerminate();
    }
    
    
//-------------------------------------------------
    void showLeaderBoard(const char* leaderBoardName){
        s3eGameCircleShowLeaderboardOverlay(leaderBoardName);
    }
    
//-------------------------------------------------
    void updateLeaderBoard(const char* leaderboardID, int score) {
        s3eGameCircleSubmitScore(leaderboardID, score);
    }
    
} // namespace gamecircle
