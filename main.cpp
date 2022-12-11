#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>
#include "shapes.cpp"
#include "cloud.cpp"
#include "sky.cpp"
#include "green-field.cpp"
#include "tree.cpp"
#include "building.cpp"
#include "road.cpp"
#include "shadow-bg.cpp"
#include "trafic-light.cpp"
#include "lampost.cpp"
#include "car.cpp"
#include "car2.cpp"
#include "car3.cpp"
#include "car4.cpp"
#include "controller-car.cpp"

void init(void) {
    //glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
    glClearColor(0.0f, 0.0f, 0.f, 0.0f); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    glOrtho(0, 1200.0, 0, 630.0, -1.0, 1.0);
    //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}



void Draw() {
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    cloud();
    hills();
    shadow_building();
    green_field(116, 134, 52);
    building(200, 100, 15,1, 30, 200, 15, 15, 44, 62, 80, 1, 0, 1); //left -1
    building(200, 100, 13,1, 190, 190, 15, 15, 86, 101, 115, 1, 0, 1); //left-3
    building(200, 100, 11,1, 70, 160, 15, 15, 51, 83, 142, 1, 0, 1); //lef-2
    
    line(310, 160, 310, 360, 0, 0, 0);
    building(200, 100, 15,1, 310, 160, 15, 15, 51, 83, 142, 2, 0, 1); //left 4
    line(510, 160, 510, 360, 0, 0, 0);
    road();
    special_car(180, 150);
    
    tree(700, 150);
    tree(810, 176);
    tree(640, 190);
    tree(890, 150);
    tree(950, 210);

    tree(110, 145);
    tree(320, 145);
    tree(420, 145);

    lampost(50, 140);
    lampost(250, 140);
    lampost(550, 140);
    lampost(800, 140);
    
    

    traffic_light(600, 135);

    car2(20, 120, 0.8, 1500);
    
    car(20, 100, 0.5, 1200);

    car3(0, 60, 0.8, 1200);

    car4(0, 30, 0.4, 1200);

    lampost(750, 0);
    lampost(950, 0);

    
    tree(10, 0);
    tree(70, 0);
    tree(140, -5);
    tree(210, -5);
    tree(280, -10);
    tree(350, 0);
    tree(420, -12);
    tree(470, 0);
    tree(540, -12);
    tree(610, 0);
    tree(680, -5);
    tree(840, -5);
    building(300, 155, 10, 2, 1000, 0, 15, 15, 52, 73, 94, 1, 0, 1);
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1200, 630);
    glutCreateWindow("City Animation");
    init();
    glutDisplayFunc(Draw);
    glutKeyboardFunc(my_keyboard);
    glutMainLoop();
    return 0;
}
