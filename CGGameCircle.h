#ifndef __CG_GAMECIRCLE_H
#define __GAMECIRCLE_H


// tolua_begin
namespace gamecircle {

    bool isAvailable();
    void gamecircleInit(bool achievements, bool leaderboards);
    void gamecircleTerminate();
    void showLeaderBoard();
    void updateLeaderBoard(const char* leaderboardID, int score);

    
}

// tolua_end

#endif // __GAMECIRCLE_H