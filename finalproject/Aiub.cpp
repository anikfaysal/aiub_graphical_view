#include <stdlib.h>
#include<GL/glut.h>
#include <GL/gl.h>
#include<math.h>
#include <iostream>
using namespace std;

float s = 0.0;
float o = 0.0;
float a = -100.0;
float b = -50.0;
float _angle1 = 30.0f;
float speed = 3.0f;
int l;

void DrawPixel(GLint cx, GLint cy)
{
	glBegin(GL_POINTS);
	glVertex2i(cx, cy);
	glEnd();
}

void PlotPixels(GLint h, GLint k, GLint x, GLint y)
{
	DrawPixel(x + h, y + k);
	DrawPixel(-x + h, y + k);
	DrawPixel(x + h, -y + k);
	DrawPixel(-x + h, -y + k);
	DrawPixel(y + h, x + k);
	DrawPixel(-y + h, x + k);
	DrawPixel(y + h, -x + k);
	DrawPixel(-y + h, -x + k);
}

void circle(GLint h, GLint k, GLint r)
{
	GLint d = 1 - r, x = 0, y = r;
	while (y>x)
	{
		PlotPixels(h, k, x, y);
		if (d<0) d += 2 * x + 3;
		else
		{
			d += 2 * (x - y) + 5;
			--y;
		}
		++x;
	}
	PlotPixels(h, k, x, y);
}

///car

void idle() {
   glutPostRedisplay();   // Post a re-paint request to activate display()
}

void carmove()
  {
      glMatrixMode(GL_MODELVIEW);
      glPushMatrix();

   // glRotatef(_angle1, 0.0, 0.0, 0.0);
    glTranslatef(0.0f,_angle1,0.0f);
    glColor3d(1,0,0);
///

         int carX = 600, carY = 80;

         for (int i =0;i<1;i++)
         {
         ///tire

         glPointSize(10.0);
         glBegin(GL_POINTS);
         glColor3f(0,0,0);
         glVertex2f(carX - 15, carY + 16);
         glVertex2f(carX + 15, carY + 16);
         glVertex2f(carX - 15, carY - 16);
         glVertex2f(carX + 15, carY - 16);
         glEnd();

         ///middle body

         glBegin(GL_QUADS);
         glColor3f(1,1,0.4);
         glVertex2f(carX - 15, carY + 35);
         glVertex2f(carX - 15, carY - 35);
         glVertex2f(carX + 15, carY - 35);
         glVertex2f(carX + 15, carY + 35);
         glEnd();

        ///windshild upper

         glBegin(GL_QUADS);
         glColor3f(0,0,0);//middle body
         glVertex2f(carX - 13, carY + 35);
         glVertex2f(carX + 13, carY + 35);
         glVertex2f(carX + 7, carY + 25);
         glVertex2f(carX - 7, carY + 25);
         glEnd();

         ///up body

         glBegin(GL_POLYGON);
         glColor3f(1,1,0.4);
         glVertex2f(carX - 15, carY + 35);
         glVertex2f(carX + 15, carY + 35);
         glVertex2f(carX + 10, carY + 45);
         glVertex2f(carX - 10, carY + 45);
         glEnd();

         ///up defination

         glBegin(GL_POLYGON);///up body
         glColor3f(1,0.9,0);
         glVertex2f(carX - 10, carY + 20);
         glVertex2f(carX - 10, carY -20);
         glVertex2f(carX + 10, carY - 20);
         glVertex2f(carX + 10, carY + 20);
         glEnd();

         ///windshild lower

         glBegin(GL_QUADS);
         glColor3f(0,0,0);///middle body
         glVertex2f(carX - 13, carY - 35);
         glVertex2f(carX + 13, carY - 35);
         glVertex2f(carX + 7, carY - 25);
         glVertex2f(carX - 7, carY - 25);
         glEnd();

         ///down body

         glBegin(GL_QUADS);
         glColor3f(1,1,0.4);
         glVertex2f(carX - 15, carY - 35);
         glVertex2f(carX + 15, carY - 35);
         glVertex2f(carX + 10, carY - 45);
         glVertex2f(carX - 10, carY - 45);
         glEnd();

         carY=carY+100;
     }
     glPopMatrix();
  }
///car end

///Carvalue update

void update(int value)
{

    if(speed>1 || speed<0)
    {
        speed = 0.0f;
    }
	_angle1 += speed;
	if (_angle1 > 330) {
		_angle1 -= 330;
	}

    ///Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}

void specialKeys(int key, int x, int y) {
    switch (key) {
      case GLUT_KEY_UP:
          speed+=0.05f;
          update(0);
          break;
      case GLUT_KEY_DOWN:
          speed-=0.5f;
          update(0);
          break;
    }
}


///



void myDisplay();
void myInit();


int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1200, 700);
glutInitWindowPosition (90,50);
glutCreateWindow ("Aiub Campus");
glutDisplayFunc(myDisplay);
glutIdleFunc(idle);
glutSpecialFunc(specialKeys);
glutTimerFunc(20, update, 0);
myInit ();
glutMainLoop();
}



void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 0.0, 0.0);


