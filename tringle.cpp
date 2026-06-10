#include <GL/glut.h>

void display() {
    // Clear the screen
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the Triangle
    glBegin(GL_TRIANGLES);
        // Vertex 1: Top (Red)
        glColor3f(1.0f, 0.0f, 0.0f); 
        glVertex2f(0.0f, 0.6f);

        // Vertex 2: Bottom Left (Green)
        glColor3f(0.0f, 1.0f, 0.0f); 
        glVertex2f(-0.6f, -0.6f);

        // Vertex 3: Bottom Right (Blue)
        glColor3f(0.0f, 0.0f, 1.0f); 
        glVertex2f(0.6f, -0.6f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutCreateWindow("OpenGL Triangle Project");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


