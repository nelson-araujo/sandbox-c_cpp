#ifndef PLAYER_H // Load header if not defined already.
#define PLAYER_H // If not defined, define it with the below code.

#include "raylib.h"

class Player{
    private:

    public:
        const int WIDTH{128}; // Player width
        const int HEIGHT{128}; // Player height
        // const int BASE_SPEED{2}; // Player normal speed
        const int BASE_SPEED{200}; // Player normal speed (pixes/second)
        const int JUMP_HEIGHT{int(this->HEIGHT*1.3)}; // Player jump height
        const float UPDATE_TIME{1.0/12.0}; // Ammount of time that should pass between each animation frame. 1/12 will update the frame 12 times per second.

        // Texture sprite sheet. Must be loaded after the Window is created.
        Texture2D texture{};

        // Texture frame
        Rectangle textureFrame{
            .x{0.0},
            .y{0.0},
            .width{float(WIDTH)},
            .height{float(HEIGHT)}
        };
        
        // Position on screen
        Vector2 pos{
            .x{0},
            .y{0}
        };
        
        bool isMoving{false}; // Is the player moving?
        bool isInAir{false}; // Is the player falling?
        float runningTime{0};
        int fallVelocity{0}; // Speed the player is failling
        int speed{0}; // Speed of player, initialized in loop to BASE_SPEED
};

#endif // End if block