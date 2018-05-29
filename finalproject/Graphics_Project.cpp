#include<stdio.h>
#include <stdlib.h>
#include<GL/glut.h>
#include <GL/gl.h>
#include <iostream>
#include<math.h>
#include<cstring>

float _angle1 = 30.0f;
float _angle2 = 0.2f;
float speed = 3.0f;
float speed2 = 3.0f;
int displaycampus = 1;

///
float s = 0.0;
float o = 0.0;
float a = -100.0;
float b = -50.0;
int l;

void idle() {
   glutPostRedisplay();   // Post a re-paint request to activate display()
}


void annex1()
{
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(0, 0);
	glVertex2f(80, 20 );
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(95, 270);
	glVertex2f(15, 250);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(80, 20);
	glVertex2f(180, 0 );
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(180, 250);
	glVertex2f(95, 270);
	glEnd();

    ///side wall

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0, 0);
	glVertex2f(180, 0 );
	glVertex2f(80, 20);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(70, 5);
	glVertex2f(90, 5 );
	glVertex2f(90, 10);
	glVertex2f(70, 10);
	glEnd();

	///middle annex 1////

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0, 280);
	glVertex2f(15, 250 );
	glVertex2f(95, 270);
	glVertex2f(180, 250);
	glVertex2f(165, 280);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0, 280);
	glVertex2f(165, 280 );
	glVertex2f(165, 400);
	glVertex2f(7, 400);
	glEnd();

	///last annex 1 ///

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(15, 400);
	glVertex2f(160, 400 );
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(170, 680);
	glVertex2f(100, 700);
	glVertex2f(25, 680);
	glEnd();

     ///first side wall annex 1

    glBegin(GL_POLYGON);
	glColor3f(0.79, 0.0, 0.0);
	glVertex2f(180, 0);
	glVertex2f(210, 0 );
	glVertex2f(210, 240);
	glVertex2f(180, 250);
	glEnd();

	/// last side wall annex 1

	glBegin(GL_POLYGON);
	glColor3f(0.79, 0.0, 0.0);
	glVertex2f(160, 400);
	glVertex2f(187, 390 );
	glVertex2f(195, 670);
	glVertex2f(170, 680);
	glEnd();

	/// window 1st then 2nd

    int x=0,y=0,j=0,k=0;

	for(int i=0;i<8;i++)
	{
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2f(190, 10+x);
	glVertex2f(200, 10+x );
	glVertex2f(200, 25+x);
	glVertex2f(190, 25+x);
	glEnd();
	x=x+30;
	}
	for(int i=0;i<3;i++)
	{
    glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(169, 410+y);
	glVertex2f(178, 410+y);
	glVertex2f(178, 425+y);
	glVertex2f(169, 425+y);
	glEnd();

	y=y+30;
	}
	for(int i=0;i<3;i++)
	{
    glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(172, 500+j);
	glVertex2f(181, 500+j);
	glVertex2f(181, 515+j);
	glVertex2f(172, 515+j);
	glEnd();
	j=j+30;
    }
    for(int i=0;i<3;i++)
	{
    glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(175, 590+k);
	glVertex2f(184, 590+k);
	glVertex2f(184, 605+k);
	glVertex2f(175, 605+k);
	glEnd();
	k=k+30;
    }

	/// road  of annex1 front

    glBegin(GL_POLYGON);
	glColor3f(0.215, 0.215, 0.215);
	glVertex2f(210, 0);
	glVertex2f(240, 0 );
	glVertex2f(240, 230);
	glVertex2f(210, 230);
	glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(210, 230);
    glVertex2f(240, 230);
    glVertex2f(220, 390);
	glVertex2f(230, 660);
	glVertex2f(195, 670);
	glVertex2f(187, 390);
    glEnd();

}
void annex23()
{
   ///annex 2

    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(170, 680);
	glVertex2f(290, 740 );
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(305, 950);
	glVertex2f(175, 930);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(290, 740);
	glVertex2f(430, 680);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(430, 930);
	glVertex2f(305, 950);
	glEnd();

	/// annex 2 front

    glBegin(GL_POLYGON);
	glColor3f(0.34, 0.329, 0.313);
	glVertex2f(290, 740 );
	glVertex2f(168, 680);
	glVertex2f(230, 650);
	glVertex2f(430, 650);
	glVertex2f(430, 680);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.254, 0.254, 0.494);
	glVertex2f(176, 675);
	glVertex2f(194, 669);
	glVertex2f(430, 669);
	glVertex2f(430, 675);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.470, 0.2823, 0.2823);
	glVertex2f(194, 669);
	glVertex2f(230, 650);
	glVertex2f(430, 650);
	glVertex2f(430, 669);
	glEnd();

	///road infront of annex 2

	glBegin(GL_POLYGON);
	glColor3f(0.215, 0.215, 0.215);
	glVertex2f(225, 650);
	glVertex2f(225, 600);
	glVertex2f(430, 600);
	glVertex2f(430, 650);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.215, 0.215, 0.215);
	glVertex2f(380, 600);
	glVertex2f(380, 450);
	glVertex2f(430, 450);
	glVertex2f(430, 600);
	glEnd();

	///infront of gate road

	glBegin(GL_POLYGON);
	glColor3f(0.215, 0.215, 0.215);
	glVertex2f(430, 450);
	glVertex2f(855, 450);
	glVertex2f(855, 500);
	glVertex2f(430, 500);
	glEnd();

	/// infrontt of 4 to 5 and 6

	glBegin(GL_POLYGON);
	glColor3f(0.215, 0.215, 0.215);
	glVertex2f(805, 0);
	glVertex2f(855, 0);
	glVertex2f(855, 500);
	glVertex2f(805, 500);
	glEnd();

	/// in front of Dim from annex 6 to Canteen

    glBegin(GL_POLYGON);
	glColor3f(0.215, 0.215, 0.215);
	glVertex2f(240, 0);
	glVertex2f(805, 0);
	glVertex2f(805, 50);
	glVertex2f(240, 50);
	glEnd();

	/// annex 2 & 3 bridge

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(430, 580);
	glVertex2f(520, 640);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(520, 770);
	glVertex2f(430, 730);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(520, 640);
	glVertex2f(610, 580);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(610, 730);
	glVertex2f(520, 770);
	glEnd();

	///gate

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(445, 590);
	glVertex2f(595, 590);
	glVertex2f(580, 600);
	glVertex2f(460, 600);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(445, 560);
	glVertex2f(450, 560);
	glVertex2f(450, 590);
	glVertex2f(445, 590);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(590, 560);
	glVertex2f(595, 560);
	glVertex2f(595, 590);
	glVertex2f(590, 590);
	glEnd();

	/// annex 3

    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(610, 680);
	glVertex2f(730, 730 );
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(745, 950);
	glVertex2f(610, 930);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(730, 730);
	glVertex2f(870, 680);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(870, 930);
	glVertex2f(745, 950);
	glEnd();

	/// Stairs annex 2 & 3

    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(430+190, 630-30);
	glVertex2f(520+215, 660-30);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(520+215, 770-30);
	glVertex2f(430+190, 730-30);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(520+215, 660-30);
	glVertex2f(610+250, 630-30);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(610+250, 730-30);
	glVertex2f(520+215, 770-30);
	glEnd();

	///wall of stairs

	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.0, 0.0);
	glVertex2f(735, 630);
	glVertex2f(620, 600);
	glVertex2f(620, 520);
	glVertex2f(860, 520);
	glVertex2f(860, 600);
	glEnd();

	///window gap

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(660, 600);
	glVertex2f(660, 580);
	glVertex2f(725, 580);
	glVertex2f(725, 600);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(660, 575);
	glVertex2f(660, 555);
	glVertex2f(725, 555);
	glVertex2f(725, 575);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(735, 600);
	glVertex2f(735, 580);
	glVertex2f(800, 580);
	glVertex2f(800, 600);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(735, 575);
	glVertex2f(735, 555);
	glVertex2f(800, 555);
	glVertex2f(800, 575);
	glEnd();


}
void annex456()
{
    ///annex 4

    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(860, 675);
	glVertex2f(870, 600);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(1355, 600);
	glVertex2f(1345, 675);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(870, 600);
	glVertex2f(860, 520);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(1345, 520);
	glVertex2f(1355, 600);
	glEnd();

	/// annex 4 wall

	glBegin(GL_POLYGON);
	glColor3f(0.79, 0.0, 0.0);
	glVertex2f(860, 520);
	glVertex2f(860, 440);
	glVertex2f(1345, 440);
	glVertex2f(1345, 520);
	glEnd();

	/// wall divider

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(860, 485);
	glVertex2f(860, 475);
	glVertex2f(1345, 475);
	glVertex2f(1345, 485);
	glEnd();

	/// Window 2nd floor

    int x=0;

	for(int i=0;i<9;i++)
	{
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2f(1070+x, 500);
	glVertex2f(1070+x, 490);
	glVertex2f(1080+x, 490);
	glVertex2f(1080+x, 500);
	glEnd();
	x=x+30;
	}

	/// Window 1st floor

    int y=0;

	for(int i=0;i<9;i++)
	{
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2f(1070+y, 460);
	glVertex2f(1070+y, 450);
	glVertex2f(1080+y, 450);
	glVertex2f(1080+y, 460);
	glEnd();
	y=y+30;
	}

	/// bridge ground from up

	glBegin(GL_POLYGON);
	glColor3f(0.34, 0.329, 0.313);
	glVertex2f(970, 440);
	glVertex2f(880, 380);
	glVertex2f(1060, 380);
	glEnd();

	/// annex 5

    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(860, 385);
	glVertex2f(870, 310);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(1355, 310);
	glVertex2f(1345, 385);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(870, 310);
	glVertex2f(860, 230);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(1345, 230);
	glVertex2f(1355, 310);
	glEnd();

	/// annex 5 wall

	glBegin(GL_POLYGON);
	glColor3f(0.79, 0.0, 0.0);
	glVertex2f(860, 230);
	glVertex2f(860, 190);
	glVertex2f(1345, 190);
	glVertex2f(1345, 230);
	glEnd();

	/// annex 5 window

    int z=0;

	for(int i=0;i<15;i++)
	{
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2f(870+40+z, 215);
	glVertex2f(870+40+z, 205);
	glVertex2f(880+40+z, 205);
	glVertex2f(880+40+z, 215);
	glEnd();
	z=z+30;
	}

	/// annex 6

    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(860, 190);
	glVertex2f(870, 115);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(1355, 115);
	glVertex2f(1345, 190);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(870, 115);
	glVertex2f(860, 35);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(1345, 35);
	glVertex2f(1355, 115);
	glEnd();

	///annex 5 6 joiner

    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(860, 180);
	glVertex2f(880, 190);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(880, 250);
	glVertex2f(860, 230);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(880, 190);
	glVertex2f(900, 180);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(900, 230);
	glVertex2f(880, 250);
	glEnd();

	/// annex 6 wall

	glBegin(GL_POLYGON);
	glColor3f(0.79, 0.0, 0.0);
	glVertex2f(860, 35);
	glVertex2f(860, 0);
	glVertex2f(1345, 0);
	glVertex2f(1345, 35);
	glEnd();


    /// wall divider

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(860, 20);
	glVertex2f(860, 15);
	glVertex2f(1345, 15);
	glVertex2f(1345, 20);
	glEnd();

    /// Window 2nd floor annex 6

    int k=0;

	for(int i=0;i<17;i++)
	{
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2f(870+k, 30);
	glVertex2f(870+k, 25);
	glVertex2f(880+k, 25);
	glVertex2f(880+k, 30);
	glEnd();
	k=k+30;
	}

	/// Window 1st floor annex 6

    int m=0;

	for(int i=0;i<17;i++)
	{
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2f(870+m, 10);
	glVertex2f(870+m, 5);
	glVertex2f(880+m, 5);
	glVertex2f(880+m, 10);
	glEnd();
	m=m+30;
	}

    /// annex 4 5 bridge

    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(880, 380);
	glVertex2f(970, 440);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(970, 570);
	glVertex2f(880, 530);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.258, 0.0);
	glVertex2f(970, 440);
	glVertex2f(1060, 380);
	glColor3f(0.0, 0.58, 0.0);
	glVertex2f(1060, 530);
	glVertex2f(970, 570);
	glEnd();


}

