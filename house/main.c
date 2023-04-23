

#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<math.h>
#define PI 3.14
void campfire(){
glBegin(GL_POLYGON);
		glColor3f(1.0,0.0,0.0);
		glVertex2f(900,200);
		glVertex2f(890,250);
		glVertex2f(910,300);
        glVertex2f(930,250);
        glVertex2f(940,200);
        glEnd();
        glFlush();

        glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(900,220);
		glVertex2f(910,210);
		glVertex2f(910,160);
        glVertex2f(900,160);
        //glVertex2f(940,200);
        glEnd();
        glFlush();

        glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(920,220);
		glVertex2f(930,210);
		glVertex2f(922,160);
        glVertex2f(930,160);
        //glVertex2f(940,200);
        glEnd();
         glFlush();

          glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(910,220);
		glVertex2f(920,210);
		glVertex2f(910,160);
        glVertex2f(920,160);
        //glVertex2f(940,200);
        glEnd();

         glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(920,220);
		glVertex2f(930,210);
		glVertex2f(920,160);
        glVertex2f(930,160);
        //glVertex2f(940,200);
        glEnd();


         glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(930,220);
		glVertex2f(940,210);
		glVertex2f(930,160);
        glVertex2f(940,160);
        //glVertex2f(940,200);
        glEnd();

        glFlush();
        glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(890,220);
		glVertex2f(900,210);
		glVertex2f(890,160);
        glVertex2f(900,160);
        //glVertex2f(940,200);
        glEnd();

        glFlush();


        glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(940,220);
		glVertex2f(950,210);
		glVertex2f(940,160);
        glVertex2f(950,160);
        //glVertex2f(940,200);
        glEnd();
        glFlush();




        }
void head(float x, float y, float radius)
{
    glColor3f(1.0,0.8,0.4);
    int i;
    int triangleAmount = 500;


    float twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y +1.5*(radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glFlush();
}
void personinside(float x,float y)
{
    glColor3f(1.0,0.8,0.4);


    //head
    head(x,y,8.7);

    //body
    glBegin(GL_LINES);
    glLineWidth(5);
    glColor3f(1,0,0);
    glVertex2f(x,y-10);
    glVertex2f(x,y-40);
    //legs
    glColor3f(0.4,0.2,0.4);

    glVertex2f(x,y-40);
    glVertex2f(x-10,y-50.8);

    glVertex2f(x,y-40);
    glVertex2f(x+10,y-50.8);

    //hands
    glColor3f(1.0,0.8,0.4);
    glVertex2f(x,y-20);
    glVertex2f(x-10.8,y-30);

    glVertex2f(x,y-20);
    glVertex2f(x+10.8,y-30);

    glEnd();
    glFlush();

}
#define PI 3.14
char sup[]="Super";
char del[]="Deluxe";
char no[]="Normal";
int ua1 = 1000, ua2 = 900, da1 = 200, da2 = 100;//x values for up and down arrows
int lefY = 170, rigY = 120;				//y values for left and right labels
float boatX = 0;
float boatY = 0;
//variable declarations
int boatStatus = 0, horseStatus = 0;					//start program flag
/*int ua1 = 1000, ua2 = 900, da1 = 200, da2 = 100;//x values for up and down arrows
int lefY = 170, rigY = 120;	*/			//y values for left and right labels
//initial color values during day
float R = 1, G = 1, B = 1;				//sky gradient	: white
float r = 1, g = 1, b = 0;				//sky color		: yellow
float r1 = 1.0, g1 = 0.5, b1 = 0.0;		//celestial obj	: orange
float r2 = 7.0, g2 = 0.0, b2 = 0.0;		//down arrow	: red
float r3 = 0.0, g3 = 0.0, b3 = 1.0;		//up arrow		: blue
float r4 = 0.2, g4 = 0.5, b4 = 0.8;		//river			: light blue
float r5 = 0.0, g5 = 0.7, b5 = 0.0;		//land			: bright green
float r6 = 0.0, g6 = 0.6, b6 = 0.0;		//tree			: light green
float r7 = 0.0, g7 = 0.0, b7 = 0.0;		//instruction   : black

void draw_Boat();

int pntX1 = 1100, pntY1 = 650, radius = 40; //circle variables
void draw_Boat()
{
	glBegin(GL_POLYGON);		//boat
	glColor3f(0.9, 0.5, 0.1);
	glVertex2i(250, 20);
	glVertex2i(220, 100);
	glVertex2i(550, 100);
	glVertex2i(500, 20);
	glEnd();

	glBegin(GL_POLYGON);		//man body
	glColor3f(1, 1, 1);
	glVertex2i(270, 100);
	glVertex2i(330, 100);
	glVertex2i(310, 150);
	glVertex2i(290, 150);
	glVertex2i(310, 200);
	glVertex2i(270, 200);
	glVertex2i(270, 100);
	glEnd();

	glBegin(GL_POLYGON);	//face
	glColor3f(1.2, 0.5, 0.4);
	glVertex2i(275, 200);
	glVertex2i(295, 200);
	glVertex2i(295, 220);
	glVertex2i(300, 220);
	glVertex2i(295, 250);
	glVertex2i(275, 250);
	glVertex2i(275, 200);
	glEnd();

	glBegin(GL_POLYGON);	//hair
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(295, 250);
	glVertex2i(300, 270);
	glVertex2i(275, 260);
	glVertex2i(275, 250);
	glVertex2i(295, 250);
	glEnd();

	glBegin(GL_POLYGON);	//oar
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(310, 150);
	glVertex2i(250, 0);
	glVertex2i(270, 0);
	glVertex2i(310, 160);
	glVertex2i(310, 150);
	glEnd();

}


void draw_house(int, int,float,float,float);
void draw_scene();
void plot(int x, int y)
{
	//plot point
	glColor3f(r1, g1, b1);
	glPointSize(2.0);
	glBegin(GL_POINTS);
	glVertex2i(x + pntX1, y + pntY1);
	glEnd();
	//draw a line from centre to plotted point
	glColor3f(r1, g1, b1);
	glLineWidth(2);
	glBegin(GL_LINES);
	glVertex2i(pntX1, pntY1);
	glVertex2i(x + pntX1, y + pntY1);
	glEnd();
}

void midPointCircleAlgo()
{
	int x = 0;
	int y = radius;
	float decision = 5 / 4 - radius;
	plot(x, y);

	while (y > x)
	{
		if (decision < 0)
		{
			x++;
			decision += 2 * x + 1;
		}
		else
		{
			y--;
			x++;
			decision += 2 * (x - y) + 1;
		}
		plot(x, y);
		plot(x, -y);
		plot(-x, y);
		plot(-x, -y);
		plot(y, x);
		plot(-y, x);
		plot(y, -x);
		plot(-y, -x);
	}
}
//
//
//methods defining coordinate values for objects
//
//
void draw_scene()
{

	glBegin(GL_POLYGON);	//Lower Sky
	glColor3f(r, g, b);
	glVertex2i(0, 600);
	glVertex2i(1200, 600);
	glColor3f(R, G, B);
	glVertex2i(1200, 50);
	glVertex2i(0, 50);
	glEnd();

	glBegin(GL_POLYGON);	 //Upper Sky
	glColor3f(r, g, b);
	glVertex2i(0, 600);
	glVertex2i(1200, 600);
	glVertex2i(1200, 750);
	glVertex2i(0, 750);
	glEnd();

	glBegin(GL_POLYGON);	//Land
	glColor3f(r5, g5, b5);
	glVertex2i(0, 100);
	glVertex2i(0, 280);
	glVertex2i(200, 330);
	glVertex2i(400, 360);
	glVertex2i(600, 330);
	glVertex2i(800, 320);
	glVertex2i(1000, 300);

	glColor3f(0.7, 0.2, 0.0);//Sand on ground
	glVertex2i(1200, 270);
	glVertex2i(1200, 100);
	glEnd();

	glBegin(GL_POLYGON);	// River
	glColor3f(r4, g4, b4);
	glVertex2i(0, 150);
	glVertex2i(1200, 150);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();

	campfire();
}



void draw_house(int x, int y, float red, float green, float blue)
{
	//red is intensity of red color

	glBegin(GL_POLYGON);	//House
	glColor3f(red, green, blue);
	glVertex2i(0 + x, 0 + y);
	glVertex2i(120 + x, 0 + y);
	glVertex2i(120 + x, 116 + y);
	glVertex2i(0 + x, 116 + y);
	glEnd();

	glBegin(GL_POLYGON);	//Roof
	glColor3f(0.9, 0, 0);
	glVertex2i(x - 10, 116 + y);
	glVertex2i(x + 130, 116 + y);
	glVertex2i(x + 100, 156 + y);
	glVertex2i(x + 20, 156 + y);
	glEnd();

	glBegin(GL_POLYGON);	 //Door
	glColor3f(1, 0.7, 0.2);
	glVertex2i(x + 40, y + 0);
	glVertex2i(x + 80, y + 0);
	glVertex2i(x + 80, y + 75);
	glVertex2i(x + 40, y + 75);
	glEnd();
}


//void plot(int, int);
//void midPointCircleAlgo();
void watch()
{
    glBegin(GL_POLYGON);
    {
        glColor3f(1.0,0.0,0.0);
      glVertex2f(950,230);
       glVertex2f(960,230);
       glVertex2f(960,630);
       glVertex2f(950,630);
       glEnd();
       glFlush();


    }
     glBegin(GL_POLYGON);
    {
        glColor3f(1.0,0.0,0.0);
      glVertex2f(965,240);
       glVertex2f(975,240);
       glVertex2f(975,510);
       glVertex2f(965,510);
       glEnd();
       glFlush();


    }
    //watch roof
    glBegin(GL_POLYGON);
    {
        glColor3f(1.0,0.0,0.0);
      glVertex2f(950,630);
       glVertex2f(1060,630);
       glVertex2f(1005,690);
      // glVertex2f(1050,630);
       glEnd();
       glFlush();


    }

    glBegin(GL_POLYGON);
    {
        glColor3f(1.0,0.0,0.0);
      glVertex2f(1050,230);
       glVertex2f(1060,230);
       glVertex2f(1060,630);
       glVertex2f(1050,630);
       glEnd();
       glFlush();


    }
     glBegin(GL_POLYGON);
    {
        glColor3f(1.0,0.0,0.0);
      glVertex2f(1035,240);
       glVertex2f(1045,240);
       glVertex2f(1045,510);
       glVertex2f(1035,510);
       glEnd();
       glFlush();


    }
     glBegin(GL_LINES);
    {
        glColor3f(1.0,0.0,0.0);
       glVertex2f(985,210);
       //glVertex2f(960,210);
       //glVertex2f(960,510);
       glVertex2f(985,510);
       glEnd();
       glFlush();
       //glEnd();
       //glFlush();


    }
     glBegin(GL_LINES);
    {
        glColor3f(1.0,0.0,0.0);
       glVertex2f(985,229);
       //glVertex2f(960,210);
       //glVertex2f(960,510);
       glVertex2f(1025,229);

       glVertex2f(985,259);
       //glVertex2f(960,210);
       //glVertex2f(960,510);
       glVertex2f(1025,259);

       glVertex2f(985,279);
       //glVertex2f(960,210);
       //glVertex2f(960,510);
       glVertex2f(1025,279);

        glVertex2f(985,299);
       //glVertex2f(960,210);
       //glVertex2f(960,510);
       glVertex2f(1025,299);



       glVertex2f(985,329);
       //glVertex2f(960,210);
       //glVertex2f(960,510);
       glVertex2f(1025,329);

       glVertex2f(985,359);
       //glVertex2f(960,210);
       //glVertex2f(960,510);
       glVertex2f(1025,359);

       glVertex2f(985,399);
       //glVertex2f(960,210);
       //glVertex2f(960,510);
       glVertex2f(1025,399);


       glVertex2f(985,419);
       //glVertex2f(960,210);
       //glVertex2f(960,510);
       glVertex2f(1025,419);


       glVertex2f(985,439);
       //glVertex2f(960,210);
       //glVertex2f(960,510);
       glVertex2f(1025,439);


       glVertex2f(985,459);
       //glVertex2f(960,210);
       //glVertex2f(960,510);
       glVertex2f(1025,459);

        glVertex2f(985,479);
       //glVertex2f(960,210);
       //glVertex2f(960,510);
       glVertex2f(1025,479);

       glVertex2f(985,499);
       //glVertex2f(960,210);
       //glVertex2f(960,510);
       glVertex2f(1025,499);
       glEnd();
       glFlush();
       //glEnd();
       //glFlush();


    }

    //human
     glBegin(GL_LINES);
    {
        glColor3f(1.0,0.0,1.0);
       glVertex2f(985,510);
       glVertex2f(1005,550);
      glVertex2f(1005,550);
       glVertex2f(1025,510);

        glVertex2f(1005,550);
         glVertex2f(1005,580);

          glVertex2f(1005,580);
           glVertex2f(985,560);

           glVertex2f(1005,580);
           glVertex2f(1025,560);
       glEnd();
       glFlush();
    }
     glBegin(GL_LINES);
    {
        glColor3f(1.0,0.0,0.0);
       glVertex2f(1025,210);
       //glVertex2f(960,210);
       //glVertex2f(960,510);
       glVertex2f(1025,510);
       glEnd();
       glFlush();
       //glEnd();
       //glFlush();


    }
      glBegin(GL_POLYGON);
    {
        float theta,i;i=0.0;
        theta=0.0;
        glColor3f(1.0,1.0,1.0);
        for(int i=0;i<360;i++){
            theta=i*3.147/180;
            glVertex2f(1004+10*sin(theta),589+10*cos(theta));
        }
       glEnd();
       glFlush();
       //glEnd();
       //glFlush();


    }
    glBegin(GL_POLYGON);
    {
        glColor3f(1.0,0.0,0.0);
        //glLineWidth(115.0f);
      glVertex2f(950,510);

       glVertex2f(1060,510);
        glVertex2f(1060,530);
         glVertex2f(950,530);



       glEnd();
       glFlush();


    }

}
void init(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(0.0, 1200.0, 0.0, 750.0,0,10);
	}
char underthe[]="UNDER THE GUIDENCE OF";
char staff1[]="DR.PRADEEP KANCHAN  ";
char staff2[]="MS SHRUTHI M";
char pname[]="3D RESORT";
char name[]="NAME";
char usn[]="USN";
char bk[]="BHARGAVA K";
char ak[]="ASHUTHOSH KAMATH";
char bkusn[]="4NM20CS050";
char akusn[]="4NM20CS042";
char pres[]="Press A for simulation";
void ds()
{
glColor3f(1.0,1.0,1.0);
    glRasterPos2i(338,467);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,del);

    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(720,440);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,sup);

    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(491,432);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,no);
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    //glClearColor(0.0,0.0,0.0)


    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(500,525);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,pname);


     glColor3f(1.0,1.0,1.0);
    glRasterPos2i(350,425);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,bk);


   glColor3f(1.0,1.0,1.0);
    glRasterPos2i(850,425);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,bkusn);

    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(850,355);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,akusn);



     glColor3f(1.0,1.0,1.0);
    glRasterPos2i(350,355);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,ak);

    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(250,225);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,underthe);


     glColor3f(1.0,1.0,1.0);
    glRasterPos2i(400,125);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,staff1);



     glColor3f(1.0,1.0,1.0);
    glRasterPos2i(400,65);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,staff2);


     glColor3f(1.0,1.0,1.0);
     //glColor3f(0.0,0.0,1.0);
    glRasterPos2i(400,25);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,pres);








    /*glLineWidth(10);
    glColor3f(0.2,0.5,0.8);

    glBegin(GL_LINES);
    glVertex2i(13,43);
    glVertex2i(31,43);*/

    glEnd();
    glFlush();
}
void boat()
{
	if (boatStatus == 1)
	{
		boatX += .1;
	}
	if (boatX > 1000)
	{
		boatX = -600;
	}
	glPushMatrix();
	glTranslatef(boatX, boatY, 0);
	draw_Boat();
	glPopMatrix();
}
char a1[18]="Press B for home";
void display2()
{
    glClear(GL_COLOR_BUFFER_BIT);
     glColor3f(1.0,1.0,1.0);
    //glRasterPos2i(720,440);
    //glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,sup);
     glutSwapBuffers();
}
void display1()
{glClear(GL_COLOR_BUFFER_BIT);
    //init();

    draw_scene();


		draw_house(320, 340, 0.5, 0.0, 0.5);
		draw_house(700, 310, 0.8, 0.3, 0.5);
		draw_house(480, 310, 0.8, 0.3, 0.5);
		watch();
        boat();
        void head(float x, float y, float radius)
{
    glColor3f(1.0,0.8,0.4);
    int i;
    int triangleAmount = 500;


    float twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y +1.5*(radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glFlush();
}
void campfire(){
glBegin(GL_POLYGON);
		glColor3f(1.0,0.0,0.0);
		glVertex2f(900,200);
		glVertex2f(890,250);
		glVertex2f(910,300);
        glVertex2f(930,250);
        glVertex2f(940,200);
        glEnd();
        glFlush();

        glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,0.0);
		glVertex2f(900,220);
		glVertex2f(910,210);
		glVertex2f(910,160);
        glVertex2f(900,160);
        //glVertex2f(940,200);
        glEnd();
        glFlush();

        glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,0.0);
		glVertex2f(920,220);
		glVertex2f(930,210);
		glVertex2f(922,160);
        glVertex2f(930,160);
        //glVertex2f(940,200);
        glEnd();
         glFlush();

          glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(910,220);
		glVertex2f(920,210);
		glVertex2f(910,160);
        glVertex2f(920,160);
        //glVertex2f(940,200);
        glEnd();

         glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(920,220);
		glVertex2f(930,210);
		glVertex2f(920,160);
        glVertex2f(930,160);
        //glVertex2f(940,200);
        glEnd();


         glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(930,220);
		glVertex2f(940,210);
		glVertex2f(930,160);
        glVertex2f(940,160);
        //glVertex2f(940,200);
        glEnd();

        glFlush();
        glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,0.0);
		glVertex2f(890,220);
		glVertex2f(900,210);
		glVertex2f(890,160);
        glVertex2f(900,160);
        //glVertex2f(940,200);
        glEnd();

        glFlush();


        glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,0.0);
		glVertex2f(940,220);
		glVertex2f(950,210);
		glVertex2f(940,160);
        glVertex2f(950,160);
        //glVertex2f(940,200);
        glEnd();
        glFlush();}


 personinside(110,264);
 //personinside(150,264);
 //personinside(190,264);
 personinside(200,264);
 personinside(240,264);
 personinside(330,264);
 /*personinside(110,364);
 personinside(110,564);
 personinside(110,664);*/
 personinside(390,364);
 personinside(290,364);
 personinside(190,364);

 personinside(410,264);personinside(510,264);personinside(610,264);personinside(710,264);
 personinside(410,364);
 personinside(610,364);//personinside(330,264);

 personinside(870,204);
  personinside(860,220);
  personinside(850,220);
  personinside(830,220);
    personinside(810,220);

