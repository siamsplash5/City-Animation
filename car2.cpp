#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

static double c2x = 0;
static double c2y = 0;

void car2(int x, int y, double speed, int acceleration) {

    c2x += speed;
    if (c2x >= acceleration)c2x = 0;
    glutPostRedisplay();

    glPushMatrix();
    glTranslatef(c2x, c2y, 0);
    rectangle(50, 20, x, y, 0, 255, 0);
    circle(6, 6, x + 10, y, 360, 0, 0, 0);
    circle(2, 2, x + 10, y, 360, 255, 255, 255);
    circle(6, 6, x + 40, y, 360, 0, 0, 0);
    circle(2, 2, x + 40, y, 360, 255, 255, 255);
    rectangle(46, 8, x + 2, y + 8, 0, 0, 0);

    glPopMatrix();
}