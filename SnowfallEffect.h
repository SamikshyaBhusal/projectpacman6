// SnowfallEffect.h

#ifndef SNOWFALL_EFFECT_H
#define SNOWFALL_EFFECT_H

#include <vector>
#include <SDL.h>

struct Snowflake {
    int x, y;
    // Add more attributes if needed
};

class SnowfallEffect {
public:
    SnowfallEffect(int numFlakes, int screenWidth, int screenHeight, int fallSpeed);
    ~SnowfallEffect();

    void Update();
    void Render(SDL_Renderer* renderer);

private:
    int screenWidth;
    int screenHeight;
    int fallSpeed;

    std::vector<Snowflake> snowflakes;

    void ResetSnowflake(Snowflake& flake);
};

#endif // SNOWFALL_EFFECT_H