personinside(990,220);
personinside(1000,220);
personinside(990,240);
personinside(970,240);


		midPointCircleAlgo();
ds();
      //glColor3f(1.0,1.0,1.0);
    /*glRasterPos2i(400,25);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,a1);*/
    glutSwapBuffers();

}
void keys(unsigned char key,int A,int B)
{

	switch (key) {

	case 'b':		//boat start
	case 'B':
	    {
		boatStatus = 1;
		break;
		}
	case 'e':		//boat stop
	case 'E':
	    {
		boatStatus = 0;
		break;
		}
	/*case 'H':		//horse start
	case 'h':{
		horseStatus = 1;
		break;}
	case 'F':		//horse stop
	case 'f':{
		horseStatus = 0;
		break;}*/
	case 'D':		//day
	case 'd':
	{
		//sky
		R = 1, G = 1, B = 1;
		r = 1, g = 1, b = 0;
		//sun
		r1 = 1, g1 = 0.5, b1 = 0.0;
		//landbreeze down arrow: red
		r2 = 7.0, g2 = 0.0, b2 = 0.0;
		//seabreeze up arrow: blue
		r3 = 0.0, g3 = 0.0, b3 = 7.0;
		//river
		r4 = 0.2, g4 = 0.5, b4 = 0.8;
		//land
		r5 = 0.0, g5 = 0.7, b5 = 0.0;
		//tree
		r6 = 0.0, g6 = 0.6, b6 = 0.0;
		//ins
		r7 = 0.0, g7 = 0.0, b7 = 0.0;



		ua1 = 1000, ua2 = 900, da1 = 200, da2 = 100;
		lefY = 170, rigY = 120;

		break;
	}
	case 'N':		//night
	case 'n':
	{
//draw_scene2();

		//sky
		R = 0, G = 0, B = 0.5;
		r = 0, g = 0, b = 0;
		//moon
		r1 = 1, g1 = 1, b1 = 1;
		//seabreeze down arrow: blue
		r2 = 0.0, g2 = 0.0, b2 = 7.0;
		//landbreeze up arrow: red
		r3 = 7.0, g3 = 0.0, b3 = 0.0;
		//river
		r4 = 0.1, g4 = 0.2, b4 = 0.3;
		//land
		r5 = 0.2, g5 = 0.5, b5 = 0.1;
		//tree
		r6 = 0.2, g6 = 0.4, b6 = 0.1;
		//ins
		r7 = 1.0, g7 = 1.0, b7 = 1.0;


		ua1 = 100, ua2 = 200, da1 = 900, da2 = 1000;
		lefY = 120, rigY = 170;





		break;
	}
	case 'A':		//boat start
	case 'a':{
		 glutDisplayFunc(display1);
		break;
	}
	case 'Z':		//boat start
	case 'z':{
		 glutDisplayFunc(display);
		break;}

	default:
		break;
	}

          /*
		if(key=='D'||key=='d')
	{
		//sky
		R = 1, G = 1, B = 1;
		r = 1, g = 1, b = 0;
		//sun
		r1 = 1, g1 = 0.5, b1 = 0.0;
		//landbreeze down arrow: red
		r2 = 7.0, g2 = 0.0, b2 = 0.0;
		//seabreeze up arrow: blue
		r3 = 0.0, g3 = 0.0, b3 = 7.0;
		//river
		r4 = 0.2, g4 = 0.5, b4 = 0.8;
		//land
		r5 = 0.0, g5 = 0.7, b5 = 0.0;
		//tree
		r6 = 0.0, g6 = 0.6, b6 = 0.0;
		//ins
		r7 = 0.0, g7 = 0.0, b7 = 0.0;



		ua1 = 1000, ua2 = 900, da1 = 200, da2 = 100;
		lefY = 170, rigY = 120;


	}


		else if(key=='O'|key=='o')
        {
            boatStatus = 1;
        }
        else if(key=='f'|key=='F')
        {
            boatStatus = 0;
        }
	else if(key=='A'||key=='a')
        {
            glutDisplayFunc(display1);
        }

     else if(key=='B'||key=='b')
        {
            glutDisplayFunc(display);
        }


	else if(key=="n"||key=="N")
	{
		//sky
		R = 0, G = 0, B = 0.5;
		r = 0, g = 0, b = 0;
		//moon
		r1 = 1, g1 = 1, b1 = 1;
		//seabreeze down arrow: blue
		r2 = 0.0, g2 = 0.0, b2 = 7.0;
		//landbreeze up arrow: red
		r3 = 7.0, g3 = 0.0, b3 = 0.0;
		//river
		r4 = 0.1, g4 = 0.2, b4 = 0.3;
		//land
		r5 = 0.2, g5 = 0.5, b5 = 0.1;
		//tree
		r6 = 0.2, g6 = 0.4, b6 = 0.1;
		//ins
		r7 = 1.0, g7 = 1.0, b7 = 1.0;


		ua1 = 100, ua2 = 200, da1 = 900, da2 = 1000;
		lefY = 120, rigY = 170;


	}*/

glutPostRedisplay();

}
/*void keys1(unsigned char key,int C,int D )
{
    if(key=='A')
    {
        glutDisplayFunc(display);
    }
    glutPostRedisplay();
}*/
void OnMouseClick(int button, int state, int x, int y)
{
  if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
  {
     printf("%d %d\n",x,y);
     if(x>=236 && x<=330 && y>=169 && y<=270){
        first();
     }
     else if(x>=522 && x<=615 && y>=188 && y<=290){
        second();
     }

  }
}


int main(int argc,char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(900,500);
    glutCreateWindow("Computer Graphics Project");
    init();
    glutDisplayFunc(display);
    //glEnable(GL_DEPTH_TEST);
    glutKeyboardFunc(keys);
    //glutKeyboardFunc(keys1);
     glutMouseFunc(OnMouseClick);
     //glutTimerFunc(20,update,0);
     //glutFullScreen();
     //PlaySound(TEXT("2.Mav"),NULL,SND_SYNC);
    glutMainLoop();
    return 0;
}

/*//variable declarations
					//start program flag
int ua1 = 1000, ua2 = 900, da1 = 200, da2 = 100;//x values for up and down arrows
int lefY = 170, rigY = 120;				//y values for left and right labels

//initial color values during day
float R = 1, G = 1, B = 1;				//sky gradient	: white
float r = 1, g = 1, b = 0;				//sky color		: yellow
float r1 = 1.0, g1 = 0.5, b1 = 0.0;		//celestial obj	: orange
float r2 = 7.0, g2 = 0.0, b2 = 0.0;		//down arrow	: red
float r3 = 0.0, g3 = 0.0, b3 = 1.0;		//up arrow		: blue
float r4 = 0.2, g4 = 0.5, b4 = 0.8;		//river			: light blue
float r5 = 0.0, g5 = 0.7, b5 = 0.0;		//land			: bright green
float r6 = 0.0, g6 = 0.6, b6 = 0.0;		//tree			: light green
float r7 = 0.0, g7 = 0.0, b7 = 0.0;		//instruction   : black



int pntX1 = 1100, pntY1 = 650, radius = 40; //circle variables


void draw_house(int, int,float,float,float);
void draw_scene();


void plot(int, int);
void midPointCircleAlgo();

//keyboard entries and the corresponding change in value of various variables
void keyboard(unsigned char key, int x, int y)
{
	switch (key) {

		break;
	case 'D':		//day
	case 'd':
	{
		//sky
		R = 1, G = 1, B = 1;
		r = 1, g = 1, b = 0;
		//sun
		r1 = 1, g1 = 0.5, b1 = 0.0;
		//landbreeze down arrow: red
		r2 = 7.0, g2 = 0.0, b2 = 0.0;
		//seabreeze up arrow: blue
		r3 = 0.0, g3 = 0.0, b3 = 7.0;
		//river
		r4 = 0.2, g4 = 0.5, b4 = 0.8;
		//land
		r5 = 0.0, g5 = 0.7, b5 = 0.0;
		//tree
		r6 = 0.0, g6 = 0.6, b6 = 0.0;
		//ins
		r7 = 0.0, g7 = 0.0, b7 = 0.0;



		ua1 = 1000, ua2 = 900, da1 = 200, da2 = 100;
		lefY = 170, rigY = 120;

		break;
	}
	case 'N':		//night
	case 'n':
	{
		//sky
		R = 0, G = 0, B = 0.5;
		r = 0, g = 0, b = 0;
		//moon
		r1 = 1, g1 = 1, b1 = 1;
		//seabreeze down arrow: blue
		r2 = 0.0, g2 = 0.0, b2 = 7.0;
		//landbreeze up arrow: red
		r3 = 7.0, g3 = 0.0, b3 = 0.0;
		//river
		r4 = 0.1, g4 = 0.2, b4 = 0.3;
		//land
		r5 = 0.2, g5 = 0.5, b5 = 0.1;
		//tree
		r6 = 0.2, g6 = 0.4, b6 = 0.1;
		//ins
		r7 = 1.0, g7 = 1.0, b7 = 1.0;


		ua1 = 100, ua2 = 200, da1 = 900, da2 = 1000;
		lefY = 120, rigY = 170;

		break;
	}
	default:
		break;
	}
}



//
//drawing circle using MidPoint Circle Algorithm
void plot(int x, int y)
{
	//plot point
	glColor3f(r1, g1, b1);
	glPointSize(2.0);
	glBegin(GL_POINTS);
	glVertex2i(x + pntX1, y + pntY1);
	glEnd();
	//draw a line from centre to plotted point
	glColor3f(r1, g1, b1);
	glLineWidth(2);
	glBegin(GL_LINES);
	glVertex2i(pntX1, pntY1);
	glVertex2i(x + pntX1, y + pntY1);
	glEnd();
}

void midPointCircleAlgo()
{
	int x = 0;
	int y = radius;
	float decision = 5 / 4 - radius;
	plot(x, y);

	while (y > x)
	{
		if (decision < 0)
		{
			x++;
			decision += 2 * x + 1;
		}
		else
		{
			y--;
			x++;
			decision += 2 * (x - y) + 1;
		}
		plot(x, y);
		plot(x, -y);
		plot(-x, y);
		plot(-x, -y);
		plot(y, x);
		plot(-y, x);
		plot(y, -x);
		plot(-y, -x);
	}
}
//
//
//methods defining coordinate values for objects
//
//
void draw_scene()
{
	glBegin(GL_POLYGON);	//Lower Sky
	glColor3f(r, g, b);
	glVertex2i(0, 600);
	glVertex2i(1200, 600);
	glColor3f(R, G, B);
	glVertex2i(1200, 50);
	glVertex2i(0, 50);
	glEnd();

	glBegin(GL_POLYGON);	 //Upper Sky
	glColor3f(r, g, b);
	glVertex2i(0, 600);
	glVertex2i(1200, 600);
	glVertex2i(1200, 750);
	glVertex2i(0, 750);
	glEnd();

	glBegin(GL_POLYGON);	//Land
	glColor3f(r5, g5, b5);
	glVertex2i(0, 100);
	glVertex2i(0, 280);
	glVertex2i(200, 330);
	glVertex2i(400, 360);
	glVertex2i(600, 330);
	glVertex2i(800, 320);
	glVertex2i(1000, 300);

	glColor3f(0.7, 0.2, 0.0);//Sand on ground
	glVertex2i(1200, 270);
	glVertex2i(1200, 100);
	glEnd();

	glBegin(GL_POLYGON);	// River
	glColor3f(r4, g4, b4);
	glVertex2i(0, 150);
	glVertex2i(1200, 150);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();
}



void draw_house(int x, int y, float red, float green, float blue)
{
	//red is intensity of red color

	glBegin(GL_POLYGON);	//House
	glColor3f(red, green, blue);
	glVertex2i(0 + x, 0 + y);
	glVertex2i(120 + x, 0 + y);
	glVertex2i(120 + x, 116 + y);
	glVertex2i(0 + x, 116 + y);
	glEnd();

	glBegin(GL_POLYGON);	//Roof
	glColor3f(0.9, 0, 0);
	glVertex2i(x - 10, 116 + y);
	glVertex2i(x + 130, 116 + y);
	glVertex2i(x + 100, 156 + y);
	glVertex2i(x + 20, 156 + y);
	glEnd();

	glBegin(GL_POLYGON);	 //Door
	glColor3f(1, 0.7, 0.2);
	glVertex2i(x + 40, y + 0);
	glVertex2i(x + 80, y + 0);
	glVertex2i(x + 80, y + 75);
	glVertex2i(x + 40, y + 75);
	glEnd();
}






void init(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(0.0, 1200.0, 0.0, 750.0,0,10);
}

void myDisplay(void)
{

		draw_scene();


		draw_house(320, 340, 0.5, 0.0, 0.5);
		draw_house(700, 310, 0.8, 0.3, 0.5);

		midPointCircleAlgo();




		glFlush();
		glutPostRedisplay();
	}




int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1150, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Sea Breeze & Land Breeze");
	glutKeyboardFunc(keyboard);
	glutDisplayFunc(myDisplay);
	init();
	glutMainLoop();
}*/
void draw_scene2()
{
    campfire();
	glBegin(GL_POLYGON);	//Lower Sky
	glColor3f(r, g, b);
	glVertex2i(0, 600);
	glVertex2i(1200, 600);
	glColor3f(R, G, B);
	glVertex2i(1200, 50);
	glVertex2i(0, 50);
	glEnd();

	glBegin(GL_POLYGON);	 //Upper Sky
	glColor3f(r, g, b);
	glVertex2i(0, 600);
	glVertex2i(1200, 600);
	glVertex2i(1200, 750);
	glVertex2i(0, 750);
	glEnd();

	glBegin(GL_POLYGON);	//Land
	glColor3f(r5, g5, b5);
	glVertex2i(0, 100);
	glVertex2i(0, 280);
	glVertex2i(200, 330);
	glVertex2i(400, 360);
	glVertex2i(600, 330);
	glVertex2i(800, 320);
	glVertex2i(1000, 300);

	glColor3f(0.7, 0.2, 0.0);//Sand on ground
	glVertex2i(1200, 270);
	glVertex2i(1200, 100);
	glEnd();

	glBegin(GL_POLYGON);	// River
	glColor3f(r4, g4, b4);
	glVertex2i(0, 150);
	glVertex2i(1200, 150);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();

}





























