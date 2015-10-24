#include <cmath>
#include <GL/glx.h>
 

class Paddle{

private:
    float xPos;
    float yPos;
	float width;
	float height;

public:
    void render(float xPos, float yPos, float height, float width);
    Paddle();
    ~Paddle();
};


