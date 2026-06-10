#include <GL/glut.h>

void display() {
    // Clear the background to black
    glClear(GL_COLOR_BUFFER_BIT);

    // 1. Set the size of the dot (in pixels)
    glPointSize(15.0f); 

    // 2. Draw the Point
    glBegin(GL_POINTS);
        glColor3f(1.0f, 1.0f, 0.0f); // Yellow color
        glVertex2f(0.0f, 0.0f);      // Position at the center
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutCreateWindow("OpenGL Dot Project");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