//////////////////////////////////////////FIRST HOME///////////////////////////////////////////////////////////////////////////////////////






typedef GLfloat point[3];
point v[] = { { -0.5, 0.3, -0.5 }, { -0.5, -0.5, -0.5 }, { 0.5, -0.5, -0.5 }, { 0.5, 0.3, -0.5 }, { -0.5, 0.3, 0.5 }, { -0.5, -0.5, 0.5 }, { 0.5, -0.5, 0.5 }, { 0.5, 0.3, 0.5 } };
point z[] = { { -0.5, -0.3, 0.3 }, { -0.5, -0.5, 0.3 }, { -0.3, -0.5, 0.3 }, { -0.3, -0.3, 0.3 }, { -0.5, -0.3, -0.3 }, { -0.5, -0.5, -0.3 }, { -0.3, -0.5, -0.3 }, { -0.3, -0.3, -0.3 } };
point h[] = { { 0, 0.6, 0.0 }, { -0.5, 0.3, -0.5 }, { 0.5, 0.3, -0.5 }, { -0.5, 0.3, 0.5 }, { 0.5, 0.3, 0.5 } };
point f[] = { { 0.0, 0.35, 0.0 }, { 0.0, 0.25, 0.0 }, { 0.025, 0.25, -0.025 }, { -0.025, 0.25, -0.025 }, { -0.025, 0.25, 0.025 }, { 0.025, 0.25, 0.025 } };
point fb[] = { { 0.025, 0.25, -0.025 }, { 0.025, 0.25, 0.025 }, { 0.2, 0.25, 0.05 }, { 0.2, 0.25, -0.05 }, { -0.025, 0.25, -0.025 }, { -0.025, 0.25, 0.025 }, { -0.2, 0.25, 0.05 }, { -0.2, 0.25, -0.05 }, { 0.025, 0.25, -0.025 }, { -0.025, 0.25, -0.025 }, { -0.05, 0.25, -0.2 }, { 0.05, 0.25, -0.2 }, { -0.025, 0.25, 0.025 }, { 0.025, 0.25, 0.025 }, { 0.05, 0.25, 0.2 }, { -0.05, 0.25, 0.2 } };
point sft[] = { { -0.5, -0.3, 0.3 }, { -0.3, -0.3, 0.3 }, { -0.3, -0.3, 0.25 }, { -0.5, -0.3, 0.25 }, { -0.5, -0.25, 0.3 }, { -0.3, -0.25, 0.3 }, { -0.3, -0.25, 0.25 }, { -0.5, -0.25, 0.25 } };
point srt[] = { { -0.5, -0.3, -0.3 }, { -0.3, -0.3, -0.3 }, { -0.3, -0.3, -0.25 }, { -0.5, -0.3, -0.25 }, { -0.5, -0.25, -0.3 }, { -0.3, -0.25, -0.3 }, { -0.3, -0.25, -0.25 }, { -0.5, -0.25, -0.25 } };
point sbk[] = { { -0.5, -0.3, 0.3 }, { -0.5, -0.2, 0.3 }, { -0.45, -0.2, 0.3 }, { -0.45, -0.3, 0.3 }, { -0.5, -0.3, -0.3 }, { -0.5, -0.2, -0.3 }, { -0.45, -0.2, -0.3 }, { -0.45, -0.3, -0.3 } };
point t[] = { { 0.4, -0.1, -0.2 }, { 0.4, 0.1, -0.2 }, { 0.4, 0.1, 0.2 }, { 0.4, -0.1, 0.2 } };
point ts[] = { { 0.4, 0.05, -0.05 }, { 0.4, 0.0, -0.05 }, { 0.4, 0.0, 0.05 }, { 0.4, 0.05, 0.05 }, { 0.5, 0.0, -0.05 }, { 0.5, -0.05, -0.05 }, { 0.5, -0.05, 0.05 }, { 0.5, 0.0, 0.05 } };;
point hfrt[] = { { -0.5, 0.3, 0.5 }, { 0.5, 0.3, 0.5 }, { 0.5, 0.25, 0.65 }, { -0.5, 0.25, 0.65 } };

void sofa1();
void house(point, point, point, point, point, point, point, point);
void htop(point, point, point, point, point);
void fan(point, point, point, point, point, point);
void fblade(point, point, point, point, point, point, point, point, point, point, point, point, point, point, point, point);
void grass();
void tv(point, point, point, point);
void tvs(point, point, point, point, point, point, point, point);
void compound();
void rainwater();
void sump();
void table();
void teapot();
void tree();
void window();
void housefront(point, point, point, point);

int lightflag = 0;
int housepolygon = 1;
int orthoflag = 0;
float sofa_d = 0.0;
float sofa_w = 0.0;
float sofa_a = 0.0;
float sofa_s = 0.0;
int mouseflag = 0;
float fanspeed = 1.0;
int back = 0;
int flag = 0;
int translate_sofa_flag = 0;
float dy_c = 0.0;
float dy_s = 1.0;
GLfloat angle = 0;
GLfloat theta[] = { 0.0, 0.0, 0.0 };
GLint axis = 1;
GLdouble viewer[] = { 0.0, 0.0, 2.0 };

void mouse(int btn, int state, int x, int y)
{
	if (mouseflag)
	{
		if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)axis = 0;
		if (btn == GLUT_MIDDLE_BUTTON && state == GLUT_DOWN)axis = 1;
		if (btn == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)axis = 2;
		theta[axis] += 2.0;
		if (theta[axis] > 360.0)
			theta[axis] -= 360.0;
	}
	glutPostRedisplay();
}

void spin()
{
	angle = angle + fanspeed;
	if (angle >= 360)
	{
		angle = 0;
	}
	glutPostRedisplay();
}

void sofa1()
{
	glColor3f(0.96, 0.64, 0.38);
	glPushMatrix();
	glTranslated(-0.4 + sofa_s, -0.425, 0 + sofa_d);		//bottom
	glScaled(2, 1.5, 6);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.93, 0.84, 0.72);
	glPushMatrix();
	glTranslated(-0.4 + sofa_s, -0.3125, -0.25 + sofa_d);		//back
	glScaled(2, 0.75, 1);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.93, 0.84, 0.72);
	glPushMatrix();
	glTranslated(-0.4 + sofa_s, -0.3125, 0.25 + sofa_d);		//front
	glScaled(2, 0.75, 1);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.87, 0.72, 0.53);
	glPushMatrix();
	glTranslated(-0.475 + sofa_s, -0.275, 0 + sofa_d);			//rest
	glScaled(0.5, 1.5, 4);
	glutSolidCube(0.1);
	glPopMatrix();
}
void myreshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w <= h)
	{
		if (orthoflag)
			glOrtho(-1.0, 1.0, -1.0*((GLfloat)h / (GLfloat)w), 1.0*((GLfloat)h / (GLfloat)w), -20.0, 20.0);
		else
			glFrustum(-1.0, 1.0, -1.0*(GLfloat)h / (GLfloat)w, 1.0*(GLfloat)h / (GLfloat)w, 1.0, 10.0);
	}
	else
	{
		if (orthoflag)
			glOrtho(-1.0*((GLfloat)w / (GLfloat)h), 1.0*((GLfloat)w / (GLfloat)h), -1.0, 1.0, -20.0, 20.0);
		else
			glFrustum(-1.0*(GLfloat)w / (GLfloat)h, 1.0*(GLfloat)w / (GLfloat)h, -1.0, 1.0, 1.0, 10.0);
	}
	glMatrixMode(GL_MODELVIEW);
	glutPostRedisplay();
}

void displayFirst()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	GLfloat mat_ambient[] = { 0.7, 0.7, 0.7, 1.0 };
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.5, 1.0 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat lightintensity[] = { 1, 1, 1, 1.0 };
	GLfloat lightposition[] = { 2.0, 2.0, 2.0, 1.0 };
	GLfloat lightposition2[] = { -2.0, -2.0, -2.0, 1.0 };
	glClearColor(0.5, 0.5, 0.5, 0.0);
	switch (back)
	{
	case 1:     glClearColor(1.0, 0.0, 0.0, 0.0);
		break;
	case 2:     glClearColor(0.0, 0.0, 1.0, 0.0);
		break;
	case 3:    glClearColor(0.0, 1.0, 0.0, 0.0);
		break;
	case 4:    glClearColor(0.0, 0.0, 0.0, 0.0);
		break;
	}

	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

	glLightfv(GL_LIGHT0, GL_POSITION, lightposition);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightintensity);
	glLightfv(GL_LIGHT0, GL_SPECULAR, mat_specular);
	glLightfv(GL_LIGHT1, GL_POSITION, lightposition2);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, lightintensity);
	glLightfv(GL_LIGHT1, GL_SPECULAR, mat_specular);

	if (lightflag)   glEnable(GL_LIGHTING);
	else glDisable(GL_LIGHTING);

	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHT1);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);

	if (orthoflag)
	{
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrtho(-1, 1, -1, 1, -20, 20);
		glMatrixMode(GL_MODELVIEW);
	}
	else
	{
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glFrustum(-1.0, 1.0, -1.0, 1.0, 1.0, 10.0);
		glMatrixMode(GL_MODELVIEW);
	}

	glLoadIdentity();
	//gluLookAt(viewer[0], viewer[1], viewer[2], 0, 0, 0, 0, 1, 0);
	glRotatef(theta[0], 1, 0, 0);
	glRotatef(theta[1], 0, 1, 0);
	glRotatef(theta[2], 0, 0, 1);

	house(v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7]);
	htop(h[0], h[1], h[2], h[3], h[4]);
	tv(t[0], t[1], t[2], t[3]);
	tvs(ts[0], ts[1], ts[2], ts[3], ts[4], ts[5], ts[6], ts[7]);
	grass();
	sofa1();
	rainwater();
	sump();
	table();
	teapot();
	tree();
	compound();
	window();
	housefront(hfrt[0], hfrt[1], hfrt[2], hfrt[3]);
	fan(f[0], f[1], f[2], f[3], f[4], f[5]);
	fblade(fb[0], fb[1], fb[2], fb[3], fb[4], fb[5], fb[6], fb[7], fb[8], fb[9], fb[10], fb[11], fb[12], fb[13], fb[14], fb[15]);

	glEnable(GL_DEPTH_TEST);
	glutSwapBuffers();
}

void backMenu(int value)
{
	switch (value)
	{
		case 1:back = 1;
		break;
		case 2:back = 2;
		break;
		case 3:back = 3;
		break;
		case 4:back = 4;
		break;
	}
	glutPostRedisplay();
}

void rainwater()
{
	glColor3f(0.69,0.77,0.87);
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, 0.3, 0.5);
	glVertex3f(-0.55, 0.3, 0.5);		//left bottom
	glVertex3f(-0.55, 0.275, -0.55);
	glVertex3f(-0.5, 0.275, -0.55);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, 0.275, -0.55);
	glVertex3f(-0.5, 0.277, -0.5);		//back bottom
	glVertex3f(0.55, 0.262, -0.55);
	glVertex3f(0.55, 0.260, -0.5);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(0.55, 0.262, -0.55);		//right bottom
	glVertex3f(0.5, 0.261, -0.55);
	glVertex3f(0.5, 0.251, 0.4);
	glVertex3f(0.55, 0.252, 0.4);
	glEnd();

	glColor3f(0.44,0.50,0.56);
	glBegin(GL_POLYGON);
	glVertex3f(-0.55, 0.3, 0.5);
	glVertex3f(-0.55, 0.325, 0.5);		//left top
	glVertex3f(-0.55, 0.295, -0.55);
	glVertex3f(-0.55, 0.275, -0.55);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-0.55, 0.295, -0.55);
	glVertex3f(-0.55, 0.275, -0.55);	//back top
	glVertex3f(0.55, 0.260, -0.55);
	glVertex3f(0.55, 0.285, -0.55);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(0.55, 0.262, -0.55);
	glVertex3f(0.55, 0.282, -0.55);		//right top
	glVertex3f(0.55, 0.272, 0.4);
	glVertex3f(0.55, 0.252, 0.4);
	glEnd();

	glColor3f(0.47, 0.53, 0.60);
	glBegin(GL_POLYGON);
	glVertex3f(0.55, 0.252, 0.4);
	glVertex3f(0.5, 0.251, 0.4);			//back
	glVertex3f(0.5, -0.7, 0.4);
	glVertex3f(0.55, -0.7, 0.4);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(0.55, 0.250, 0.45);				//front
	glVertex3f(0.5, 0.250, 0.45);
	glVertex3f(0.5, -0.7, 0.45);
	glVertex3f(0.55, -0.7, 0.45);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(0.5, 0.251, 0.4);
	glVertex3f(0.5, 0.250, 0.45);				//left
	glVertex3f(0.5, -0.7, 0.45);
	glVertex3f(0.5, -0.7, 0.4);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(0.55, 0.251, 0.4);				//right
	glVertex3f(0.55, 0.250, 0.45);
	glVertex3f(0.55, -0.7, 0.45);
	glVertex3f(0.55, -0.7, 0.4);
	glEnd();

	glPushMatrix();
	glTranslated(0.6, -0.675, 0.425);						//left wall
	glScaled(2, 1, 1);
	glutSolidCube(0.05);
	glPopMatrix();

}

