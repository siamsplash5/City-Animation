#include <stdio.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

static int lightx = 0, lighty = 0;

void traffic_light(int x, int y) {

    lightx++;
    if (lightx >= 600)lightx = 0;
    
    glutPostRedisplay();
    
    rectangle(12, 5, x, y, 0, 0, 0);
    rectangle(5, 60, x + 3, y, 0, 0, 0);
    rectangle(12, 35, x, y + 48, 0, 0, 0);
    if (lightx<=300) {
        circle(5, 5, x + 6, y + 60, 360, 255, 0, 0);
        circle(5, 5, x + 6, y + 75, 360, 0, 255, 0);
    }
    else {
        circle(5, 5, x + 6, y + 60, 360, 0, 255, 0);
        circle(5, 5, x + 6, y + 75, 360, 255, 0, 0);
    }
}