#include <GL/glut.h>

void display() {
    // Clear the screen
    glClear(GL_COLOR_BUFFER_BIT);

    // Set line thickness
    glLineWidth(5.0f); 

    // Draw the Line
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.5f, 1.0f); // Blue color
        glVertex2f(-0.8f, 0.0f);    // Start point (x, y)
        glVertex2f(0.8f, 0.0f);     // End point (x, y)
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutCreateWindow("OpenGL Line Project");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}



