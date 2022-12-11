#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

static double cx = 0;
static double cy = 0;

void car(int x, int y, double speed, int acceleration) {

    cx += speed;
    if (cx >= acceleration)cx = 0;
    glutPostRedisplay();
    
    glPushMatrix();
    glTranslatef(cx, cy, 0);
    rectangle(50, 20, x, y, 255, 0, 0);
    circle(6, 6, x + 10, y, 360, 0, 0, 0);
    circle(2, 2, x + 10, y, 360, 255, 255,255);
    circle(6, 6, x + 40, y, 360, 0, 0, 0);
    circle(2, 2, x + 40, y, 360, 255, 255, 255);
    rectangle(46, 8, x + 2, y + 8, 0, 0, 0);
    
    glPopMatrix();
}