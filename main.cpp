#include <GL/glut.h>
#include <math.h>
#include <windows.h>

//void initGL()
//{
//	glClearColor(0.0f,0.0f,0.0f,0.0f);
//	glClearDepth(1.0f);
//	glEnable(GL_DEPTH_TEST);
//	glDepthFunc(GL_LEQUAL);
//	glShadeModel(GL_SMOOTH);
//	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
//}

void userdraw()
{
	
    // atap rumah
    glColor3f(0.3, 0.5, 0.8);
    glBegin(GL_POLYGON);
    glVertex2i(80, 250);
    glVertex2i(450, 250);
    glVertex2i(500, 150);
    glVertex2i(150, 150);
    glEnd();
    // atap pintu
    glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(80, 250);
    glVertex2i(0, 150);
    glVertex2i(150, 150);
    glEnd();
    // atap pintu dalem
    glColor3f(0.3, 0.1, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(80, 220);
    glVertex2i(35, 165);
    glVertex2i(120, 165);
    glEnd();
    // tembok pintu
    glColor3f(0.7, 0.2, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(0, 150);
    glVertex2i(170, 150);
    glVertex2i(170, 0);
    glVertex2i(0, 0);
    glEnd();
    // pintu rumah
    glColor3f(0.7, 0.2, 0.9);
    glBegin(GL_POLYGON);
    glVertex2i(45, 75);
    glVertex2i(105, 75);
    glVertex2i(105, 0);
    glVertex2i(45, 0);
    glEnd();

    // Kunci rumah
    glColor3f(0.3, 0.7, 0.9);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(90, 40);
    glEnd();

    //Tembok rumah
    glColor3f(0.1, 0.2, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(150, 150);
    glVertex2i(500, 150);
    glVertex2i(500, 0);
    glVertex2i(150, 0);
    glEnd();
    // Jendela
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(200, 100);
    glVertex2i(450, 100);
    glVertex2i(450, 50);
    glVertex2i(200, 50);
    glEnd();

    // garis jendela
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(330, 100);
    glVertex2i(330, 50);
    glVertex2i(200, 75);
    glVertex2i(450, 75);
    glEnd();

    // keliling jendela
    glColor3f(0.5, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(200, 100);
    glVertex2i(200, 50);
    glVertex2i(195, 100);
    glVertex2i(450, 100);
    glVertex2i(450, 103);
    glVertex2i(450, 50);
    glVertex2i(195, 50);
    glVertex2i(455, 50);
    glEnd();
	
	
	glColor3f(0.0,0.0,0.5);
	glTranslated(300.0,0.0,0);
	
    // Process all OpenGL routine s as quickly as possible
    glFlush();
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);     // Clear display window
    // Set display window color to as glClearColor(R,G,B,Alpha)
    userdraw();
    glClearColor(1.0,1.0,0.0,0.0);
    // Set projection parameters.
    glMatrixMode(GL_PROJECTION);
	glutSwapBuffers();
	glLoadIdentity();
}

int main(int argc, char ** argv)
{
//    // Initialize GLUT
//    glutInit(&argc, argv);
//    // Set display mode
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    // Set top - left display window position.
//    glutInitWindowPosition(100, 100);
//    // Set display window width and height
//    glutInitWindowSize(500, 500);
//    // Create display window with the given title
//    glutCreateWindow("2D House in OpenGL ");
//    // Execute initialization procedure
//    init();
//    // Send graphics to display window
//    glutDisplayFunc(home);
//    // Display everything and wait.
//    glutMainLoop();
//    // Set 2D Transformation as gluOrtho2D(Min Width, Max Width, Min Height, Max Height)
//    gluOrtho2D(0.0, 800, 0.0, 600);

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(500,500);
	glutCreateWindow("UTS");
	gluOrtho2D(0.0, 800, 0.0, 600);
//	glutIdleFunc(display);
	glutDisplayFunc(display);
	glutMainLoop();

}