void window()
{
	if (housepolygon)
	{
		glColor3f(0.5, 0.55, 0.5);
		glBegin(GL_POLYGON);
		glVertex3f(0.25, -0.1, 0.505);
		glVertex3f(0.4, -0.1, 0.505);
		glVertex3f(0.4, 0.05, 0.505);
		glVertex3f(0.25, 0.05, 0.505);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(-0.25, -0.1, 0.505);
		glVertex3f(-0.4, -0.1, 0.505);
		glVertex3f(-0.4, 0.05, 0.505);
		glVertex3f(-0.25, 0.05, 0.505);
		glEnd();
	}
	else
	{
		glColor3f(0.5, 0.55, 0.5);
		glBegin(GL_LINE_LOOP);
		glVertex3f(0.25, -0.1, 0.505);
		glVertex3f(0.4, -0.1, 0.505);
		glVertex3f(0.4, 0.05, 0.505);
		glVertex3f(0.25, 0.05, 0.505);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glVertex3f(-0.25, -0.1, 0.505);
		glVertex3f(-0.4, -0.1, 0.505);
		glVertex3f(-0.4, 0.05, 0.505);
		glVertex3f(-0.25, 0.05, 0.505);
		glEnd();
	}
}

void housefront(point a, point b, point c, point d)
{
	glColor3f(0.5,0,0);
	glBegin(GL_POLYGON);
	glVertex3fv(a);
	glVertex3fv(b);
	glVertex3fv(c);
	glVertex3fv(d);
	glEnd();
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex3f(0.5, 0.25, 0.65);
	glVertex3f(0.5, -0.5, 0.65);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.5, 0.25, 0.65);
	glVertex3f(-0.5, -0.5, 0.65);
	glEnd();
}

void table()
{
	glColor3f(0.80, 0.72, 0.62);
	glPushMatrix();
	glTranslated(0.375, -0.325, -0.375);
	glScaled(2.5, 0.5, 2.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.475, -0.425, -0.475);
	glScaled(0.5, 1.5, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.475, -0.425, -0.275);
	glScaled(0.5, 1.5, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.275, -0.425, -0.275);
	glScaled(0.5, 1.5, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.275, -0.425, -0.475);
	glScaled(0.5, 1.5, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();
}

void teapot()
{
	glColor3f(0.55, 0.27, 0.07);
	glPushMatrix();
	glTranslated(0.35, -0.275, -0.35);
	glScaled(0.5, 0.5, 0.5);
	glutSolidTeapot(0.1);
	glPopMatrix();
}

void sump()
{
	glColor3f(0.37,0.62,0.63);
	glPushMatrix();
	glTranslated(0.7, -0.6, 0.5);
	glScaled(2, 3, 2);
	glutSolidCube(0.1);
	glPopMatrix();
}

void tree()
{
	glColor3f(0.80, 0.52, 0.25);
	glPushMatrix();
	glTranslated(-0.75, -0.35, 0.8);
	glScaled(0.5, 2.5, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0, 0.39, 0);
	glPushMatrix();
	glTranslated(-0.75, -0.3, 0.8);
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(0.1, 0.25, 500, 500);
	glPopMatrix();

	glColor3f(0.24, 0.7, 0.44);
	glPushMatrix();
	glTranslated(-0.75, -0.25, 0.8);
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(0.1, 0.25, 500, 500);
	glPopMatrix();

	glColor3f(0.20, 0.80, 0.20);
	glPushMatrix();
	glTranslated(-0.75, -0.2, 0.8);
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(0.1, 0.25, 500, 500);
	glPopMatrix();
}
void compound()
{
	glColor3f(1, 0.89, 0.71);
	glPushMatrix();
	glTranslated(-0.975, -0.4 + dy_c, 0.0);						//left wall
	glScaled(0.5, 2 * dy_s, 20);
	glutSolidCube(0.1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.975, -0.4 + dy_c, 0.0);						//right wall
	glScaled(1, 2 * dy_s, 20);
	glutSolidCube(0.1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.0, -0.4 + dy_c, -0.975);						//back wall
	glScaled(20, 2 * dy_s, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-0.25, -0.4 + dy_c, 0.975);						//front wall
	glScaled(15, 2 * dy_s, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.55, 0.47, 0.4);
	glBegin(GL_POLYGON);
	glVertex3f(0.5, -0.5, 0.975);
	glVertex3f(0.5, -0.3, 0.975);
	glVertex3f(1.0, -0.3, 0.975);
	glVertex3f(1.0, -0.5, 0.975);
	glEnd();
}

void keysFirst(unsigned char key, int x, int y)
{
	if (key == 'x') viewer[0] -= 0.5;
	if (key == 'X') viewer[0] += 0.5;
	if (key == 'y') viewer[1] -= 0.5;
	if (key == 'Y') viewer[1] += 0.5;
	if (key == 'z') viewer[2] -= 0.5;
	if (key == 'Z') viewer[2] += 0.5;

	if (translate_sofa_flag)
	{
		if (key == 'd') sofa_d += 0.1;
		if (key == 'a') sofa_d -= 0.1;
		if (key == 'w') sofa_s += 0.1;
		if (key == 's') sofa_s -= 0.1;
	}
	glutPostRedisplay();
}

void tv(point a, point b, point c, point d)
{
	glColor3f(0.19, 0.31, 0.31);
	glBegin(GL_POLYGON);
	glVertex3fv(a);
	glVertex3fv(b);
	glVertex3fv(c);
	glVertex3fv(d);
	glEnd();

}

void tvs(point a, point b, point c, point d, point a1, point b1, point c1, point d1)
{
	glColor3f(0.75, 0.75, 0.75);
	glBegin(GL_LINES);
	glVertex3fv(a);
	glVertex3fv(a1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3fv(b);
	glVertex3fv(b1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3fv(c);
	glVertex3fv(c1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3fv(d);
	glVertex3fv(d1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3fv(a);
	glVertex3fv(a1);
	glVertex3fv(b1);
	glVertex3fv(b);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3fv(a);
	glVertex3fv(a1);
	glVertex3fv(d1);
	glVertex3fv(d);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3fv(b);
	glVertex3fv(b1);
	glVertex3fv(c1);
	glVertex3fv(c);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3fv(c);
	glVertex3fv(c1);
	glVertex3fv(d1);
	glVertex3fv(d);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3fv(a1);
	glVertex3fv(b1);
	glVertex3fv(c1);
	glVertex3fv(d1);
	glEnd();
}

void house(point a, point b, point c, point d, point e, point f, point g, point h)
{
	if (housepolygon)
	{
		glColor3f(1, 0.98, 0.8);
		glBegin(GL_POLYGON);
		glVertex3fv(a);
		glVertex3fv(e);
		glVertex3fv(f);			//left
		glVertex3fv(b);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3fv(d);
		glVertex3fv(h);			//right
		glVertex3fv(g);
		glVertex3fv(c);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3fv(a);
		glVertex3fv(b);			//back
		glVertex3fv(c);
		glVertex3fv(d);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3fv(e);
		glVertex3fv(h);
		glVertex3fv(g);
		glVertex3fv(f);
		glEnd();
		glColor3f(1, 0.5, 0.31);
		glBegin(GL_POLYGON);
		glVertex3f(-0.15, -0.1, 0.51);
		glVertex3f(-0.15, -0.5, 0.51);
		glVertex3f(0.15, -0.5, 0.51);
		glVertex3f(0.15, -0.1, 0.51);
		glEnd();
	}
	else
	{
		glBegin(GL_LINE_LOOP);
		glVertex3fv(b);
		glVertex3fv(f);
		glVertex3fv(g);
		glVertex3fv(c);
		glEnd();
		glBegin(GL_LINES);
		glVertex3fv(e);
		glVertex3fv(f);
		glVertex3fv(h);
		glVertex3fv(g);
		glVertex3fv(d);
		glVertex3fv(c);
		glVertex3fv(a);
		glVertex3fv(b);
		glEnd();
		glColor3f(1, 0.5, 0.31);
		glBegin(GL_LINE_LOOP);
		glVertex3f(-0.15, -0.1, 0.5);
		glVertex3f(-0.15, -0.5, 0.5);
		glVertex3f(0.15, -0.5, 0.5);
		glVertex3f(0.15, -0.1, 0.5);
		glEnd();
	}
	glColor3f(0.96, 0.87, 0.70);
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, -0.49, -0.5);
	glVertex3f(-0.5, -0.49, 0.5);
	glVertex3f(0.5, -0.49, 0.5);				//bottom
	glVertex3f(0.5, -0.49, -0.5);
	glEnd();
}

void grass()
{
	glColor3f(0.13, 0.55, 0.13);
	glBegin(GL_POLYGON);
	glVertex3f(-1.0, -0.5, -1.0);
	glVertex3f(-1.0, -0.5, 1.0);
	glVertex3f(1.0, -0.5, 1.0);
	glVertex3f(1.0, -0.5, -1.0);
	glEnd();
}

void fan(point a, point b, point c, point d, point e, point f)
{
	glColor3f(0.72, 0.53, 0.04);
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex3fv(a);
	glVertex3fv(b);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3fv(c);
	glVertex3fv(d);
	glVertex3fv(e);
	glVertex3fv(f);
	glEnd();
}

void fblade(point a, point b, point c, point d, point a1, point b1, point c1, point d1, point a2, point b2, point c2, point d2, point a3, point b3, point c3, point d3)
{
	glColor3f(0.72, 0.53, 0.04);
	if (flag)
		glRotatef(angle, 0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex3fv(a);
	glVertex3fv(b);
	glVertex3fv(c);
	glVertex3fv(d);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3fv(a1);
	glVertex3fv(b1);
	glVertex3fv(c1);
	glVertex3fv(d1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3fv(a2);
	glVertex3fv(b2);
	glVertex3fv(c2);
	glVertex3fv(d2);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3fv(a3);
	glVertex3fv(b3);
	glVertex3fv(c3);
	glVertex3fv(d3);
	glEnd();
}

void htop(point a, point b, point c, point d, point e)
{
	if (housepolygon)
	{
		glColor3f(0.70, 0.13, 0.13);
		glBegin(GL_POLYGON);
		glVertex3fv(a);
		glVertex3fv(b);			//back
		glVertex3fv(c);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3fv(a);
		glVertex3fv(b);			//left
		glVertex3fv(d);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3fv(a);
		glVertex3fv(d);			//front
		glVertex3fv(e);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3fv(a);
		glVertex3fv(c);			//right
		glVertex3fv(e);
		glEnd();
	}
	else
	{
		glColor3f(0.70, 0.13, 0.13);
		glBegin(GL_LINES);
		glVertex3fv(a);
		glVertex3fv(b);
		glEnd();
		glBegin(GL_LINES);
		glVertex3fv(a);
		glVertex3fv(c);
		glEnd();
		glBegin(GL_LINES);
		glVertex3fv(a);
		glVertex3fv(d);
		glEnd();
		glBegin(GL_LINES);
		glVertex3fv(a);
		glVertex3fv(e);
		glEnd();
	}
}

void main_menu(int choice)
{
	switch (choice)
	{
	case 1:exit(0);
		break;
	case 9:housepolygon = 1;
		orthoflag = 0;
		sofa_d = 0.0;
		sofa_w = 0.0;
		sofa_a = 0.0;
		sofa_s = 0.0;				//mouse menu
		mouseflag = 0;
		fanspeed = 1.0;
		back = 0;
		flag = 0;
		translate_sofa_flag = 0;
		dy_c = 0.0;
		dy_s = 1.0;
		angle = 0;
		axis = 1;
		orthoflag = 0;
		viewer[0] = 0.0;
		viewer[1] = 0.0;
		viewer[2] = 2.0;
		theta[0] = 0.0;
		theta[1] = 0.0;
		theta[2] = 0.0;
		glutPostRedisplay();
		break;
	}

}

void rotateMenu(int choice)
{
	switch (choice)
	{
	case 1:flag = 1;
		break;
	case 2:flag = 0;
		break;						//rotate menu
	case 3:fanspeed += 2;
		break;
	case 4:fanspeed -= 2;
		break;
	}
	glutPostRedisplay();
}

void rotateHouse(int choice)
{
	switch (choice)
	{
	case 1:mouseflag = 1;
		break;						//Rotate House
	case 2:mouseflag = 0;
		break;
	default:exit(0);
	}
	glutPostRedisplay();
}

void translatesofa(int choice)
{
	switch (choice)
	{
	case 1:translate_sofa_flag = 1;
		break;
	case 2:translate_sofa_flag = 0;			//Translate Sofa
		break;
	default:exit(0);
	}
	glutPostRedisplay();
}

void scalecompoundheight(int choice)
{
	switch (choice)
	{
	case 1:dy_s = 1.0;
		dy_c = 0.0;
		break;
	case 2:dy_s = 1.5;
		dy_c = 0.05;				//Scale Compound Wall
		break;
	case 3:dy_s = 2.0;
		dy_c = 0.1;
		break;
	case 4:dy_s = 2.5;
		dy_c = 0.15;
		break;
	default:exit(0);
	}
	glutPostRedisplay();
}

void viewtypefunc(int choice)
{
	switch (choice)
	{
	case 1:orthoflag = 1;
		break;
	case 2:orthoflag = 0;			//View Menu
		break;
	default:exit(0);
	}
	glutPostRedisplay();
}

void housewallfunc(int choice)
{
	switch (choice)
	{
	case 1:housepolygon = 0;
		break;
	case 2:housepolygon = 1;		//House walls
		break;
	default:exit(0);
	}
	glutPostRedisplay();
}

void lightsfunc(int choice)
{
	switch (choice)
	{
	case 1:lightflag = 1;
		break;
	case 2:lightflag = 0;			//Lights Func
		break;
	default:exit(0);
	}
	glutPostRedisplay();
}

void keyboard2(unsigned char c, int x, int y)
{
	switch (c)
	{
	case 13:
		glutDisplayFunc(display);
		glutMouseFunc(mouse);
		glutIdleFunc(spin);
		glutReshapeFunc(myreshape);
		glutKeyboardFunc(keysFirst);
		break;
	}
	glutPostRedisplay();
}

void strokeString(float x, float y, float sx, float sy, char *string, int width)
{
	char *c;
	glLineWidth(width);
	glPushMatrix();
	glTranslatef(x, y, 0);
	glScalef(sx, sy, 0);
	for (c = string; *c != '\0'; c++)
		glutStrokeCharacter(GLUT_STROKE_ROMAN, *c);
	glPopMatrix();
}
/*
void first()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.75, 0.75, 0.75);
	strokeString(50, 850, 0.15, 0.15, "BANGALORE INSTITUTE OF TECHNOLOGY", 2);
	strokeString(100, 750, 0.3, 0.3, "DEPARTMENT OF COMPUTER SCIENCE", 4);
	strokeString(300, 670, 0.3, 0.3, "AND ENGINEERING", 4);
	strokeString(200, 500, 0.3, 0.3, "COMPUTER GRAPHICS PAKAGE ON", 2);
	glColor3f(0, 0.5, 0.5);
	strokeString(360, 420, 0.4, 0.4, "3D HOUSE", 6);
	glColor3f(0.54, 0, 0);
	strokeString(50, 50, 0.17, 0.17, "Press (Enter) to display the house", 2);
	strokeString(650, 200, 0.15, 0.15, "By:", 2);
	strokeString(650, 60, 0.15, 0.15, "Under the guidance of.", 2);
	glColor3f(0.74,0.72,0.42);
	strokeString(650, 160, 0.18, 0.18, "Girish Kumar.N", 2);
	strokeString(650, 30, 0.2, 0.2, "Girija.J (Associate Professor)", 2);
	strokeString(650, 120, 0.18, 0.18, "1BI13CS057", 2);
	glutSwapBuffers();
}
//similarly we set translate_sofa flag
*/
void initfirst()
{
	glClearColor(0, 0, 0, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 1000, 0, 1000, -1, 1);
	glMatrixMode(GL_MODELVIEW);
}

void first()
{
	int c_smenu, rotatefan, mouserotate, sofatranslate, scalecompound, viewtype, housewall, lightsonoff;
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutCreateWindow("3D HOUSE");
	initfirst();
	glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutIdleFunc(spin);
    glutReshapeFunc(myreshape);
    glutKeyboardFunc(keysFirst);

	housewall = glutCreateMenu(housewallfunc);
	glutAddMenuEntry("Use LineLoop ", 1);
	glutAddMenuEntry("Use Polygon ", 2);

	lightsonoff = glutCreateMenu(lightsfunc);
	glutAddMenuEntry("On ", 1);
	glutAddMenuEntry("Off ", 2);

	viewtype = glutCreateMenu(viewtypefunc);
	glutAddMenuEntry("Orthographic View ", 1);
	glutAddMenuEntry("Perspective View ", 2);

	sofatranslate = glutCreateMenu(translatesofa);
	glutAddMenuEntry("On (Use keys w,a,s,d) ", 1);
	glutAddMenuEntry("Off ", 2);

	scalecompound = glutCreateMenu(scalecompoundheight);
	glutAddMenuEntry("x1 ", 1);
	glutAddMenuEntry("x1.5", 2);
	glutAddMenuEntry("x2.0", 3);
	glutAddMenuEntry("x2.5", 4);

	mouserotate = glutCreateMenu(rotateHouse);
	glutAddMenuEntry("Mouse On ", 1);
	glutAddMenuEntry("Mouse Off ", 2);

	rotatefan = glutCreateMenu(rotateMenu);
	glutAddMenuEntry("On ", 1);
	glutAddMenuEntry("Off ", 2);
	glutAddMenuEntry("Increase speed ", 3);
	glutAddMenuEntry("Decrease speed ", 4);

	c_smenu = glutCreateMenu(backMenu);
	glutAddMenuEntry("Red ", 1);
	glutAddMenuEntry("Blue ", 2);
	glutAddMenuEntry("Grean ", 3);
	glutAddMenuEntry("Black ", 4);

	glutCreateMenu(main_menu);
	glutAddMenuEntry("Exit", 1);
	glutAddSubMenu("Rotation of fan", rotatefan);
	glutAddSubMenu("Change Color", c_smenu);
	glutAddSubMenu("House Rotation", mouserotate);
	glutAddSubMenu("Translate Sofa", sofatranslate);
	glutAddSubMenu("Scale the height of compound wall", scalecompound);
	glutAddSubMenu("Lighting", lightsonoff);
	glutAddSubMenu("View", viewtype);
	glutAddSubMenu("House Walls", housewall);
	glutAddMenuEntry("Default Mode", 9);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();

}

////////////////////////////////////////////SECOND HOME/////////////////////////////////////////////////////////////////////////////////////////////

#include<math.h>
#include<string.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"
//#include <stdlib.h>
int turn;
void doort(int v);
GLfloat xx = 0.0, zz = 0.0,xx1=1;
float lx = 0.0f, lz = -1.0f , sangle=0.0;
static GLdouble Sviewer[] = { 0.0, 0.2, 4.2 };
static GLdouble lat[] = { 0.0, 0.2, 0.0 };
GLfloat oo = 0, cr = 0,cb=0,cg=0;
void *font = GLUT_BITMAP_HELVETICA_18;
void output(float x, float y, char *s)
{
	glRasterPos2f(x, y);
	for (unsigned int i = 0; i<strlen(s); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s[i]);
	}
}
/*void tf(int v)
{

	while (oo <= 45)
	{
		oo++;
	}
	glutTimerFunc(100, tf, 0);
	glutPostRedisplay();
}*/

void tfs(int v)
{
	cr += 0.01;
	cb += 0.001;
	cg += 0.0001;
	if (cr > 1.0)
	{
		cr = 0;

	}
	 if (cb > 1.0)
	{
		cb = 0;

	}
	if (cg > 1.0)
	{
		cg = 0;

	}

	glutPostRedisplay();
	glutTimerFunc(100, tfs, 0);

}
void doort(int v)
{
	if (xx < 0.2 &&zz < 0.2){
		xx += 0.01;
		zz += 0.01;
	}


		xx1 = 0;



	glutPostRedisplay();
	glutTimerFunc(100, doort, 0);

}
void lines()
{
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(0.2);
	glBegin(GL_LINES);
	glVertex3f(-0.8, 0.00, 1);
	glVertex3f(-0.8, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.6, 0.00, 1);
	glVertex3f(-0.6, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.4, 0.00, 1);
	glVertex3f(-0.4, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.2, 0.00, 1);
	glVertex3f(-0.2, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.0, 0.00, 1);
	glVertex3f(0.0, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.2, 0.00, 1);
	glVertex3f(0.2, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.4, 0.00, 1);
	glVertex3f(0.4, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.6, 0.00, 1);
	glVertex3f(0.6, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.8, 0.00, 1);
	glVertex3f(0.8, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.0, 0.00, 1);
	glVertex3f(1.0, 0.00, -1);
	glEnd();
	//vertical

	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, -0.8);
	glVertex3f(1, 0.00, -0.8);
	glEnd();

	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, -0.6);
	glVertex3f(1, 0.00, -0.6);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, -0.4);
	glVertex3f(1, 0.00, -0.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, -0.2);
	glVertex3f(1, 0.00, -0.2);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, 0.0);
	glVertex3f(1, 0.00, 0.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, 0.2);
	glVertex3f(1, 0.00, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, 0.4);
	glVertex3f(1, 0.00, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, 0.6);
	glVertex3f(1, 0.00, 0.6);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, 0.8);
	glVertex3f(1, 0.00, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, 1.0);
	glVertex3f(1, 0.00, 1.0);
	glEnd();
}
void redwall()
{

	//--------------dark red top---------------------
	glColor3f(0.53, 0.12, 0.12);
	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.0, 1);
	glVertex3f(-0.98, 0.5, 1);
	glVertex3f(-0.98, 0.5, 0.9);
	glVertex3f(-0.98, 0.0, 0.9);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.5, 0.9);
	glVertex3f(-0.98, 0.5, -0.2);
	glVertex3f(-0.98, 0.4, -0.2);
	glVertex3f(-0.98, 0.4, 0.9);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.5, -0.3);
	glVertex3f(-0.98, 0.0, -0.3);
	glVertex3f(-0.98, 0.0, -0.2);
	glVertex3f(-0.98, 0.5, -0.2);
	glEnd();
