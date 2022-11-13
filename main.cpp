#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>
# define PI 3.14159265358979323846

void init()
{
    glClearColor(0.1,0.4,0.1,0);
    glMatrixMode(GL_PROJECTION);
}



//house body
void quad(){

    glPushMatrix();
    glBegin(GL_QUADS);

    glColor3f(0.58, 0.02, 0.37);

    glVertex2f(0,0);
    glVertex2f(3,0);
    glVertex2f(3,3);
    glVertex2f(0,3);

    glEnd();
    glPopMatrix();
}
//door
void quad2(){

    glPushMatrix();
    glBegin(GL_QUADS);

    glColor3f(0,0,1);

    glVertex2f(0,0);
    glVertex2f(3,0);
    glVertex2f(3,3);
    glVertex2f(0,3);

    glEnd();
    glPopMatrix();
}

//roof
void triangle(){


    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glColor3f(0.82, 0.09, 0.75);

    glVertex2f(0,0);
    glVertex2f(3,0);
    glVertex2f(1.5,3);

    glEnd();
    glPopMatrix();


}

//background hill
void hill(){

    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glColor3f(0.29,0.32,0.32);
    glVertex2f(0,0);
    glVertex2f(4,0);
    glVertex2f(2,4);


    glEnd();
    glPopMatrix();


}
//compleating house
void house(){

    glPushMatrix();
    glTranslatef(0,0,0);
    glScalef(1.2,1.2,0);
    quad();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,3.6,0);
    glScalef(1.2,1.2,0);
    triangle();
    glPopMatrix();

    //door
    glPushMatrix();
    glTranslatef(1.3,0,0);
    glScalef(.3,0.8,0);
    quad2();
    glPopMatrix();



}
//tree
void tree(){

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.38, 0.74, 0.04);
    glVertex2f(1,2.3);
    glVertex2f(4,2.3);
    glVertex2f(2.5,3.5);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.38, 0.74, 0.04);
    glVertex2f(1.3,2.8);
    glVertex2f(3.7,2.8);
    glVertex2f(2.5,4);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.38, 0.74, 0.04);
    glVertex2f(1.5,3.2);
    glVertex2f(3.5,3.2);
    glVertex2f(2.5,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.3,0.0);
    glVertex2f(2.2,1);
    glVertex2f(2.7,1);
    glVertex2f(2.7,2.3);
    glVertex2f(2.2,2.3);
    glEnd();
    glPopMatrix();

}

//sky
void sky()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.07,0.51,0.73);
    glVertex2f(0,2);
    glVertex2f(4,2);
    glVertex2f(4,0);
    glVertex2f(0,0);

    glEnd();
    glPopMatrix();

}
//sun
void drawSun() {
	int i;
	glColor3f(1,1,0);
	for (i = 0; i < 500; i++) {
		glRotatef( 360 / 13, 0, 0, 1 );
		glBegin(GL_LINES);
		glVertex2f(0, 0);
		glVertex2f(0.75f, 0);
		glEnd();
	}

	glColor3f(0,0,0);
}
//road
void road(){

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.6,0.5,0.02);
    glVertex2f(4,0);
    glVertex2f(2.3,0);
    glVertex2f(4,6);
    glVertex2f(4.7,6);

    glEnd();
    glPopMatrix();

}
//cloud
void cloud(){

    glPushMatrix();

    glTranslatef(0,0,0);
    glColor3d(255,255,255);
    glTranslatef(1.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(3.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPopMatrix();



}
//bush



void drawBush()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.03, 0.66, 0.14);
    glVertex3f(0,0,0);
    glVertex3f(0.3,0,0);
    glVertex3f(0.4,0.6,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.03, 0.66, 0.14);
    glVertex3f(0.2,0,0);
    glVertex3f(0.5,0,0);
    glVertex3f(0.55,0.4,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.03, 0.66, 0.14);
    glVertex3f(-0.1,0,0);
    glVertex3f(0.1,0,0);
    glVertex3f(0.2,0.5,0);
    glEnd();

}