void waterfall()
{
    ///Border up
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(300, 400);
	glVertex2f(300, 410);
	glVertex2f(750, 410);
	glVertex2f(750, 400);
	glEnd();

	///Border Right

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(740, 400);
	glVertex2f(740, 100);
	glVertex2f(750, 100);
	glVertex2f(750, 400);
	glEnd();

	///Border Down

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(740, 100);
	glVertex2f(300, 100);
	glVertex2f(300, 110);
	glVertex2f(740, 110);
	glEnd();

	///Border left

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(300, 110);
	glVertex2f(300, 410);
	glVertex2f(310, 410);
	glVertex2f(310, 110);
	glEnd();

	///Lamp left

	int x=0;

	for(int i=0;i<2;i++)
    {
        ///Bottom

	glBegin(GL_POLYGON);
	glColor3f(0.21,0.21,0.21);
	glVertex2f(330, 350-x);
	glVertex2f(320, 340-x);
	glVertex2f(340, 340-x);
	glVertex2f(330, 350-x);
	glEnd();

    /// stand 3

    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f (330,350-x);
    glVertex2f (330,375-x);
    glEnd();

    ///Light

    glBegin(GL_POLYGON);
	glColor3f(0.98,0.83,0.84);
	glVertex2f(320, 375-x);
	glVertex2f(340, 375-x);
	glVertex2f(340, 390-x);
	glVertex2f(320, 390-x);
	glEnd();

	 ///Light Cap

    glBegin(GL_POLYGON);
	glColor3f(0.21,0.21,0.21);
	glVertex2f(310, 390-x);
	glVertex2f(350, 390-x);
	glVertex2f(330, 400-x);
	glEnd();

	x+=150;
    }

    ///Light Right

    int z=0;

    for(int i=0;i<2;i++)
    {
    ///Bottom

	glBegin(GL_POLYGON);
	glColor3f(0.21,0.21,0.21);
	glVertex2f(330+380, 350-z);
	glVertex2f(320+380, 340-z);
	glVertex2f(340+380, 340-z);
	glVertex2f(330+380, 350-z);
	glEnd();

    /// stand 3

    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f (330+380,350-z);
    glVertex2f (330+380,375-z);
    glEnd();

    ///Light

    glBegin(GL_POLYGON);
	glColor3f(0.98,0.83,0.84);
	glVertex2f(320+380, 375-z);
	glVertex2f(340+380, 375-z);
	glVertex2f(340+380, 390-z);
	glVertex2f(320+380, 390-z);
	glEnd();

	 ///Light Cap

    glBegin(GL_POLYGON);
	glColor3f(0.21,0.21,0.21);
	glVertex2f(310+380, 390-z);
	glVertex2f(350+380, 390-z);
	glVertex2f(330+380, 400-z);
	glEnd();

	z+=150;

    }

    ///Light Top

    int y=130;

    for(int i=0;i<2;i++)
    {
    ///Bottom

	glBegin(GL_POLYGON);
	glColor3f(0.21,0.21,0.21);
	glVertex2f(330+y, 350+40);
	glVertex2f(320+y, 340+40);
	glVertex2f(340+y, 340+40);
	glVertex2f(330+y, 350+40);
	glEnd();

    /// stand 3

    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f (330+y,350+40);
    glVertex2f (330+y,375+40);
    glEnd();

    ///Light

    glBegin(GL_POLYGON);
	glColor3f(0.98,0.83,0.84);
	glVertex2f(320+y, 375+40);
	glVertex2f(340+y, 375+40);
	glVertex2f(340+y, 390+40);
	glVertex2f(320+y, 390+40);
	glEnd();

	 ///Light Cap

    glBegin(GL_POLYGON);
	glColor3f(0.21,0.21,0.21);
	glVertex2f(310+y, 390+40);
	glVertex2f(350+y, 390+40);
	glVertex2f(330+y, 400+40);
	glEnd();

	y+=150;

    }

    ///Light Down

    int k=130;

    for(int i=0;i<2;i++)
    {
    ///Bottom

	glBegin(GL_POLYGON);
	glColor3f(0.21,0.21,0.21);
	glVertex2f(330+k, 350-220);
	glVertex2f(320+k, 340-220);
	glVertex2f(340+k, 340-220);
	glVertex2f(330+k, 350-220);
	glEnd();

    /// stand 3

    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f (330+k,350-220);
    glVertex2f (330+k,375-220);
    glEnd();

    ///Light

    glBegin(GL_POLYGON);
	glColor3f(0.98,0.83,0.84);
	glVertex2f(320+k, 375-220);
	glVertex2f(340+k, 375-220);
	glVertex2f(340+k, 390-220);
	glVertex2f(320+k, 390-220);
	glEnd();

	 ///Light Cap

    glBegin(GL_POLYGON);
	glColor3f(0.21,0.21,0.21);
	glVertex2f(310+k, 390-220);
	glVertex2f(350+k, 390-220);
	glVertex2f(330+k, 400-220);
	glEnd();

	k+=150;

    }

    ///Tree Up

    int m=0;

    for(int i=0;i<3;i++)
    {
    ///Stand or root
    glColor3f(0.38f,0.19f,0.0f);
    glLineWidth(8);
    glBegin(GL_LINES);
    glVertex2f(380+m,350);
    glVertex2f(380+m,380);
    glEnd();

    ///bunch Low

    glColor3f(0.0,0.43,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(360+m,380);
    glVertex2f(400+m,380);
    glVertex2f(390+m,390);
    glVertex2f(370+m,390);
    glEnd();

    ///bunch middle

    glColor3f(0.0,0.43,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(360+m,390);
    glVertex2f(400+m,390);
    glVertex2f(390+m,400);
    glVertex2f(370+m,400);
    glEnd();

    ///bunch top

    glColor3f(0.0,0.43,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(360+m,400);
    glVertex2f(400+m,400);
    glVertex2f(380+m,415);
    glEnd();

    m+=140;
    }

    ///Tree Down

    int n=0;

    for(int i=0;i<3;i++)
    {
    ///Stand or root
    glColor3f(0.38f,0.19f,0.0f);
    glLineWidth(8);
    glBegin(GL_LINES);
    glVertex2f(380+n,350-220);
    glVertex2f(380+n,380-220);
    glEnd();

    ///bunch Low

    glColor3f(0.0,0.43,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(360+n,380-220);
    glVertex2f(400+n,380-220);
    glVertex2f(390+n,390-220);
    glVertex2f(370+n,390-220);
    glEnd();

    ///bunch middle

    glColor3f(0.0,0.43,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(360+n,390-220);
    glVertex2f(400+n,390-220);
    glVertex2f(390+n,400-220);
    glVertex2f(370+n,400-220);
    glEnd();

    ///bunch top

    glColor3f(0.0,0.43,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(360+n,400-220);
    glVertex2f(400+n,400-220);
    glVertex2f(380+n,415-220);
    glEnd();

    n+=140;
    }

    ///Tree Right

    ///Stand or root
    glColor3f(0.38f,0.19f,0.0f);
    glLineWidth(8);
    glBegin(GL_LINES);
    glVertex2f(380+320,350-100);
    glVertex2f(380+320,380-100);
    glEnd();

    ///bunch Low

    glColor3f(0.0,0.43,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(360+320,380-100);
    glVertex2f(400+320,380-100);
    glVertex2f(390+320,390-100);
    glVertex2f(370+320,390-100);
    glEnd();

    ///bunch middle

    glColor3f(0.0,0.43,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(360+320,390-100);
    glVertex2f(400+320,390-100);
    glVertex2f(390+320,400-100);
    glVertex2f(370+320,400-100);
    glEnd();

    ///bunch top

    glColor3f(0.0,0.43,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(360+320,400-100);
    glVertex2f(400+320,400-100);
    glVertex2f(380+320,415-100);
    glEnd();

    ///Tree Left

    ///Stand or root
    glColor3f(0.38f,0.19f,0.0f);
    glLineWidth(8);
    glBegin(GL_LINES);
    glVertex2f(380-30,350-100);
    glVertex2f(380-30,380-100);
    glEnd();

    ///bunch Low

    glColor3f(0.0,0.43,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(360-30,380-100);
    glVertex2f(400-30,380-100);
    glVertex2f(390-30,390-100);
    glVertex2f(370-30,390-100);
    glEnd();

    ///bunch middle

    glColor3f(0.0,0.43,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(360-30,390-100);
    glVertex2f(400-30,390-100);
    glVertex2f(390-30,400-100);
    glVertex2f(370-30,400-100);
    glEnd();

    ///bunch top

    glColor3f(0.0,0.43,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(360-30,400-100);
    glVertex2f(400-30,400-100);
    glVertex2f(380-30,415-100);
    glEnd();

    ///WaterFall





}

void car()
 {
         int carX = 780, carY = 100;

         for (int i =0;i<4;i++)
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

     ///car parked in front of annex 2

      int carX1 = 350, carY1 = 460;

         for (int i =0;i<2;i++)
         {
         ///tire

         glPointSize(10.0);
         glBegin(GL_POINTS);
         glColor3f(0,0,0);
         glVertex2f(carX1 - 15, carY1 + 16);
         glVertex2f(carX1 + 15, carY1 + 16);
         glVertex2f(carX1 - 15, carY1 - 16);
         glVertex2f(carX1 + 15, carY1 - 16);
         glEnd();

         ///middle body

         glBegin(GL_QUADS);
         glColor3f(1,1,0.4);
         glVertex2f(carX1 - 15, carY1 + 35);
         glVertex2f(carX1 - 15, carY1 - 35);
         glVertex2f(carX1 + 15, carY1 - 35);
         glVertex2f(carX1 + 15, carY1 + 35);
         glEnd();

        ///windshild upper

         glBegin(GL_QUADS);
         glColor3f(0,0,0);//middle body
         glVertex2f(carX1 - 13, carY1 + 35);
         glVertex2f(carX1 + 13, carY1 + 35);
         glVertex2f(carX1 + 7, carY1 + 25);
         glVertex2f(carX1 - 7, carY1 + 25);
         glEnd();

         ///up body

         glBegin(GL_POLYGON);
         glColor3f(1,1,0.4);
         glVertex2f(carX1 - 15, carY1 + 35);
         glVertex2f(carX1 + 15, carY1 + 35);
         glVertex2f(carX1 + 10, carY1 + 45);
         glVertex2f(carX1 - 10, carY1 + 45);
         glEnd();

         ///up defination

         glBegin(GL_POLYGON);///up body
         glColor3f(1,0.9,0);
         glVertex2f(carX1 - 10, carY1 + 20);
         glVertex2f(carX1 - 10, carY1 -20);
         glVertex2f(carX1 + 10, carY1 - 20);
         glVertex2f(carX1 + 10, carY1 + 20);
         glEnd();

         ///windshild lower

         glBegin(GL_QUADS);
         glColor3f(0,0,0);///middle body
         glVertex2f(carX1 - 13, carY1 - 35);
         glVertex2f(carX1 + 13, carY1 - 35);
         glVertex2f(carX1 + 7, carY1 - 25);
         glVertex2f(carX1 - 7, carY1 - 25);
         glEnd();

         ///down body

         glBegin(GL_QUADS);
         glColor3f(1,1,0.4);
         glVertex2f(carX1 - 15, carY1 - 35);
         glVertex2f(carX1 + 15, carY1 - 35);
         glVertex2f(carX1 + 10, carY1 - 45);
         glVertex2f(carX1 - 10, carY1 - 45);
         glEnd();

         carY1=carY1+100;
     }

  }
  void carmove()
  {
      glMatrixMode(GL_MODELVIEW);
      glPushMatrix();

    glTranslatef(0.0f,_angle1,0.0f);
    glColor3d(1,0,0);
///

         int carX = 270, carY = 80;

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

/// 2nd pic

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

void carmove1()
  {
      glMatrixMode(GL_MODELVIEW);
      glPushMatrix();

    glTranslatef(0.0f,_angle2,0.0f);
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

void myDisplay1()
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 0.0, 0.0);


//Sky------------


    glBegin(GL_POLYGON);
	glColor3f(0.52734375, 0.8046878, 0.99765625);
	glVertex2f(0, 800);
	glVertex2f(1400, 800);
    glVertex2f(1400, 450);
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
	glVertex2f(1400, 150);
    glVertex2f(1400, 0);
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
	glVertex2f(1400, 180);
	glVertex2f(1400, 150);
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
	glVertex2f(1400, 450);
	glVertex2f(1400, 180);
	glVertex2f(650, 180);

	glEnd();







		///SUN///
		for (l = 0; l <= 35; l++)
		{
			glColor3f(1.0, 1, 0.0);
			circle(1050+s, 650-o, l);
		}
}





///


  void update(int value) {


    if(speed>1 || speed<0)
    {
        speed = 0.0f;
    }
	_angle1 += speed;
	if (_angle1 > 475) {
		_angle1 -= 475;
	}

	  if(speed2>1 || speed2<0)
    {
        speed2 = 0.0f;
    }
	_angle2 += speed2;
	if (_angle2 >330) {
		_angle2 -=330;
	}
		//Tell GLUT to call update again in 25 milliseconds
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
      case GLUT_KEY_RIGHT:
          speed2+=0.05f;
          update(0);
          break;
      case GLUT_KEY_LEFT:
          speed2-=0.5f;
          update(0);
          break;
    }
}
///mouse
void mouse(int btn, int state, int x, int y)
{
	if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		exit(0);
}


///menu
void main_menu(int index)
{
	switch (index)
	{
	case 1:
		if (index == 1)
		{
			displaycampus =1;
		}
		break;

	case 2:
		if (index == 2)
		{
			displaycampus =2;
		}
		break;

	case 3:
		if (index == 3)
		{
			exit(0);
		}
		break;
	}

}

///
void myinit()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_MODELVIEW);
	gluOrtho2D(0.0, 1400.0, 0.0, 800.0);
}

void display()
{
	glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    if(displaycampus == 1)
    {
    annex1();
	annex23();
	annex456();
	waterfall();
	car();
	carmove();
    }
    else
    {


            myDisplay1();
            carmove1();

        }


	glutSwapBuffers();
}

int main(int argc, char** argv)
{
	int c_menu;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB );
	glutInitWindowSize(1400.0, 700.0);
	glutInitWindowPosition(0, 0);

	glutCreateWindow("AIUB Campus");
	glutDisplayFunc(display);
	glutSpecialFunc(specialKeys);
	glutIdleFunc(idle);
	glutTimerFunc(20, update, 0);
	glutIdleFunc(idle);
	glutMouseFunc(mouse);
	myinit();


	c_menu = glutCreateMenu(main_menu);
	glutAddMenuEntry("Aiub Campus Inside View", 1);
	glutAddMenuEntry("Aiub Campus Outside View", 2);
	glutAddMenuEntry("Exit", 3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
	return 0;
}