//--------------grey mid--------------

	glColor3f(0.69, 0.58, 0.56);
	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.0, 0.9);
	glVertex3f(-0.98, 0.4, 0.9);
	glVertex3f(-0.98, 0.4, 0.7);
	glVertex3f(-0.98, 0.0, 0.7);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.4, 0.7);
	glVertex3f(-0.98, 0.4, 0.0);
	glVertex3f(-0.98, 0.25, 0.0);
	glVertex3f(-0.98, 0.25, 0.7);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.4, -0.2);
	glVertex3f(-0.98, 0.0, -0.2);
	glVertex3f(-0.98, 0.0, 0.0);
	glVertex3f(-0.98, 0.4, 0.0);
	glEnd();

	//--------------black----------------
	glColor3f(0.15, 0.11, 0.11);
	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.0, 0.7);
	glVertex3f(-0.98, 0.25, 0.7);
	glVertex3f(-0.98, 0.25, 0.65);
	glVertex3f(-0.98, 0.0, 0.65);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.25, 0.65);
	glVertex3f(-0.98, 0.25, 0.0);
	glVertex3f(-0.98, 0.2, 0.0);
	glVertex3f(-0.98, 0.2, 0.65);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.25, 0.0);
	glVertex3f(-0.98, 0.0, 0.0);
	glVertex3f(-0.98, 0.0, 0.05);
	glVertex3f(-0.98, 0.25, 0.05);
	glEnd();


	//-------------black drawer---------

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-0.95, 0.06, 0.8);
	glScalef(1.1, 0.4, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(1.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-0.92, 0.06, 0.8);
	glScalef(0.56, 0.15, 1.45);
	glutSolidCube(0.1);
	glPopMatrix();

	//---------bed(1st layer)------------
	glColor3f(0.15, 0.11, 0.11);
	glPushMatrix();
	glTranslatef(-0.7, 0.01, 0.36);
	glScalef(6, 0.25, 5);
	glutSolidCube(0.1);
	glPopMatrix();
	//----------2nd layer)---------------
	glColor3f(0.17, 0.13, 0.12);
	glPushMatrix();
	glTranslatef(-0.7, 0.04, 0.36);
	glScalef(6, 0.3, 5.2);
	glutSolidCube(0.1);
	glPopMatrix();

	//----------bed-----------

	glColor3f(0.84, 0.72, 0.69);
	glPushMatrix();
	glTranslatef(-0.7, 0.065, 0.36);
	glScalef(5.9, 0.3, 5.1);
	glutSolidCube(0.1);
	glPopMatrix();
	//--------------bedsheet----------------
	glColor3f(0.86, 0.52, 0.55);
	glPushMatrix();
	glTranslatef(-0.5, 0.069, 0.36);
	glScalef(2.5, 0.3, 5.2);
	glutSolidCube(0.1);
	glPopMatrix();


	//--------------pillow---------------

	glColor3f(0.86, 0.52, 0.55);
	glPushMatrix();
	glTranslatef(-0.9, 0.1, 0.5);
	glScalef(1, 0.2, 1.5);
	glRotatef(45, 0, 0, 1);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.86, 0.52, 0.55);
	glPushMatrix();
	glTranslatef(-0.9, 0.1, 0.25);
	glScalef(1, 0.2, 1.5);
	glRotatef(45, 0, 0, 1);
	glutSolidCube(0.1);
	glPopMatrix();
	//-------light-------

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-0.98, 0.3, -0.1);
	//glScalef(2.5, 0.3, 5.2);
	glRotatef(90, 1, 0, 0);
	glutSolidCone(0.03, 0.07, 100, 100);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-0.98, 0.3, 0.8);
	//glScalef(2.5, 0.3, 5.2);
	glRotatef(90, 1, 0, 0);
	glutSolidCone(0.03, 0.07, 100, 100);
	glPopMatrix();
}
void greywall()
{
	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(-0.55, 0.32, 0.-0.9);
	glutSolidCube(0.08);
	glPopMatrix();

	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(-0.42, 0.28, 0. - 0.9);
	glutSolidCube(0.08);
	glPopMatrix();

	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(-0.31, 0.32, 0. - 0.9);
	glutSolidCube(0.08);
	glPopMatrix();

	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(-0.2, 0.28, 0. - 0.9);
	glutSolidCube(0.08);
	glPopMatrix();
}
void box()
{


//----------TV -------------
	glColor3f(0.18, 0.12, 0.13);
	glPushMatrix();
	glTranslatef(0.46, 0.25, 0.5);
	glScalef(0.1, 1.5, 3);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.47, 0.25, 0.5);
	glScalef(0.1, 1.55, 3.3);
	glutSolidCube(0.1);
	glPopMatrix();


	//--------------table-----------

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.46, 0.1, 0.5);
	glScalef(0.4, 0.4, 3);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(1.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.455, 0.1, 0.5);
	glScalef(0.41, 0.2, 2.9);
	glutSolidCube(0.1);
	glPopMatrix();

	//-----------speaker-----------

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.47, 0.08, 0.2);
	glScalef(0.1, 1.55, 0.7);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.47, 0.08, 0.8);
	glScalef(0.1, 1.55, 0.7);
	glutSolidCube(0.1);
	glPopMatrix();

	//--------cube-------------


	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(0.47, 0.4, 0.1);
	glutSolidCube(0.08);
	glPopMatrix();

	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(0.47, 0.35, 0.2);
	glutSolidCube(0.08);
	glPopMatrix();
}
void sofa()
{


	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(-0.32, 0.065, -0.3);
	glScalef(4, 0.65, 1.7);
	glutSolidCube(0.1);
	glPopMatrix();

	//------base-black-----------
	glColor3f(0.09, 0.09, 0.09);
	glPushMatrix();
	glTranslatef(-0.32, 0.015, -0.3);
	glScalef(4.1, 0.15, 1.71);
	glutSolidCube(0.1);
	glPopMatrix();

	//-------back
	glColor3f(0.19, 0.19, 0.19);
	glPushMatrix();
	glTranslatef(-0.32, 0.1, -0.36);
	glScalef(4.1, 1.3, 0.61);
	glutSolidCube(0.1);
	glPopMatrix();

	//---------seat----------

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-0.41, 0.092, -0.25);
	glScalef(1.7, 0.15, 1.0);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-0.21, 0.092, -0.25);
	glScalef(1.7, 0.15, 1.0);
	glutSolidCube(0.1);
	glPopMatrix();

	//------side rest--------

	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(-0.55, 0.065, -0.3);
	glScalef(1, 1.4, 1.1);
	glutSolidCube(0.1);
	glPopMatrix();

}

void wardrobe()
{
	//--------------wall--------
	glColor3f(0.47, 0.35, 0.26);
	glPushMatrix();
	glTranslatef(-0.99, 0.25, -0.8);
	glScalef(0.5, 5, 4);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.47, 0.35, 0.26);
	glPushMatrix();
	glTranslatef(0.99, 0.25, -0.8);
	glScalef(0.5, 5, 4);
	glutSolidCube(0.1);
	glPopMatrix();

	//-----------top-------------

	glColor3f(0.47, 0.35, 0.26);
	glPushMatrix();
	glTranslatef(0.0, 0.5, -0.8);
	glScalef(20, 0.5, 4);
	glutSolidCube(0.1);
	glPopMatrix();

	//-----------wardrobe-------------
	glColor3f(0.38, 0.27, 0.19);
	glPushMatrix();
	glTranslatef(0.4, 0.2, -0.9);
	glScalef(8, 4, 2);
	glutSolidCube(0.1);
	glPopMatrix();

	//----------design--------------

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.1, 0.2, -0.89);
	glScalef(1.5, 3.5, 2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.4, 0.2, -0.89);
	glScalef(1.5, 3.5, 2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.6, 0.3, -0.89);
	glScalef(0.7, 1.5, 2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.7, 0.3, -0.89);
	glScalef(0.7, 1.5, 2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.47, 0.35, 0.26);
	glPushMatrix();
	glTranslatef(0.65, 0.1, -0.89);
	glScalef(1.8, 1.5, 2);
	glutSolidCube(0.1);
	glPopMatrix();
}
void room1()
{

	 /*glColor3f(1.0, 0.0, 1.0);
	glPushMatrix();
	glutSolidCube(2);
	glPopMatrix();*/
	//--------------floor-----------------
	glColor3f(0.85, 0.85, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.0, -1);
	glVertex3f(1, 0.0, 1);
	glVertex3f(-1, 0.0, 1);
	glVertex3f(-1, 0.0, -1);
	glEnd();

	lines();


	//--------wall(back)grey1----------------
	//glColor3f(0.54, 0.54, 0.52);
	glColor3f(0.69, 0.58, 0.56);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.5, -1);
	glVertex3f(1, 0.0, -1);
	glVertex3f(-1, 0.0, -1);
	glVertex3f(-1, 0.5, -1);
	glEnd();


	//----------wall(right)------
	glColor3f(0.69, 0.58, 0.56);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.5, -1);
	glVertex3f(1, 0.0, -1);
	glVertex3f(1, 0.0, 1);
	glVertex3f(1, 0.5, 1);
	glEnd();



	//----------wall(left)red------
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.5, -1);
	glVertex3f(-1, 0.0, -1);
	glVertex3f(-1, 0.0, 1);
	glVertex3f(-1, 0.5, 1);
	glEnd();



	//----------roof------
	glColor3f(0.80, 0.60, 0.58);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.5, -1);
	glVertex3f(-1, 0.5, 1);
	glVertex3f(1, 0.5, 1);
	glVertex3f(1, 0.5, -1);
	glEnd();

	//--------wall(back)grey1----------------
	glColor3f(0.69, 0.58, 0.56);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.5, 1);
	glVertex3f(1, 0.27, 1);
	glVertex3f(-1, 0.27, 1);
	glVertex3f(-1, 0.5, 1);
	glEnd();

	glColor3f(0.69, 0.58, 0.56);
	glBegin(GL_POLYGON);
	glVertex3f(0.2, 0.0, 1);
	glVertex3f(0.2, 0.27, 1);
	glVertex3f(-1, 0.27, 1);
	glVertex3f(-1, 0.0, 1);
	glEnd();

	glColor3f(0.69, 0.58, 0.56);
	glBegin(GL_POLYGON);
	glVertex3f(0.4, 0.0, 1);
	glVertex3f(0.4, 0.27, 1);
	glVertex3f(1, 0.27, 1);
	glVertex3f(1, 0.0, 1);
	glEnd();
