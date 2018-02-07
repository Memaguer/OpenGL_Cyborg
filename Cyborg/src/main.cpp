/*
 * Guillermo Barrientos - A01332278.
 *
 * TC3022. Computer Graphics Course.
 */

#ifdef __APPLE__
// See: http://lnx.cx/docs/opengl-in-xcode/
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <stdlib.h>
#else
#include "freeglut.h"
#endif

#include <stdio.h>
#include <math.h>
#include "cCyborg.hpp"
Cyborg * cyborg;

void init()                                 // FOR GLUT LOOP
{
    cyborg  = new Cyborg();
    glEnable(GL_DEPTH_TEST);                // Enable check for close and far objects.
    glClearColor(0.0, 0.0, 0.0, 0.0);       // Clear the color state.
    glMatrixMode(GL_MODELVIEW);             // Go to 3D mode.
    glLoadIdentity();                       // Reset 3D view matrix.
}

void display()                              // Called for each frame (about 60 times per second).
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers.
    cyborg->draw();
    glutSwapBuffers();                      // Swap the hidden and visible buffers.
}

void idle()                                 // Called when drawing is finished.
{
    cyborg ->update();
    glutPostRedisplay();                    // Display again.
}


void reshape(int x, int y)                  // Called when the window geometry changes.
{
    glMatrixMode(GL_PROJECTION);            // Go to 2D mode.
    glLoadIdentity();                       // Reset the 2D matrix.
    gluPerspective(40.0, (GLdouble)x / (GLdouble)y, 0.5, 50.0);     // Configure the camera lens aperture.
    glMatrixMode(GL_MODELVIEW);             // Go to 3D mode.
    glLoadIdentity();                       // Reset the 3D matrix.
    glViewport(0, 0, x, y);                 // Configure the camera frame dimensions.
    //gluLookAt(8.0, 0, 0.0,                // Where the camera is.
    //gluLookAt(0.0, 0.0, 8.0,
    gluLookAt(4.0, 4.0, 5.0,
              0.0, -1.0, 0.0,                // To where the camera points at.
              0.0, 1.0, 0.0);                 // "UP" vector.
    display();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);                  // Init GLUT with command line parameters.
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGB);   // Use 2 buffers (hidden and visible). Use the depth buffer. Use 3 color channels.
    glutInitWindowSize(800, 800);
    glutCreateWindow("CG CYBORG - A01332278");
    
    init();
    glutReshapeFunc(reshape);               // Reshape CALLBACK function.
    glutDisplayFunc(display);               // Display CALLBACK function.
    glutIdleFunc(idle);                     // Idle CALLBACK function.
    glutMainLoop();                         // Begin graphics program.
    return 0;                               // ANSI C requires a return value.
}


