#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

static double c4x = 1200;
static double c4y = 0;

void car4(int x, int y, double speed, int acceleration) {
    c4x -= speed;
    if (c4x <= 0.0)c4x = acceleration;
    glutPostRedisplay();

    glPushMatrix();
    glTranslatef(c4x, c4y, 0);
    rectangle(50, 20, x, y, 175, 122, 197);
    circle(6, 6, x + 10, y, 360, 0, 0, 0);
    circle(2, 2, x + 10, y, 360, 255, 255, 255);
    circle(6, 6, x + 40, y, 360, 0, 0, 0);
    circle(2, 2, x + 40, y, 360, 255, 255, 255);
    rectangle(46, 8, x + 2, y + 8, 0, 0, 0);

    glPopMatrix();
}