//----------------door main-------------
	glColor3f(0.01, 0.012, 0.012);
	glPushMatrix();
	glTranslatef(0.15, 0.135, 1.055);
	glRotatef(45+oo, 0, 1, 0);
	glScalef(1.5, 2.7, 0.1);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.901, 0.9012, 0.9012);
	glPushMatrix();
	glTranslatef(0.15, 0.135, 1.055);
	glRotatef(45 + oo, 0, 1, 0);
	glScalef(1.2, 2.2, 0.11);
	glutSolidCube(0.1);
	glPopMatrix();

	//--border------

	glColor3f(0.38, 0.27, 0.19);
	glBegin(GL_POLYGON);
	glVertex3f(0.4, 0.285, 1.0101);
	glVertex3f(0.4, 0.27, 1.0101);
	glVertex3f(0.2, 0.27, 1.0101);
	glVertex3f(0.2, 0.285, 1.0101);
	glEnd();

	glColor3f(0.38, 0.27, 0.19);
	glBegin(GL_POLYGON);
	glVertex3f(0.395, 0.0, 1.0101);
	glVertex3f(0.395, 0.285, 1.0101);
	glVertex3f(0.41, 0.285, 1.0101);
	glVertex3f(0.41, 0.0, 1.0101);
	glEnd();



	glColor3f(0.38, 0.27, 0.19);
	glBegin(GL_POLYGON);
	glVertex3f(0.2, 0.0, 1.0101);
	glVertex3f(0.2, 0.285, 1.0101);
	glVertex3f(0.185, 0.285, 1.0101);
	glVertex3f(0.185, 0.0, 1.0101);
	glEnd();

	// back border-----

	glColor3f(0.38, 0.27, 0.19);
	glBegin(GL_POLYGON);
	glVertex3f(0.4, 0.285, 0.999);
	glVertex3f(0.4, 0.27, 0.999);
	glVertex3f(0.2, 0.27, 0.999);
	glVertex3f(0.2, 0.285, 0.999);
	glEnd();

	glColor3f(0.38, 0.27, 0.19);
	glBegin(GL_POLYGON);
	glVertex3f(0.395, 0.0, 0.999);
	glVertex3f(0.395, 0.285, 0.999);
	glVertex3f(0.41, 0.285, 0.999);
	glVertex3f(0.41, 0.0, 0.999);
	glEnd();



	glColor3f(0.38, 0.27, 0.19);
	glBegin(GL_POLYGON);
	glVertex3f(0.2, 0.0, 0.999);
	glVertex3f(0.2, 0.285, 0.999);
	glVertex3f(0.185, 0.285, 0.999);
	glVertex3f(0.185, 0.0, 0.999);
	glEnd();





//-------------tv walll------
	glColor3f(0.53, 0.12, 0.12);
	glPushMatrix();
	glTranslatef(0.74, 0.25,0.5 );
	glScalef(5.1, 5, 9.99);
	glutSolidCube(0.1);
	glPopMatrix();

//---------door------------

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.74, 0.18, -0.005);
	glScalef(2, 3.5, 0.2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.47, 0.35, 0.26);
	glPushMatrix();
	glTranslatef(0.74, 0.18, 0.0);
	glScalef(2.1, 3.6, 0.2);
	glutSolidCube(0.1);
	glPopMatrix();

	//---------roof lamp--------------------------------

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-0.2, 0.5, 0.0);
	glRotatef(90, 1, 0, 0);
	glutSolidTorus(0.03, 0.41,100, 100);
	glPopMatrix();





	redwall();

	greywall();

	box();

	wardrobe();

	sofa();

	glFlush();

}

//-----------------------------------------room2----------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
void text()
{



	if (xx1)
	{



		output(-0.450, 0.400, "DEPARTMENT OF COMPUTER SCIENCE & ENGINEERING");

		output(-0.999, -0.500, "Press 'O' to open the door");
		glFlush();


	}






}
void r2floor()
{

	//---------------stair-----------
	glColor3f(0.891, 0.891, 0.85);

	glPushMatrix();
	glTranslatef(2.74, 0.082, 2);
	glScalef(5.5, 1.75, 20);
	glutSolidCube(0.1);
	glPopMatrix();

	//glColor3f(0.91, 0.91, 0.89);

	glPushMatrix();
	glTranslatef(2.35, 0.082, 1.75);
	glScalef(2.5, 1.75, 15);
	glutSolidCube(0.1);
	glPopMatrix();

//------------------step-----------------------------

	glColor3f(0.98, 0.98, 0.98);
	glPushMatrix();
	glTranslatef(2.42, 0.062, 2.743);
	glScalef(1.0, 1.35, 5.1);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.98, 0.98, 0.98);
	glPushMatrix();
	glTranslatef(2.32, 0.032, 2.743);
	glScalef(1.0, 0.8, 5.1);
	glutSolidCube(0.1);
	glPopMatrix();


	//----------------black cover

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(2.42, 0.127, 2.743);
	glScalef(0.98, 0.2, 5.1);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(2.32, 0.069, 2.743);
	glScalef(0.98, 0.2, 5.1);
	glutSolidCube(0.1);
	glPopMatrix();

//------------------------marbel-----------------
	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 2.9);
	glScalef(13, 0.05, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

		//--
	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 2.6971);
	glScalef(13, 0.05, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	//--
	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 2.4912);
	glScalef(13, 0.05, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 2.286);
	glScalef(13, 0.05, 0.8);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 2.082);
	glScalef(13, 0.05, 0.8);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 1.876);
	glScalef(13, 0.05, 0.8);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 1.67);
	glScalef(13, 0.05, 0.8);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 1.465);
	glScalef(13, 0.05, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 1.26);
	glScalef(13, 0.05, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 1.089);
	glScalef(13, 0.05, 1.2);
	glutSolidCube(0.1);
	glPopMatrix();
	//--------------------up-------------
	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(2.92, 0.177, 2.04);
	glScalef(1.2, 0.05, 19.3);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(2.74, 0.177, 2.04);
	glScalef(1.2, 0.05, 19.3);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(2.56, 0.177, 2.04);
	glScalef(1.2, 0.05, 19.3);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(2.38, 0.177, 1.78);
	glScalef(1.2, 0.05, 13.6);
	glutSolidCube(0.1);
	glPopMatrix();


}
void r2wardrobe()
{
	//------------black border---------------
	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.5, 0.15, 1.10);
	glScalef(7, 4, 2);
	glutSolidCube(0.1);
	glPopMatrix();

	//-----------------------inner-----------
	//white
	glColor3f(0.990, 0.9901, 0.9909);
	glPushMatrix();
	glTranslatef(1.31, 0.1, 1.126);
	glScalef(3, 1.5, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.990, 0.9901, 0.9909);
	glPushMatrix();
	glTranslatef(1.65, 0.1, 1.126);
	glScalef(3, 1.5, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	//-------blue
	glColor3f(0.520, 0.7601, 0.8009);
	glPushMatrix();
	glTranslatef(1.65, 0.2, 1.126);
	glScalef(3, 0.3, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.520, 0.7601, 0.8009);
	glPushMatrix();
	glTranslatef(1.31, 0.2, 1.126);
	glScalef(3, 0.3, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	//purple
	glColor3f(0.29, 0.20, 0.36);
	glPushMatrix();
	glTranslatef(1.31, 0.24, 1.126);
	glScalef(3, 0.3, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.29, 0.20, 0.36);
	glPushMatrix();
	glTranslatef(1.65, 0.24, 1.126);
	glScalef(3, 0.3, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	//blue
	glColor3f(0.520, 0.7601, 0.8009);
	glPushMatrix();
	glTranslatef(1.31, 0.28, 1.126);
	glScalef(3, 0.3, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.520, 0.7601, 0.8009);
	glPushMatrix();
	glTranslatef(1.65, 0.28, 1.126);
	glScalef(3, 0.3, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

}
void r2tv()
{
//---------------tv----------------
	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(2.65, 0.35, 1.00);
	glScalef(2.7, 1.6, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.18, 0.12, 0.13);
	glPushMatrix();
	glTranslatef(2.65, 0.35, 1.01);
	glScalef(2.4, 1.4, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

}

void r2topdesign()
{

	GLUquadricObj *quadratic;
	quadratic = gluNewQuadric();

	glColor3f(0.0+cr, 0.0+cg, 0.0+cb);
	glPushMatrix();
	glTranslatef(1.60, 0.39, 1.95);
	glutSolidSphere(0.04, 100, 100);
	glPopMatrix();

	glColor3f(0.09, 0.09, 0.09);
	glPushMatrix();
	glTranslatef(1.60, 0.47, 1.95);
	glScalef(1, 0.15, 1);
	glutSolidSphere(0.02, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.60, 0.47, 1.95);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, 0.002, 0.002, 0.07, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.60, 0.39, 1.95);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, 0.0415, 0.0415, 0.002, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.60, 0.37, 1.95);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, 0.0355, 0.0345, 0.003, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.60, 0.41, 1.95);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, 0.0355, 0.0345, 0.003, 100, 100);
	glPopMatrix();

}
void r2bed()
{

      GLUquadricObj *quadratic;
	  quadratic = gluNewQuadric();
	 // gluQuadricDrawStyle(quadratic, GLU_FILL);

	  glPushMatrix();
	  glColor3f(0.9, 0.91, 0.99);
	  glTranslatef(1.65, 0.05, 1.95);
	  glRotatef(90, 1, 0, 0);
	 gluCylinder(quadratic, 0.41, 0.41, 0.1, 100, 100);
	 glPopMatrix();

	 //-------------torus--------

	glColor3f(0.9, 0.91, 0.99);
	glPushMatrix();
	glTranslatef(1.65, 0.05, 1.95);
	glScalef(1, 0.001, 1);
	glRotatef(90, 1, 0, 0);
	glutSolidSphere(0.41, 100, 100);
	glPopMatrix();


	//-----------bed---------
	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.60, 0.08, 1.95);
	glScalef(5, 0.4, 4.5);
	glutSolidCube(0.1);
	glPopMatrix();

	//--------pillow----------

	glColor3f(0.99, 0.99, 0.99);
	glPushMatrix();
	glTranslatef(1.73, 0.1, 1.83);
	glScalef(0.85, 0.3, 1.3);
	glRotatef(45, 0, 0, 1);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.99, 0.99, 0.99);
	glPushMatrix();
	glTranslatef(1.73, 0.1, 2.05);
	glScalef(0.85, 0.3, 1.3);
	glRotatef(45, 0, 0, 1);
	glutSolidCube(0.1);
	glPopMatrix();

	//----roof design--------

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(1.60, 0.49, 1.95);
	glScalef(5.5, 0.15, 5);
	glutSolidCube(0.1);
	glPopMatrix();



	r2topdesign();




}
void r2sofa()
{
	glColor3f(0.990, 0.99901, 0.9909);
	glPushMatrix();
	glTranslatef(2.6, 0.21, 1.95);
	glScalef(1.2, 0.6, 2.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.990, 0.99901, 0.9909);
	glPushMatrix();
	glTranslatef(2.735, 0.21, 1.95);
	glScalef(1.2, 0.6, 2.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.07, 0.05, 0.09);
	glPushMatrix();
	glTranslatef(2.735, 0.22, 2.1);
	glScalef(1.2, 1.0, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.07, 0.05, 0.09);
	glPushMatrix();
	glTranslatef(2.6, 0.22, 2.1);
	glScalef(1.2, 1.0, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();
}
void r2glass()
{

	glColor4f(1.0, 1.0, 1.0, 0.4);
	glPushMatrix();
	glTranslatef(2.25, 0.315, 1.73);
	glRotatef(90, 0, 1, 0);
	glScalef(14.5, 3, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.01, 0.01, 0.01);
	glPushMatrix();
	glTranslatef(2.245, 0.315, 2.45);
	glScalef(0.05, 3, 0.2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.01, 0.01, 0.01);
	glPushMatrix();
	glTranslatef(2.245, 0.315, 1.73);
	glScalef(0.05, 3, 0.2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.01, 0.01, 0.01);
	glPushMatrix();
	glTranslatef(2.245, 0.315, 1.03);
	glScalef(0.05, 3, 0.2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.01, 0.01, 0.01);
	glPushMatrix();
	glTranslatef(2.245, 0.4, 1.745);
	glScalef(0.05, 0.08, 14);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.01, 0.01, 0.01);
	glPushMatrix();
	glTranslatef(2.245, 0.43, 1.745);
	glScalef(0.05, 0.08, 14);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.01, 0.01, 0.01);
	glPushMatrix();
	glTranslatef(2.245, 0.37, 1.745);
	glScalef(0.05, 0.08, 14);
	glutSolidCube(0.1);
	glPopMatrix();




}

void room2()
{
	//----------------floor-----------------------
	glColor3f(0.85, 0.85, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.0, 1);
	glVertex3f(3, 0.0, 1);
	glVertex3f(3, 0.0, 3);
	glVertex3f(1, 0.0, 3);
	glEnd();

	//--------------------wall back----------------------
	//glColor3f(0.86, 0.955, 0.95);
	glColor3f(0.29, 0.20, 0.36);
	glBegin(GL_POLYGON);
	glVertex3f(3, 0.0, 1);
	glVertex3f(3, 0.5, 1);
	glVertex3f(3, 0.5, 3);
	glVertex3f(3, 0.0, 3);
	glEnd();

	//---------wall frist----------------
	glColor3f(0.91, 0.955, 0.95);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.0, 1);
	glVertex3f(1, 0.5, 1);
	glVertex3f(3, 0.5, 1);
	glVertex3f(3, 0.0, 1);
	glEnd();

//--------------------wall second--------------
	glColor3f(0.91, 0.955, 0.95);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.0, 3);
	glVertex3f(1, 0.5, 3);
	glVertex3f(3, 0.5, 3);
	glVertex3f(3, 0.0, 3);
	glEnd();

