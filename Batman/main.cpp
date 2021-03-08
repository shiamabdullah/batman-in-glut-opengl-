#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
# define PI           3.14159265358979323846
#include<math.h>>


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display()
{
    //glClearColor(0.52f, 0.8f, 1.0f, 0.7f); // Set background color to black and opaque
    glClearColor(0.93, 0.96, 0.97, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);

	//head



    glLoadIdentity();
    glTranslatef(0,-0.4f,0);
    glScalef(1.5f,1.5f,0);

    glBegin(GL_QUADS);
    glColor3ub(249, 156, 50);
    glVertex2f(-0.1,0.4f);
    glVertex2f(-0.1,0.45f);
    glVertex2f(0.1f,0.45f);
    glVertex2f(0.1f,0.4f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(11, 27, 76);
    glVertex2f(-0.1,0.45f);
    glVertex2f(-0.1,0.6f);
    glVertex2f(0.1f,0.6f);
    glVertex2f(0.1f,0.45f);
    glEnd();

    //horn right
    glBegin(GL_QUADS);
    glColor3ub(11, 27, 76);
    glVertex2f(0.035f,0.6f);
    glVertex2f(0.035f,0.66f);
    glVertex2f(0.1f,0.66f);
    glVertex2f(0.1f,0.6f);
    glEnd();

    //left horn with gradient
    glBegin(GL_QUADS);
    glColor3ub(5, 12, 31);
    glVertex2f(-0.035,0.45f);
    glVertex2f(-0.035,0.66f);
    glVertex2f(-0.1f,0.66f);
    glVertex2f(-0.1f,0.45f);
    glEnd();

    //left horn below with gradient
    glBegin(GL_QUADS);
    glColor3ub(173, 102, 14);
    glVertex2f(-0.035,0.4f);
    glVertex2f(-0.035,0.45f);
    glVertex2f(-0.1f,0.45f);
    glVertex2f(-0.1f,0.4f);
    glEnd();



    //BODY
    //1ST BLOCK


    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-0.15,0.35f);
    glVertex2f(-0.15,0.4f);
    glVertex2f(0.15f,0.4f);
    glVertex2f(0.15f,0.35f);
    glEnd();

    //2ND BLOCK
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-0.2,0.3f);
    glVertex2f(-0.2,0.35f);
    glVertex2f(0.2f,0.35f);
    glVertex2f(0.2f,0.3f);
    glEnd();

        //gradient inside
        glBegin(GL_QUADS);
    glColor3ub(51, 51, 51);
    glVertex2f(-0.1,0.3f);
    glVertex2f(-0.1,0.35f);
    glVertex2f(0.1f,0.35f);
    glVertex2f(0.1f,0.3f);
    glEnd();

    //3rd block
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-0.15,0.3f);
    glVertex2f(-0.15,0.25f);
    glVertex2f(0.15f,0.25f);
    glVertex2f(0.15f,0.3f);
    glEnd();

    //cinderblocks aside 3rd block
    glBegin(GL_QUADS);
    glColor3ub(249, 156, 50);
    glVertex2f(-0.2f,0.3f);
    glVertex2f(-0.2f,0.25f);
    glVertex2f(-0.15f,0.25f);
    glVertex2f(-0.15f,0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(249, 156, 50);
    glVertex2f(0.2f,0.3f);
    glVertex2f(0.2f,0.25f);
    glVertex2f(0.15f,0.25f);
    glVertex2f(0.15f,0.3f);
    glEnd();


     //4th block yellow
    glBegin(GL_QUADS);
    glColor3ub(253, 238, 33);
    glVertex2f(-0.15,0.25f);
    glVertex2f(-0.15,0.2f);
    glVertex2f(0.15f,0.2f);
    glVertex2f(0.15f,0.25f);
    glEnd();

    //cinderblocks aside 4th block
    glBegin(GL_QUADS);
    glColor3ub(11, 27, 76);
    glVertex2f(-0.2f,0.25f);
    glVertex2f(-0.2f,0.2f);
    glVertex2f(-0.15f,0.2f);
    glVertex2f(-0.15f,0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.2f,0.25f);
    glVertex2f(0.2f,0.2f);
    glVertex2f(0.15f,0.2f);
    glVertex2f(0.15f,0.25f);
    glEnd();


     //5th block black
    glBegin(GL_QUADS);
    glColor3ub(5, 12, 31);
    glVertex2f(-0.2,0.2f);
    glVertex2f(-0.2,0.05f);
    glVertex2f(0.2f,0.05f);
    glVertex2f(0.2f,0.2f);
    glEnd();


     //6th block over black
    glBegin(GL_QUADS);
    glColor3ub(11, 27, 76);
    glVertex2f(-0.1,0.2f);
    glVertex2f(-0.1,0.15f);
    glVertex2f(0.15f,0.15f);
    glVertex2f(0.15f,0.2f);
    glEnd();


     //7th block over black
    glBegin(GL_QUADS);
    glColor3ub(11, 27, 76);
    glVertex2f(-0.1,0.15f);
    glVertex2f(-0.1,0.1f);
    glVertex2f(0.1f,0.1f);
    glVertex2f(0.1f,0.15f);
    glEnd();


    //left leg
    //1st portion
    glBegin(GL_QUADS);
    glColor3ub(51, 51, 51);
    glVertex2f(-0.1,0.15f);
    glVertex2f(-0.1,0);
    glVertex2f(-0.15f,0);
    glVertex2f(-0.15f,0.15f);
    glEnd();

    //shoe
    glBegin(GL_QUADS);
    glColor3ub(5, 12, 31);
    glVertex2f(-0.1,0);
    glVertex2f(-0.1,-0.05f);
    glVertex2f(-0.15f,-0.05f);
    glVertex2f(-0.15f,0);
    glEnd();


    //2nd portion
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-0.05,0.1f);
    glVertex2f(-0.05,0);
    glVertex2f(-0.1f,0);
    glVertex2f(-0.1f,0.1f);
    glEnd();

    //shoe
    glBegin(GL_QUADS);
    glColor3ub(11, 27, 76);
    glVertex2f(-0.05,0);
    glVertex2f(-0.05,-0.05f);
    glVertex2f(-0.1f,-0.05f);
    glVertex2f(-0.1f,0);
    glEnd();

    //right leg
    //1st portion
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(0.1,0.15f);
    glVertex2f(0.1,0);
    glVertex2f(0.15f,0);
    glVertex2f(0.15f,0.15f);
    glEnd();

    //shoe
    glBegin(GL_QUADS);
    glColor3ub(11, 27, 76);
    glVertex2f(0.1,0);
    glVertex2f(0.1,-0.05f);
    glVertex2f(0.15f,-0.05f);
    glVertex2f(0.15f,0);
    glEnd();


    //2nd portion
    glBegin(GL_QUADS);
    glColor3ub(51, 51, 51);
    glVertex2f(0.05,0.1f);
    glVertex2f(0.05,0);
    glVertex2f(0.1f,0);
    glVertex2f(0.1f,0.1f);
    glEnd();

    //shoe
    glBegin(GL_QUADS);
    glColor3ub(5, 12, 31);
    glVertex2f(0.05,0);
    glVertex2f(0.05,-0.05f);
    glVertex2f(0.1f,-0.05f);
    glVertex2f(0.1f,0);
    glEnd();








	glFlush();  // Render now

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
    glutInitWindowSize(800, 800);
    glutCreateWindow("Batman"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutIdleFunc(Idle);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