void straw(){
//straw///
//polygon 1
    glBegin(GL_POLYGON);
    glColor3ub(189,183,107);
    glVertex2f(2.5f,-3.0f);
    glVertex2f(2.0f,-1.0f);
    glVertex2f(-3.0f,-1.0f);
    glVertex2f(-3.5f,-3.0f);

    glEnd();

 //polygon 2
    glBegin(GL_POLYGON);
    glColor3ub(189,183,107);
    glVertex2f(2.0f,-1.0f);
    glVertex2f(1.0f,0.5f);
    glVertex2f(-2.0f,0.5f);
    glVertex2f(-3.0f,-1.0f);

    glEnd();
//polygon 3
    glBegin(GL_POLYGON);
    glColor3ub(189,183,107);
    glVertex2f(1.0f,0.5f);
    glVertex2f(0.0f,1.0f);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-2.0f,0.5f);

    glEnd();

///triangle///

    glBegin(GL_POLYGON);
    glColor3ub(189,183,107);
    glVertex2f(0.0f,1.0f);
    glVertex2f(-0.5f,1.2f);
    glVertex2f(-1.0f,1.0f);

    glEnd();

//polygon

    glBegin(GL_POLYGON);
    glColor3ub(189,183,107);
    glVertex2f(-0.4f,1.1f);
    glVertex2f(-0.4f,1.5f);
    glVertex2f(-0.6f,1.5f);
    glVertex2f(-0.6f,1.1f);

    glEnd();

}





//animation 1
GLfloat cloudX=-10.0f;
GLfloat cloudA=0.05f;

void cloudMove(int value){

    if(cloudX > 30)
        cloudX = -15;
        cloudX += cloudA;
        glutPostRedisplay();
        glutTimerFunc(50,cloudMove,0);

}

//animation 2
GLfloat cloudX1=-5.0f;
GLfloat cloudA1=0.05f;

void cloudMove1(int value){

    if(cloudX1 > 30)
        cloudX1 = -15;
        cloudX1 += cloudA;
        glutPostRedisplay();
        glutTimerFunc(25,cloudMove1,0);

}

//animation 3
GLfloat cloudX2=-5.0f;
GLfloat cloudA2=0.05f;

void cloudMove2(int value){

    if(cloudX2 > 30)
        cloudX2 = -15;
        cloudX2 += cloudA2;
        glutPostRedisplay();
        glutTimerFunc(50,cloudMove2,0);

}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluOrtho2D(-12, 12, -12, 12);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(13,3,0);
    glScalef(-7,7,0);
    sky();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-10,9.8,0);
    glScalef(2.5,3,0);
    drawSun();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(5,2,0);
    glScalef(2,2,0);
    hill();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(2.5,3,0);
    glScalef(1.5,1.5,0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-4.5,3,0);
    glScalef(2,2,0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-5.5,3,0);
    glScalef(1.7,1.7,0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-14,3,0);
    glScalef(3,1.7,0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-8.5,-5,0);
    glScalef(1,1,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-9.5,-5.5,0);
    glScalef(1,1,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4,-2.5,0);
    glScalef(1,1,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4,-2.5,0);
    glScalef(1,1,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3,-1.5,0);
    glScalef(1,1,0);
    tree();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(6,-1.5,0);
    glScalef(1,1,0);
    tree();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-8,-8,0);
    glScalef(0.6,0.6,0);
    house();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-10,-5.5,0);
    glScalef(0.6,0.6,0);
    house();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(-5,-21,0);
    glScalef(1.5,4,0);
    road();
    glPopMatrix();

    //cloud 1
    glPushMatrix();
    glTranslatef(cloudX,-1.5,0);
    glScalef(1,1.5,0);
    cloud();
    glPopMatrix();

    //cloud 2
    glPushMatrix();
    glTranslatef(cloudX1,0,0);
    glScalef(1,1.5,0);
    cloud();
    glPopMatrix();

    //cloud 3
    glPushMatrix();
    glTranslatef(cloudX2,1.5,0);
    glScalef(1,1.5,0);
    cloud();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(6,1.5,0);
    glScalef(1,1.5,0);
    cloud();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(5.5,-5,0);
    glScalef(0.8,1,0);
    straw();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(6.5,-8,0);
    glScalef(2,2,0);
    drawBush();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3,-8,0);
    glScalef(2,2,0);
    drawBush();
    glPopMatrix();






    glFlush();
    glutSwapBuffers();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900,550);
    glutInitWindowPosition(100,150);
    glutCreateWindow ("Mahe-2014751141");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(5,cloudMove,0);//first animation
    glutTimerFunc(5,cloudMove1,0);//second animation
    glutTimerFunc(5,cloudMove2,0);//trird animation
    glutMainLoop();
    return 0;
}