//----------------roof------------
	//glColor3f(0.8, 0.955, 0.95);
	glColor3f(0.26, 0.26, 0.26);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.5, 1);
	glVertex3f(3, 0.5, 1);
	glVertex3f(3, 0.5, 3);
	glVertex3f(1, 0.5, 3);
	glEnd();

	//-----------------entrane--------------

	glColor3f(0.5, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(0.99, 0.5, 1);
	glVertex3f(0.99, 0.5, 3);
	glVertex3f(0.99, 0.27, 3);
	glVertex3f(0.99, 0.27, 1);
	glEnd();



	glColor3f(0.5, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(0.99, 0.27, 2.8);
	glVertex3f(0.99, 0.27, 3);
	glVertex3f(0.99, 0.0, 3);
	glVertex3f(0.99, 0.0, 2.8);
	glEnd();
	//inner purple
	glColor3f(0.29, 0.20, 0.36);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.5, 1);
	glVertex3f(1, 0.5, 3);
	glVertex3f(1, 0.27, 3);
	glVertex3f(1, 0.27, 1);
	glEnd();

	glColor3f(0.29, 0.20, 0.36);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.27, 1);
	glVertex3f(1, 0.27, 2.6);
	glVertex3f(1, 0.0, 2.6);
	glVertex3f(1, 0.0, 1);
	glEnd();

	glColor3f(0.29, 0.20, 0.36);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.27, 2.8);
	glVertex3f(1, 0.27, 3);
	glVertex3f(1, 0.0, 3);
	glVertex3f(1, 0.0, 2.8);
	glEnd();


	//-------door main------------

	glColor3f(0.01, 0.012, 0.012);
	glPushMatrix();
	glTranslatef(0.94, 0.135, 2.56);
	glRotatef(135, 0, 1, 0);
	glScalef(1.5, 2.7, 0.1);
	glutSolidCube(0.1);
	glPopMatrix();
	r2glass();

	glColor3f(0.901, 0.9012, 0.9012);
	glPushMatrix();
	glTranslatef(0.94, 0.135, 2.56);
	glRotatef(135, 0, 1, 0);
	glScalef(1.2, 2.4, 0.11);
	glutSolidCube(0.1);
	glPopMatrix();
	r2glass();

	r2floor();

	r2bed();
	r2wardrobe();
	r2sofa();
	r2tv();

}
void mtv()
{
	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.96, 0.2, 1.73);
	glScalef(0.1, 4, 7);
	glutSolidCube(0.1);
	glPopMatrix();

	//shadow

	glColor3f(0.0, 0.01, 0.0);
	glPushMatrix();
	glTranslatef(0.97, 0.2, 1.73);
	glScalef(0.001, 4, 7);
	glutSolidCube(0.1);
	glPopMatrix();

	//line

	glColor3f(0.990, 0.99901, 0.9909);
	glPushMatrix();
	glTranslatef(0.97, 0.425, 1.8);
	glScalef(0.001, 0.05, 15);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.990, 0.99901, 0.9909);
	glPushMatrix();
	glTranslatef(0.97, 0.325, 1.8);
	glScalef(0.001, 0.05, 15);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.990, 0.99901, 0.9909);
	glPushMatrix();
	glTranslatef(0.97, 0.225, 1.8);
	glScalef(0.001, 0.05, 15);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.990, 0.99901, 0.9909);
	glPushMatrix();
	glTranslatef(0.97, 0.125, 1.8);
	glScalef(0.001, 0.05, 15);
	glutSolidCube(0.1);
	glPopMatrix();


	//tv

	glColor3f(0.0990, 0.099901, 0.09909);
	glPushMatrix();
	glTranslatef(0.9596, 0.2, 1.73);
	glScalef(0.1, 1.5, 3);
	glutSolidCube(0.1);
	glPopMatrix();

	// speaker

	glColor3f(0.0990, 0.099901, 0.09909);
	glPushMatrix();
	glTranslatef(0.9596, 0.075, 2.0);
	glScalef(0.6, 1.5, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.64, 0.64, 0.64);
	glPushMatrix();
	glTranslatef(0.9599, 0.075, 2.0);
	glScalef(0.6, 1.52, 0.52);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.0990, 0.099901, 0.09909);
	glPushMatrix();
	glTranslatef(0.9596, 0.075, 1.47);
	glScalef(0.6, 1.5, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.64, 0.64, 0.64);
	glPushMatrix();
	glTranslatef(0.9599, 0.075, 1.47);
	glScalef(0.6, 1.52, 0.52);
	glutSolidCube(0.1);
	glPopMatrix();
}
void msofa()
{
	//base
	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.0, 0.002, 1.7);
	glScalef(1.2, 0.5, 3);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.0, 0.002, 2.1);
	glScalef(1.2, 0.5, 3);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.065, 0.002, 2.2);
	glScalef(2.5, 0.5, 1.2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.065, 0.002, 1.6);
	glScalef(2.5, 0.5, 1.2);
	glutSolidCube(0.1);
	glPopMatrix();

	//layer 2

	glColor3f(0.85, 0.85, 0.85);
	glPushMatrix();
	glTranslatef(0.0, 0.05, 1.7);
	glScalef(1.2, 0.5, 3);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.85, 0.85, 0.85);
	glPushMatrix();
	glTranslatef(0.0, 0.05, 2.1);
	glScalef(1.2, 0.5, 3);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.85, 0.85, 0.85);
	glPushMatrix();
	glTranslatef(0.065, 0.05, 2.2);
	glScalef(2.5, 0.5, 1.2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.85, 0.85, 0.85);
	glPushMatrix();
	glTranslatef(0.065, 0.05, 1.6);
	glScalef(2.5, 0.5, 1.2);
	glutSolidCube(0.1);
	glPopMatrix();

	//rest

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.06, 0.05, 1.7);
	glScalef(0.4, 1.5, 3.1);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.06, 0.05, 2.115);
	glScalef(0.4, 1.5, 3.1);
	glutSolidCube(0.1);
	glPopMatrix();

	//pillow

	glColor3f(0.5, 0.8, 0.85);
	glPushMatrix();
	glTranslatef(-0.03, 0.115, 1.7);
	glScalef(0.2, 0.5, 0.5);
	glRotatef(45, 1, 0, 0);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.5, 0.8, 0.85);
	glPushMatrix();
	glTranslatef(-0.03, 0.115, 1.8);
	glScalef(0.2, 0.5, 0.5);
	glRotatef(45, 1, 0, 0);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.5, 0.8, 0.85);
	glPushMatrix();
	glTranslatef(-0.03, 0.115, 1.6);
	glScalef(0.2, 0.5, 0.5);
	glRotatef(45, 1, 0, 0);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.5, 0.8, 0.85);
	glPushMatrix();
	glTranslatef(-0.03, 0.115, 2.0);
	glScalef(0.2, 0.5, 0.5);
	glRotatef(45, 1, 0, 0);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.5, 0.8, 0.85);
	glPushMatrix();
	glTranslatef(-0.03, 0.115, 2.1);
	glScalef(0.2, 0.5, 0.5);
	glRotatef(45, 1, 0, 0);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.5, 0.8, 0.85);
	glPushMatrix();
	glTranslatef(-0.03, 0.115, 2.2);
	glScalef(0.2, 0.5, 0.5);
	glRotatef(45, 1, 0, 0);
	glutSolidCube(0.1);
	glPopMatrix();

	//table

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(0.3, 0.045, 1.9);
	glScalef(1.5, 0.8, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.85, 0.85, 0.85);
	glPushMatrix();
	glTranslatef(0.3, 0.005, 1.9);
	glScalef(1.55, 0.2, 1.55);
	glutSolidCube(0.1);
	glPopMatrix();

	//floor

	glColor3f(0.05, 0.08, 0.085);
	glPushMatrix();
	glTranslatef(0.15, 0.0005, 1.9);
	glScalef(7, 0.1, 10);
	glutSolidCube(0.1);
	glPopMatrix();

}
void mdesign()
{
	//1st row
	//red
	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.47, 0.4, 1.04);
	glScalef(1, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.53, 0.12, 0.12);
	glPushMatrix();
	glTranslatef(-0.47, 0.4, 1.041);
	glScalef(0.8, 0.8, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	//black

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.3, 0.4, 1.04);
	glScalef(1, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.053, 0.012, 0.012);
	glPushMatrix();
	glTranslatef(-0.3, 0.4, 1.041);
	glScalef(0.8, 0.8, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	//2nd row

	//black

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.47, 0.25, 1.04);
	glScalef(1, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.053, 0.012, 0.012);
	glPushMatrix();
	glTranslatef(-0.47, 0.25, 1.041);
	glScalef(0.8, 0.8, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	//red

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.3, 0.25, 1.04);
	glScalef(1, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.53, 0.12, 0.12);
	glPushMatrix();
	glTranslatef(-0.3, 0.25, 1.041);
	glScalef(0.8, 0.8, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	//3rd row

	//red
	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.47, 0.1, 1.04);
	glScalef(1, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.53, 0.12, 0.12);
	glPushMatrix();
	glTranslatef(-0.47, 0.1, 1.041);
	glScalef(0.8, 0.8, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();
	//black

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.3, 0.1, 1.04);
	glScalef(1, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.053, 0.012, 0.012);
	glPushMatrix();
	glTranslatef(-0.3, 0.1, 1.041);
	glScalef(0.8, 0.8, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();


	//big

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.7, 0.25, 1.04);
	glScalef(2, 2, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.095, 0.095, 0.095);
	glPushMatrix();
	glTranslatef(-0.7, 0.25, 1.041);
	glScalef(1.7, 1.7, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.53, 0.12, 0.12);
	glPushMatrix();
	glTranslatef(-0.7, 0.25, 1.042);
	glScalef(1.4, 1.4, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.7, 0.25, 1.043);
	glScalef(1.1, 1.1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();
	//line

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.32, 0.25, 1.04);
	glScalef(0.03, 5, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.28, 0.25, 1.04);
	glScalef(0.03, 5, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.45, 0.25, 1.04);
	glScalef(0.03, 5, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.49, 0.25, 1.04);
	glScalef(0.03, 5, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

}
void mtop()
{
	glColor3f(0.34, 0.25, 0.13);
	glPushMatrix();
	glTranslatef(0.0, 0.49, 1.9);
	glScalef(3, 0.3, 5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9985, 0.9985, 0.9985);
	glPushMatrix();
	glTranslatef(0.0, 0.488, 1.9);
	glScalef(2.7, 0.3, 4.5);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.34, 0.25, 0.13);
	glPushMatrix();
	glTranslatef(0.35, 0.49, 1.9);
	glScalef(3, 0.3, 5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9985, 0.9985, 0.9985);
	glPushMatrix();
	glTranslatef(0.35, 0.488, 1.9);
	glScalef(2.7, 0.3, 4.5);
	glutSolidCube(0.1);
	glPopMatrix();
}
void mid()
{
	//cyan

	glColor3f(0.5, 0.8, 0.85);
	//glColor3f(0.44, 0.65, 0.62);
	glBegin(GL_POLYGON);
	glVertex3f(0.985, 0.5, 1);
	glVertex3f(0.985, 0.5, 2.6);
	glVertex3f(0.985, 0.0, 2.6);
	glVertex3f(0.985, 0.0, 1);
	glEnd();


	glColor3f(0.85, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.0, 1);
	glVertex3f(1, 0.0, 1);
	glVertex3f(1, 0.0, 3);
	glVertex3f(-1, 0.0, 3);
	glEnd();

	glColor3f(0.85, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.5, 1);
	glVertex3f(1, 0.5, 1);
	glVertex3f(1, 0.5, 3);
	glVertex3f(-1, 0.5, 3);
	glEnd();

	//white wall

	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.5, 1.01);
	glVertex3f(1, 0.27, 1.01);
	glVertex3f(-1, 0.27, 1.01);
	glVertex3f(-1, 0.5, 1.01);
	glEnd();

	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);
	glVertex3f(0.2, 0.0, 1.01);
	glVertex3f(0.2, 0.27, 1.01);
	glVertex3f(-1, 0.27, 1.01);
	glVertex3f(-1, 0.0, 1.01);
	glEnd();

	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);
	glVertex3f(0.4, 0.0, 1.01);
	glVertex3f(0.4, 0.27, 1.01);
	glVertex3f(1, 0.27, 1.01);
	glVertex3f(1, 0.0, 1.01);
	glEnd();

	//black background

	glColor3f(0.09, 0.09, 0.09);
	glBegin(GL_POLYGON);
	glVertex3f(-0.2, 0.0, 1.011);
	glVertex3f(-0.2, 0.5, 1.011);
	glVertex3f(-0.9, 0.5, 1.011);
	glVertex3f(-0.9, 0.0, 1.011);
	glEnd();

	//------entrance--------


	glColor3f(0.95, 0.95, 0.95);
	glBegin(GL_POLYGON);
	glVertex3f(-0.7, 0.0, 3);
	glVertex3f(-1, 0.0, 3);
	glVertex3f(-1, 0.5, 3);
	glVertex3f(-0.7, 0.5, 3);
	glEnd();

	glColor3f(0.95, 0.95, 0.95);
	glBegin(GL_POLYGON);
	glVertex3f(-0.4, 0.0, 3);
	glVertex3f(1, 0.0, 3);
	glVertex3f(1, 0.5, 3);
	glVertex3f(-0.4, 0.5, 3);
	glEnd();

	glColor3f(0.95, 0.95, 0.95);
	glBegin(GL_POLYGON);
	glVertex3f(-0.7, 0.3, 3);
	glVertex3f(-0.4, 0.3, 3);
	glVertex3f(-0.4, 0.5, 3);
	glVertex3f(-0.7, 0.5, 3);
	glEnd();

	mtop();
	mtv();
	mdesign();
	msofa();

}
void kbox()
{
	//--front-----
	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-2.7, 0.17, 1.585);
	glScalef(5, 3.5, 1.6);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-1.7, 0.17, 1.585);
	glScalef(5, 3.5, 1.6);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.85,0.69, 0.35);
	glPushMatrix();
	glTranslatef(-2.2, 0.11, 1.585);
	glScalef(5, 2.5, 1.6);
	glutSolidCube(0.1);
	glPopMatrix();

	//oven

	glColor3f(0.58, 0.58, 0.58);
	glPushMatrix();
	glTranslatef(-2.2, 0.07, 1.68);
	glScalef(1.93, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.058, 0.058, 0.058);
	glPushMatrix();
	glTranslatef(-2.2, 0.07, 1.681);
	glScalef(1.92, 0.7, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.58, 0.58, 0.58);
	glPushMatrix();
	glTranslatef(-2.2, 0.18, 1.68);
	glScalef(1.93, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.058, 0.058, 0.058);
	glPushMatrix();
	glTranslatef(-2.2, 0.18, 1.681);
	glScalef(1.92, 0.7, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.58, 0.58, 0.58);
	glPushMatrix();
	glTranslatef(-2.2, 0.18, 1.682);
	glScalef(1.5, 0.4, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();
	//----back-----------------

	glColor3f(0.85, 0.81, 0.72);
	glPushMatrix();
	glTranslatef(-2.9, 0.06, 2.25);
	glScalef(2, 2, 10);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.9, 0.166, 2.25);
	glScalef(2, 0.1, 10);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.88, 0.00, 2.25);
	glScalef(2, 0.1, 10);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.9, 0.06, 2.755);
	glScalef(2, 2.1, 0.1);
	glutSolidCube(0.1);
	glPopMatrix();

	//-----------side

	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-1.8, 0.06, 2.93);
	glScalef(7, 2, 1.6);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-1.4, 0.06, 2.7);
	glScalef(1.6, 2, 6);
	glutSolidCube(0.1);
	glPopMatrix();

	//white
	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(-1.32, 0.07, 2.71);
	glScalef(0.1, 0.8, 5.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(-1.485, 0.07, 2.71);
	glScalef(0.1, 0.8, 5.5);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(-1.83, 0.07, 2.85);
	glScalef(5.6, 0.8, 0.1);
	glutSolidCube(0.1);
	glPopMatrix();

	//black

	glColor3f(0.05, 0.05, 0.05);
	glPushMatrix();
	glTranslatef(-1.8, 0.165, 2.93);
	glScalef(7, 0.1, 1.75);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.05, 0.05, 0.05);
	glPushMatrix();
	glTranslatef(-1.4, 0.165, 2.7);
	glScalef(1.75, 0.1, 6);
	glutSolidCube(0.1);
	glPopMatrix();



   //------design---------

	//wardrobe lines
	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-1.59, 0.17, 1.672);
	glScalef(0.01, 3.5, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-1.8, 0.17, 1.672);
	glScalef(0.01, 3.5, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-2.6, 0.17, 1.672);
	glScalef(0.01, 3.5, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-2.8, 0.17, 1.672);
	glScalef(0.01, 3.5, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	//black lines
	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-2.1, 0.11, 1.672);
	glScalef(0.01, 2.5, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-2.3, 0.11, 1.672);
	glScalef(0.01, 2.5, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	//handel

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.36, 0.21, 1.671);
	glScalef(0.5, 0.15, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.0, 0.21, 1.671);
	glScalef(0.5, 0.15, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-1.85, 0.3, 1.671);
	glScalef(0.5, 0.15, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-1.535, 0.3, 1.671);
	glScalef(0.5, 0.15, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.65, 0.3, 1.671);
	glScalef(0.5, 0.15, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.55, 0.3, 1.671);
	glScalef(0.5, 0.15, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-1.63, 0.19, 1.671);
	glScalef(0.15, 0.5, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();


	//black wall design
	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-3.0, 0.44, 2.25);
	glScalef(0.1, 1.2, 15);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-3.0, 0.2, 2.88);
	glScalef(0.1, 4, 2.5);
	glutSolidCube(0.1);
	glPopMatrix();

	//----white tabel boxes

	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.79, 0.08, 2.25);
	glScalef(0.05, 0.05, 10);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 2.5);
	glScalef(0.05, 2.1, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 2.25);
	glScalef(0.05, 2.1, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 2.1);
	glScalef(0.05, 2.1, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 1.95);
	glScalef(0.05, 2.1, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();
	//handel

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.13, 2.45);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 2.45);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 2.55);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.13, 2.55);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.13, 2.05);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 2.05);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 2.15);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.13, 2.15);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.13, 1.9);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 1.9);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	/*glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-2.8, 0.4, 2.0);
	glScalef(0.2, 1.4, 2);
	glutSolidCube(0.1);
	glPopMatrix();*/
}
void kchair()
{
	GLUquadricObj *quadratic;
	quadratic = gluNewQuadric();

	glColor3f(0.58, 0.56, 0.56);
	glPushMatrix();
	glTranslatef(-1.8, 0.13, 2.63);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, 0.01, 0.005, 0.125, 100, 100);
	glPopMatrix();


	glColor3f(0.09, 0.09, 0.09);
	glPushMatrix();
	glTranslatef(-1.8, 0.01, 2.63);
	glScalef(1, 0.15, 1);
	glutSolidSphere(0.04, 100, 100);
	glPopMatrix();

	glColor3f(0.85, 0.69, 0.35);
	glPushMatrix();
	glTranslatef(-1.8, 0.15, 2.63);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, 0.05, 0.05, 0.02, 100, 100);
	glPopMatrix();

	glColor3f(0.85, 0.69, 0.35);
	glPushMatrix();
	glTranslatef(-1.8, 0.15, 2.63);
	glScalef(1, 0.15, 1);
	glutSolidSphere(0.05, 100, 100);
	glPopMatrix();

	glColor3f(0.85, 0.69, 0.35);
	glPushMatrix();
	glTranslatef(-1.8, 0.13, 2.63);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, 0.01, 0.009, 0.035, 100, 100);
	glPopMatrix();
}

