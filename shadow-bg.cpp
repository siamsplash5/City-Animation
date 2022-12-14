#include <stdio.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

void shadow_building() {
    for (int i = 0; i < 3; i++) {
        building(170 + i * 20, 60 - i * 20, 0, 0, 300 + i * 20, 200, 15, 15, 33, 47, 60, 1, 0, 0);
    }

    for (int i = 0; i < 3; i++) {
        building(75 + i * 20, 60 - i * 20, 0, 0, 510 + i * 20, 200, 15, 15, 40, 55, 71, 1, 0, 0);
    }

    for (int i = 0; i < 4; i++) {
        building(175 - i * 20, 60 + i * 20, 0, 0, 810 - i * 20, 200, 15, 15, 40, 55, 71, 1, 0, 0);
    }

    for (int i = 0; i < 4; i++) {
        building(125 - i * 10, 30 + i * 10, 0, 0, 910 - i * 10, 200, 15, 15, 40, 54, 80, 1, 0, 0);
    }
}

void hills() {
    triangle(250, 180, -100, 130, 21, 67, 96);
    triangle(250, 180, -50, 130, 21, 67, 96);
    triangle(250, 180, 50, 130, 21, 67, 96);
    triangle(250, 180, 90, 130, 21, 67, 96);
    triangle(250, 180, 130, 100, 21, 67, 96);
    triangle(250, 180, 180, 110, 21, 67, 96);
    triangle(250, 180, 190, 130, 21, 67, 96);
    triangle(250, 180, 240, 90, 21, 67, 96);
    triangle(250, 180, 280, 70, 21, 67, 96);
    triangle(250, 180, 300, 120, 21, 67, 96);
    triangle(250, 180, 360, 125, 21, 67, 96);
    triangle(250, 180, 470, 118, 21, 67, 96);
    triangle(250, 180, 530, 127, 21, 67, 96);
    triangle(250, 180, 700, 139, 21, 67, 96);
    triangle(250, 180, 880, 95, 21, 67, 96);
    triangle(250, 180, 920, 134, 21, 67, 96);
    triangle(250, 180, 1070, 124, 21, 67, 96);
}