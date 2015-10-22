#include <cmath>
#include <GL/glx.h>

class Ball{
public :
    float x, y, rot;
    void createBall(int k, int r, int h);
};

void Ball::createBall(int k, int r, int h){
    glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < 180; i++){
        x = r * cos(i) - h;
        y = r * sin(i) + k;
        glVertex3f(x + k, y - h, 0);

        x = r * cos(i + 0.1) - h;
        y = r * sin(i + 0.1) + k;
        glVertex3f(x + k, y - h, 0);
    }
    glEnd();
}
