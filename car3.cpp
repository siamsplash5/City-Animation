#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

static double c3x = 1200;
static double c3y = 0;

void car3(int x, int y, double speed, int acceleration) {
    c3x -= speed;
    if (c3x<=0.0)c3x = acceleration;
    glutPostRedisplay();

    glPushMatrix();
    glTranslatef(c3x, c3y, 0);
    rectangle(50, 20, x, y, 52, 152, 219);
    circle(6, 6, x + 10, y, 360, 0, 0, 0);
    circle(2, 2, x + 10, y, 360, 255, 255, 255);
    circle(6, 6, x + 40, y, 360, 0, 0, 0);
    circle(2, 2, x + 40, y, 360, 255, 255, 255);
    rectangle(46, 8, x + 2, y + 8, 0, 0, 0);

    glPopMatrix();
}