#ifndef PLAYER
#define PLAYER

class Player{
    private:
        
    public:
        const int WIDTH{50}; // Player width
        const int HEIGHT{80}; // Player height
        const int BASE_SPEED{2}; // Player normal speed
        const int JUMP_HEIGHT{this->HEIGHT*2}; // Player jump height
        bool isFalling{false}; // Is the player falling?
        int fallVelocity{0}; // Speed the player is failling
        int posX{0};
        int posY{0};
        int speed{1};
};
#endif