//Sky------------


    glBegin(GL_POLYGON);
	glColor3f(0.52734375, 0.8046878, 0.99765625);
	glVertex2f(0, 700);
	glVertex2f(1200, 700);
    glVertex2f(1200, 450);
	glVertex2f(0, 450);
	glEnd();

    //campus globe
    for (l = 0; l <= 100; l++)
    {
        glColor3f(0.501961, 0.501961, 0.501961);
        circle(850+s, 550-o, l);
    }

//House1....


glBegin(GL_POLYGON);
	glColor3f(0.79, 0.227, 0.043);
	glVertex2f(50, 550);
	glVertex2f(550, 550);
    glVertex2f(550, 450);
	glVertex2f(50, 450);
	glEnd();

	//Gate......

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(550, 550);
	glVertex2f(650, 550);
    glVertex2f(650, 450);
	glVertex2f(550, 450);
	glEnd();

	//House2....


glBegin(GL_POLYGON);
	glColor3f(0.79, 0.227, 0.043);
	glVertex2f(650, 550);
	glVertex2f(1150, 550);
    glVertex2f(1150, 450);
	glVertex2f(650, 450);
	glEnd();

	//Roof1....


glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(30, 590);
	glVertex2f(1150, 590);
    glVertex2f(1170, 550);
	glVertex2f(50, 550);
	glEnd();

	//------------------------------

	glBegin(GL_POLYGON);
	glColor3f(0.925, 0.4447, 0.125);
	glVertex2f(30, 590);
	glVertex2f(50, 550);
    glVertex2f(50, 450);
	glVertex2f(20, 450);
	glVertex2f(20, 550);
	glEnd();

	//window---------------


glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.68);
	glVertex2f(80, 520);
	glVertex2f(110, 520);
    glVertex2f(110, 490);
	glVertex2f(80, 490);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.68);
	glVertex2f(170, 520);
	glVertex2f(200, 520);
    glVertex2f(200, 490);
	glVertex2f(170, 490);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.68);
	glVertex2f(260, 520);
	glVertex2f(290, 520);
    glVertex2f(290, 490);
	glVertex2f(260, 490);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.68);
	glVertex2f(350, 520);
	glVertex2f(380, 520);
    glVertex2f(380, 490);
	glVertex2f(350, 490);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.68);
	glVertex2f(440, 520);
	glVertex2f(470, 520);
    glVertex2f(470, 490);
	glVertex2f(440, 490);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.68);
	glVertex2f(680, 520);
	glVertex2f(710, 520);
    glVertex2f(710, 490);
	glVertex2f(680, 490);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.68);
	glVertex2f(770, 520);
	glVertex2f(800, 520);
    glVertex2f(800, 490);
	glVertex2f(770, 490);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.68);
	glVertex2f(860, 520);
	glVertex2f(890, 520);
    glVertex2f(890, 490);
	glVertex2f(860, 490);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.68);
	glVertex2f(950, 520);
	glVertex2f(980, 520);
    glVertex2f(980, 490);
	glVertex2f(950, 490);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.68);
	glVertex2f(1040, 520);
	glVertex2f(1070, 520);
    glVertex2f(1070, 490);
	glVertex2f(1040, 490);
	glEnd();


	//Road FRom Gate......

	glBegin(GL_POLYGON);
	glColor3f(0.47,0.23,0.0);
	glVertex2f(550, 450);
	glVertex2f(650, 450);
    glVertex2f(650, 150);
	glVertex2f(550, 150);
	glEnd();

	//Main Road ......

	glBegin(GL_POLYGON);
	glColor3f(0.215, 0.215, 0.215);
	glVertex2f(0, 150);
	glVertex2f(1200, 150);
    glVertex2f(1200, 0);
	glVertex2f(0, 0);
	glEnd();

	//Footpath1 ......

	glBegin(GL_POLYGON);
	glColor3f(0.925, 0.4447, 0.125);
	glVertex2f(0, 180);
	glVertex2f(550, 180);
	glVertex2f(550, 150);
	glVertex2f(0, 150);

	glEnd();

	//Footpath2 ......

	glBegin(GL_POLYGON);
	glColor3f(0.925, 0.4447, 0.125);
	glVertex2f(650, 180);
	glVertex2f(1200, 180);
	glVertex2f(1200, 150);
	glVertex2f(650, 150);

	glEnd();

	//Field1 ......

	glBegin(GL_POLYGON);
	glColor3f(0.89, 0.89, 0.89);
	glVertex2f(0, 450);
	glVertex2f(550, 450);
	glVertex2f(550, 180);
	glVertex2f(0, 180);




	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.89, 0.89, 0.89);
	glVertex2f(650, 450);
	glVertex2f(1200, 450);
	glVertex2f(1200, 180);
	glVertex2f(650, 180);

	glEnd();







		///SUN///
		for (l = 0; l <= 35; l++)
		{
			glColor3f(1.0, 1, 0.0);
			circle(1050+s, 650-o, l);
		}




//.7, 0.7, 0.8

carmove();


glFlush ();
}


void myInit (void)
{
glClearColor(1.0,1.0,1.0,0.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(10.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1200.0, 0.0, 700.0);
}

