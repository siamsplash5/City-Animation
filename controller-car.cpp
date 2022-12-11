#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

static double mcx = 0;
static double mcy = 0;

void transformation() {
    mcx += 0.8;
    if (mcx >= 1300)mcx = 0;
    glutPostRedisplay();
}

void my_keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'f':
        mcx += 10;
        glutPostRedisplay();
        break;
    case 's':
        mcx -= 10;
        glutPostRedisplay();
        break;
    case 'e':
        mcy += 10;
        glutPostRedisplay();
        break;
    case 'd':
        mcy -= 10;
        glutPostRedisplay();
        break;
    case 'k':
        glutIdleFunc(transformation);
        break;
    case 'b':
        glutIdleFunc(NULL);
        break;
    default:
        break;
    }
}



void special_car(int x, int y) {
    glPushMatrix();
    glTranslatef(mcx, mcy, 0);
    rectangle(50, 20, x, y, 88, 214, 141);
    circle(6, 6, x + 10, y, 360, 0, 0, 0);
    circle(2, 2, x + 10, y, 360, 255, 255, 255);
    circle(6, 6, x + 40, y, 360, 0, 0, 0);
    circle(2, 2, x + 40, y, 360, 255, 255, 255);
    rectangle(46, 8, x + 2, y + 8, 0, 0, 0);
    glPopMatrix();
}