void kitchen()
{
	//glColor3f(0.85, 0.8, 0.85);
	glColor3f(0.68, 0.54, 0.32);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.0, 3);
	glVertex3f(-3, 0.0, 3);
	glVertex3f(-3, 0.0, 1.5);
	glVertex3f(-1, 0.0, 1.5);
	glEnd();

	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);
	glVertex3f(-3, 0.0, 1.5);
	glVertex3f(-1, 0.0, 1.5);
	glVertex3f(-1, 0.5, 1.5);
	glVertex3f(-3, 0.5, 1.5);
	glEnd();

	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);
	glVertex3f(-3, 0.0, 3);
	glVertex3f(-1, 0.0, 3);
	glVertex3f(-1, 0.5, 3);
	glVertex3f(-3, 0.5, 3);
	glEnd();


	glColor3f(0.85, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.5, 3);
	glVertex3f(-3, 0.5, 3);
	glVertex3f(-3, 0.5, 1.5);
	glVertex3f(-1, 0.5, 1.5);
	glEnd();

	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);
	glVertex3f(-3, 0.0, 1.5);
	glVertex3f(-3, 0.5, 1.5);
	glVertex3f(-3, 0.5, 3);
	glVertex3f(-3, 0.0, 3);
	glEnd();

	//---entrance

	glColor3f(0.75, 0.80, 0.46);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.0, 1.5);
	glVertex3f(-1, 0.5, 1.5);
	glVertex3f(-1, 0.5, 1.85);
	glVertex3f(-1, 0.0, 1.85);
	glEnd();

	glColor3f(0.75, 0.80, 0.46);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.35, 1.5);
	glVertex3f(-1, 0.5, 1.5);
	glVertex3f(-1, 0.5, 3);
	glVertex3f(-1, 0.35, 3);
	glEnd();

	//design

	glColor3f(0.95, 0.98, 0.985);
	glPushMatrix();
	glTranslatef(-0.99, 0.14, 1.66);
	glScalef(0.1, 1, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.95, 0.98, 0.985);
	glPushMatrix();
	glTranslatef(-0.99, 0.275, 1.66);
	glScalef(0.1, 1, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.95, 0.98, 0.985);
	glPushMatrix();
	glTranslatef(-0.99, 0.4, 1.66);
	glScalef(0.1, 1, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	kbox();

	glPushMatrix();
	kchair();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.2, 0.0, 0.0);
	kchair();
	glPopMatrix();
}
void swimming()
{
	glColor3f(0.5, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(-3, 0.0, 1);
	glVertex3f(-3, 0.5, 1);
	glVertex3f(-3, 0.5, 1.5);
	glVertex3f(-3, 0.0, 1.5);
	glEnd();

	glColor3f(0.85, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(-3, 0.0, 1);
	glVertex3f(-3, 0.5, 1);
	glVertex3f(-3, 0.5, -0.5);
	glVertex3f(-3, 0.0, -0.5);
	glEnd();

	glColor3f(0.5, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.0, -0.5);
	glVertex3f(-1, 0.5, -0.5);
	glVertex3f(-3, 0.5, -0.5);
	glVertex3f(-3, 0.0, -0.5);
	glEnd();

	glColor3f(0.85, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.0, -0.5);
	glVertex3f(-1, 0.0, 1);
	glVertex3f(-3, 0.0, 1);
	glVertex3f(-3, 0.0, -0.5);
	glEnd();

}
void maindoor()
{
	//door
	glColor3f(0.095, 0.095, 0.095);
	glBegin(GL_POLYGON);
	glVertex3f(-0.7, 0.3, 3);
	glVertex3f(-0.55-xx, 0.3, 3+zz);
	glVertex3f(-0.55-xx, 0.0, 3+zz);
	glVertex3f(-0.7, 0.0, 3);
	glEnd();

	glColor3f(0.095, 0.095, 0.095);
	glBegin(GL_POLYGON);
	glVertex3f(-0.4, 0.3, 3);
	glVertex3f(-0.55+xx, 0.3, 3+zz);
	glVertex3f(-0.55+xx, 0.0, 3+zz);
	glVertex3f(-0.4, 0.0, 3);
	glEnd();

	//border

	glColor3f(0.23, 0.20, 0.23);
	glBegin(GL_POLYGON);
	glVertex3f(-0.401, 0.3, 3.01);
	glVertex3f(-0.38, 0.3, 3.01);
	glVertex3f(-0.38, 0.0, 3.01);
	glVertex3f(-0.401, 0.0, 3.01);
	glEnd();

	glColor3f(0.23, 0.20, 0.23);
	glBegin(GL_POLYGON);
	glVertex3f(-0.699, 0.3, 3.01);
	glVertex3f(-0.72, 0.3, 3.01);
	glVertex3f(-0.72, 0.0, 3.01);
	glVertex3f(-0.699, 0.0, 3.01);
	glEnd();

	glColor3f(0.23, 0.20, 0.23);
	glBegin(GL_POLYGON);
	glVertex3f(-0.38, 0.299, 3.01);
	glVertex3f(-0.72, 0.299, 3.01);
	glVertex3f(-0.72, 0.32, 3.01);
	glVertex3f(-0.38, 0.32, 3.01);
	glEnd();

	if (xx1)
	{


		//door design

		glColor3f(0.35, 0.34, 0.35);
		glBegin(GL_POLYGON);
		glVertex3f(-0.65  , 0.2, 3.01 );
		glVertex3f(-0.6 , 0.2, 3.01 );
		glVertex3f(-0.6 , 0.1, 3.01);
		glVertex3f(-0.65  , 0.1, 3.01 );
		glEnd();

		glColor3f(0.35, 0.34, 0.35);
		glBegin(GL_POLYGON);
		glVertex3f(-0.45, 0.2, 3.01);
		glVertex3f(-0.5, 0.2, 3.01);
		glVertex3f(-0.5, 0.1, 3.01);
		glVertex3f(-0.45, 0.1, 3.01);
		glEnd();


		//line

		glColor3f(0.9095, 0.9095, 0.9095);
		glBegin(GL_POLYGON);
		glVertex3f(-0.45, 0.099, 3.01);
		glVertex3f(-0.55, 0.099, 3.01);
		glVertex3f(-0.55, 0.1, 3.01);
		glVertex3f(-0.45, 0.1, 3.01);
		glEnd();

		glColor3f(0.9095, 0.9095, 0.9095);
		glBegin(GL_POLYGON);
		glVertex3f(-0.45, 0.3, 3.02);
		glVertex3f(-0.449, 0.3, 3.02);
		glVertex3f(-0.449, 0.05, 3.02);
		glVertex3f(-0.45, 0.05, 3.02);
		glEnd();

		glColor3f(0.9095, 0.9095, 0.9095);
		glBegin(GL_POLYGON);
		glVertex3f(-0.65, 0.2, 3.02);
		glVertex3f(-0.55, 0.2, 3.02);
		glVertex3f(-0.55, 0.201, 3.02);
		glVertex3f(-0.65, 0.201, 3.02);
		glEnd();

		glColor3f(0.9095, 0.9095, 0.9095);
		glBegin(GL_POLYGON);
		glVertex3f(-0.65, 0.0, 3.02);
		glVertex3f(-0.651, 0.0, 3.02);
		glVertex3f(-0.651, 0.25, 3.02);
		glVertex3f(-0.65, 0.25, 3.02);
		glEnd();


	}

}
void outercover()
{

	glColor3f(0.095, 0.095, 0.095);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.0, 3);
	glVertex3f(-1 , 0.5, 3 );
	glVertex3f(-1 , 0.5, 4);
	glVertex3f(-1, 0.0, 4);
	glEnd();

	glColor3f(0.095, 0.095, 0.095);
	glBegin(GL_POLYGON);
	glVertex3f(-3, 0.52, 3);
	glVertex3f(-3, 0.52, -1);
	glVertex3f(3, 0.52, -1);
	glVertex3f(3, 0.52, 3);
	glEnd();

	glColor3f(0.095, 0.095, 0.095);
	glBegin(GL_POLYGON);
	glVertex3f(-3, -0.02, 2.5);
	glVertex3f(-3, -0.02, -1);
	glVertex3f(3, -0.02, -1);
	glVertex3f(3, -0.02, 2.5);
	glEnd();


}
void Shouse()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	//gluLookAt(viewer[0], viewer[1], viewer[2], lat[0], lat[1], lat[2], 0.0, 1.0, 0.0);
	gluLookAt(viewer[0], viewer[1], viewer[2], viewer[0] + lx, lat[1], viewer[2]+lz, 0.0, 1.0, 0.0);
	//gluLookAt(0, 1, 0, 0, 0, 0, 0.0f, 0.0f, 1.0f);

	glPushMatrix();
	glTranslatef(0.0, 0.2, 3.2);
	glScalef(0.5, 0.5, 0.0);
	text();
	glPopMatrix();

	outercover();
	maindoor();
	room1();
	room2();
	kitchen();
	swimming();
	mid();
	glutSwapBuffers();
}
void Skeys(unsigned char key, int x, int y)
{
	if (key == 'x')viewer[0] -= 0.1;
	if (key == 'X')viewer[0] += 0.1;
	if (key == 'y')viewer[1] -= 0.1;
	if (key == 'Y')viewer[1] += 0.1;
	if (key == 'z')viewer[2] -= 0.1;
	if (key == 'Z')viewer[2] += 0.1;
	if (key == 'o') doort(0);
/*	if (key == 'p')
	{
		tf(0);
	}*/
	glutPostRedisplay();
}

void specialKey(int key, int x, int y) {

	int q = viewer[0];
	int w = viewer[1];
	int e = viewer[2];
	float fraction = 0.1f;

	switch (key) {
	case GLUT_KEY_LEFT:
		sangle -= 0.02f;
		lx = sin(sangle);
		lz = -cos(sangle);
		break;
	case GLUT_KEY_RIGHT:
		sangle += 0.02f;
		lx = sin(sangle);
		lz = -cos(sangle);
		break;
	case GLUT_KEY_UP:
	/*	if ((q<1 && q>-1))
		{
		//if(w<0.5 && w >0.0)
		{
			if (e<=1 && e>-1)

		{*/
			Sviewer[0] += lx * fraction;
			Sviewer[2] += lz * fraction;
	/*	}
		}
		}
		else
		{
			Sviewer[0] = 0.0;
			Sviewer[1] = 0.3;
			Sviewer[2] = 1.0;

			lat[0] = 0.0 ;
			lat[1] = 0.0;
			lat[2] = 0.0;
		}*/
		break;
	case GLUT_KEY_DOWN:
		Sviewer[0] -= lx * fraction;
		Sviewer[2] -= lz * fraction;
		break;

	case GLUT_KEY_PAGE_UP:
		Sviewer[1] += 0.1;
		lat[1] += 0.1;
		break;
	case GLUT_KEY_PAGE_DOWN:
		Sviewer[1] -= 0.1;
		lat[1] -= 0.1;
		break;
	}
	glutPostRedisplay();
}
void changeSize(int w, int h)
{


	if (h == 0)
		h = 1;
	float ratio = w * 1.0 / h;


	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);


	glLoadIdentity();


	gluPerspective(40.0f, ratio, 0.1f, 10.0f);

	glMatrixMode(GL_MODELVIEW);
	glutPostRedisplay();
}

int second()
{
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH|GLUT_ALPHA);
	glutInitWindowSize(1000, 800);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("3D house architecture");

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glutDisplayFunc(Shouse);
	glutReshapeFunc(changeSize);
	glDepthFunc(GL_LEQUAL);
	glutSpecialFunc(specialKey);
	glutKeyboardFunc(Skeys);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_DEPTH_TEST);
	tfs(0);
	glAlphaFunc(GL_GREATER, 0.1);
		glEnable(GL_ALPHA_TEST);

	glClearColor(1.0, 1.0, 1.0, 1.0);
	glutMainLoop();
	return 0;
}
