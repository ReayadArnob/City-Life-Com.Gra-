#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>


float moveC1 = 0.0f;
float moveC2 = 0.0f;

float moveB1 = 0.0f;
float moveB2 = 0.0f;
float speed = 0.02f;



void DrawAllComponents()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity();
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);


    ///sky///
    glBegin(GL_POLYGON);

    glVertex2f(38.0f,3.0f);
    glColor3ub(115,160,228);
    glVertex2f(38.0f,14.0f);
    glVertex2f(-12.0f,14.0f);
    glVertex2f(-12.0f,3.0f);
    glEnd();

    ///sun///
    glPushMatrix();

    glColor3d(250,0,0);
    glTranslatef(30.0, 7.0, 0);
    glutSolidSphere(1.0, 250, 250);
    glPopMatrix();

    ///cloud 1///
    glPushMatrix();

    glTranslatef(moveC1,0.0f,0.0f);
    glPushMatrix();
    glColor3d(220,220,220);
    glTranslatef(1.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(220,220,220);
    glTranslatef(1.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(220,220,220);
    glTranslatef(2.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(220,220,220);
    glTranslatef(0.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(220,220,220);
    glTranslatef(3.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPopMatrix();


///cloud 2///

    glPushMatrix();

    glTranslatef(moveC1,0.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(14.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(17.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPopMatrix();

    ///cloud 3///
    glPushMatrix();

    glTranslatef(moveC2,0.0f,0.0f);

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 8.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 7.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 8.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 7.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(24.0, 7.5, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(21.0, 7.5, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPopMatrix();




    ///see portion
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(65,105,225);

    glVertex2f(38.0f,-19.0f);  /// right-down
    glVertex2f(38.0f,-10.0f); /// right-top
    glVertex2f(-12.0f,-7.0f); /// left-top
    glVertex2f(-12.0f,-19.0f);  /// left-down
    glEnd();


    ///Ground portion
    glBegin(GL_POLYGON);
    glColor3ub(25,128,0);

    glVertex2f(1.0f, -8.0f); /// angle
    glVertex2f(38.0f,-12.0f);  /// right-down
    glVertex2f(38.0f,3.0f); /// right-top
    glVertex2f(-12.0f,3.0f); /// left-top
    glVertex2f(-12.0f,-11.0f);  /// left-down
    glEnd();


//road
    glBegin(GL_POLYGON);
    glColor3ub(72,72,76);

    glVertex2f(6.0f,-8.6f);
    glVertex2f(6.0f,3.0f);
    glVertex2f(5.2f,3.0f);
    glVertex2f(2.0f,-8.2f);
    glEnd();

    // road divider

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(4.2f,-8.5f);
    glVertex2f(5.6f,3.0f);
    glVertex2f(5.5f,3.0f);
    glVertex2f(4.0f,-8.4f);
    glEnd();


/// left side house

    glBegin(GL_POLYGON);    // upper part
    glColor3ub(120,73,4);
    glVertex2f(-2.7f,1.2f);
    glVertex2f(-6.7f,1.2f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);

    glEnd();


    glBegin(GL_POLYGON);// 2nd upper part
    glColor3ub(139,69,19);
    glVertex2f(-6.5f,1.0f);
    glVertex2f(-6.7f,1.2f);
    glVertex2f(-8.5f,-1.0f);
    glVertex2f(-8.0f,-1.0f);

    glEnd();

    glBegin(GL_POLYGON);// left side
    glColor3ub(205,133,63);
    glVertex2f(-6.5f,1.0f);
    glVertex2f(-8.0f,-1.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-1.0f);

    glEnd();

    glBegin(GL_POLYGON);      //  left window
    glColor3ub(128,135,32);
    glVertex2f(-6.0f,-2.0f);
    glVertex2f(-6.0f,-1.0f);
    glVertex2f(-7.0f,-1.0f);
    glVertex2f(-7.0f,-2.0f);

    glEnd();

//polygon 5
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-8.3f,-2.9f);
    glVertex2f(-5.0f,-3.5f);

    glEnd();

//polygon 6
    glBegin(GL_POLYGON);
    glColor3ub(184,134,11);
    glVertex2f(-1.5f,-3.0f);
    glVertex2f(-1.5f,-1.0f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-5.0f,-3.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-3.5f);
    glVertex2f(-1.0f,-3.5f);
    glVertex2f(-1.5f,-3.0f);

    glEnd();

///door left
//polygon a
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(-2.5f,-3.0f);
    glVertex2f(-2.5f,-1.2f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();

//polygon b
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(128,135,32);
    glVertex2f(-3.3f,-3.0f);
    glVertex2f(-3.3f,-1.4f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();

//polygon c
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(128,135,32);
    glVertex2f(-2.5f,-3.0f);
    glVertex2f(-2.5f,-1.2f);
    glVertex2f(-3.2f,-1.4f);
    glVertex2f(-3.2f,-3.0f);

    glEnd();




///house on right side

    glBegin(GL_POLYGON);
    glColor3ub(47,170,79);
    glVertex2f(25.3,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(27,-1);

    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(21.5,1);
    glVertex2f(21.3,1.2);
    glVertex2f(19.5,-1);
    glVertex2f(20,-1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(184,134,11);
    glVertex2f(21.5,1);
    glVertex2f(20,-1);
    glVertex2f(20,-2.5);
    glVertex2f(23,-3);
    glVertex2f(23,-1);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(22,-2);
    glVertex2f(22,-1);
    glVertex2f(21,-1);
    glVertex2f(21,-2);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(23,-3);
    glVertex2f(20,-2.5);
    glVertex2f(19.7,-2.9);
    glVertex2f(23,-3.5);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(26.5,-3);
    glVertex2f(26.5,-1);
    glVertex2f(23,-1);
    glVertex2f(23,-3);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(23,-3);
    glVertex2f(23,-3.5);
    glVertex2f(27,-3.5);
    glVertex2f(26.5,-3);

    glEnd();

///door right
//polygon a//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

    //right part
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(24.7,-3);
    glVertex2f(24.7, -.8);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

// 2nd part
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24.8,-1.4);
    glVertex2f(24.8,-3);

    glEnd();



    // house 3


//upper
    glBegin(GL_TRIANGLES);
    glColor3ub(0,82,45);

    glVertex2f(37.2,-7);
    glVertex2f(34.5,-5);
    glVertex2f(31.7,-7);

    glEnd();
//body



    glBegin(GL_POLYGON);
    glColor3ub(160,82,45);

    glVertex2f(37,-11);
    glVertex2f(37,-7);
    glVertex2f(32,-7);
    glVertex2f(32,-11);
    glEnd();

    //door
    glBegin(GL_POLYGON);
    glColor3ub(0,82,0);

    glVertex2f(35,-11);
    glVertex2f(35,-9);
    glVertex2f(34,-9);
    glVertex2f(34,-11);
    glEnd();




// house 4



///hill-1
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(-12,3);
    glVertex2f(-7.5,7);
    glVertex2f(-2,3);

    glEnd();


///Hill 2
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-1,3);
    glVertex2f(-0.5,6);
    glVertex2f(4.5,6);
    glVertex2f(5,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-0.5,6);
    glVertex2f(0,7);
    glVertex2f(4,7);
    glVertex2f(4.5,6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(0,7);
    glVertex2f(1,8);
    glVertex2f(3,8);
    glVertex2f(4,7);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(1,8);
    glVertex2f(3,8);
    glVertex2f(2,8.3);
    glEnd();

///hill 3
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(7,3);
    glVertex2f(8,5);
    glVertex2f(13,5);
    glVertex2f(14,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(8,5);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(13,5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(10.5,6.5);
    glEnd();

///hill 4
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(14,3);
    glVertex2f(20,7);
    glVertex2f(29,3);
    glEnd();





///hill 5
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(29,3);
    glVertex2f(29.5,4);
    glVertex2f(30.5,4);
    glVertex2f(31,3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(29.5,4);
    glVertex2f(30,4.5);
    glVertex2f(30.5,4);
    glEnd();

///hill 6
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(31,3);
    glVertex2f(32.5,4.5);
    glVertex2f(35,3);
    glEnd();



///hill 7

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(33,3);
    glVertex2f(33.5,4.5);
    glVertex2f(37.5,4.5);
    glVertex2f(38,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(33.5,4.5);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(37.5,4.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(35.5,5.5);
    glEnd();


///tree structure///
//left upper side

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();


    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-7.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.5, 3.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

// left side tree
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-9.5,2.5);
    glVertex2f(-10,2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glVertex2f(-8,2);
    glVertex2f(-8,2.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9.5,-3.5);
    glVertex2f(-9,-4);
    glVertex2f(-8.5,-3.5);
    glVertex2f(-8.5,1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glEnd();



    /// right side tree body
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(31.5,-1);
    glVertex2f(31.5,-6.5);
    glVertex2f(31,-7);
    glVertex2f(32.5,-6.5);
    glVertex2f(32.5,-1);
    glEnd();


    ///right side head

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(30.5, -1.3, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(31.4, -0.3, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(32.5, -.4, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(33.5, -1.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

/// new

    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(5.3,-4+.5*i);
        glVertex2f(6.4,-2+.5*i);
        glVertex2f(7.5,-4+.5*i);
        glEnd();
    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(6.5,-4);
    glVertex2f(6.5,-5);
    glVertex2f(6.3,-5);
    glVertex2f(6.3,-4);
    glEnd();

/// 2nd
    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(8.3,-4+.5*i);
        glVertex2f(9.4,-2+.5*i);
        glVertex2f(10.5,-4+.5*i);
        glEnd();
    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(9.5,-4);
    glVertex2f(9.5,-5);
    glVertex2f(9.3,-5);
    glVertex2f(9.3,-4);
    glEnd();

//3rd
    for(int i=0; i< 4; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(11.3,-4+.5*i);
        glVertex2f(12.4,-2+.5*i);
        glVertex2f(13.5,-4+.5*i);
        glEnd();
    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(12.5,-4);
    glVertex2f(12.5,-5);
    glVertex2f(12.3,-5);
    glVertex2f(12.3,-4);
    glEnd();



    //4th
    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(5.2,0+.5*i);
        glVertex2f(6,2+.5*i);
        glVertex2f(7,0+.5*i);
        glEnd();
    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(6,0);
    glVertex2f(6,-1);
    glVertex2f(6,-1);
    glVertex2f(6.3,0);
    glEnd();


///5th  left side

    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(2.3,-4+.5*i);
        glVertex2f(0.4,-2+.5*i);
        glVertex2f(-1.5,-4+.5*i);
        glEnd();
    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(0.5,-4);
    glVertex2f(0.5,-5);
    glVertex2f(0.3,-5);
    glVertex2f(0.3,-4);
    glEnd();


///6th  left side

    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(4,-2+.5*i);
        glVertex2f(2.75,-0+.5*i);
        glVertex2f(1.5,-2+.5*i);
        glEnd();


    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(3,-2);
    glVertex2f(3,-4);
    glVertex2f(2.75,-4);
    glVertex2f(2.75,-2);

    glEnd();

// tree end

///boat-1 speed left to right
    glPushMatrix();
    glTranslatef(moveB1, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(1.0f, -14.0f);
    glVertex2f(1.50f, -13.0f);
    glVertex2f(-2.0f, -13.0f);
    glVertex2f(-3.0f, -14.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.5f);
    glVertex2f(2.0f, -14.0f);
    glVertex2f(-3.0f, -14.0f);
    glVertex2f(-3.0f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-3.0f, -14.5f);
    glVertex2f(-3.0f, -14.0f);
    glVertex2f(-4.5f, -13.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.5f);
    glVertex2f(3.5f, -13.7f);
    glVertex2f(2.0f, -14.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.0f);
    glVertex2f(1.5f, -13.0f);
    glVertex2f(1.0f, -14.0f);

    glEnd();

    glPopMatrix();



    ///boat-2 motion right to left
    glPushMatrix();
    glTranslatef(moveB2, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(21.0f, -16.5f);
    glVertex2f(17.50f, -16.5f);
    glVertex2f(18.0f, -17.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(22.0f, -18.0f);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(17.0f, -18.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,99,71);
    glVertex2f(20.5f, -16.5f);
    glVertex2f(21.0f, -14.5f);
    glVertex2f(18.5f, -14.5f);
    glVertex2f(18.0f, -16.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(19.8f, -14.5f);
    glVertex2f(19.8f, -14.0f);
    glVertex2f(19.7f, -14.0f);
    glVertex2f(19.7f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(17.0f, -18.0f);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(15.5f, -17.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(22.0f, -18.0f);
    glVertex2f(23.5f, -17.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(18.0f, -17.5f);
    glVertex2f(17.5f, -16.5f);
    glEnd();

    glPopMatrix();


    ///boat-3 stop

    glBegin(GL_POLYGON);
    glColor3ub(0,69,19);

    glVertex2f(-3,-10);
    glVertex2f(-3,-7.5);   //stick
    glVertex2f(-3.1,-7.5);
    glVertex2f(-3.1,-10);
    glEnd();


    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(1.0f, -10.0f);
    glVertex2f(1.50f, -9.0f);
    glVertex2f(-2.0f, -9.0f);
    glVertex2f(-3.0f, -10.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -10.5f);
    glVertex2f(2.0f, -10.0f);
    glVertex2f(-3.0f, -10.0f);
    glVertex2f(-3.0f, -10.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-3.0f, -10.5f);
    glVertex2f(-3.0f, -10.0f);
    glVertex2f(-4.5f, -9.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -10.5f);
    glVertex2f(3.5f, -9.7f);
    glVertex2f(2.0f, -10.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -10.0f);
    glVertex2f(1.5f, -9.0f);
    glVertex2f(1.0f, -10.0f);

    glEnd();

    glPopMatrix();





    //end
    glPopMatrix();
    glutSwapBuffers();
}



void updateC1(int value)
{

    if(moveC1 > +36)
    {
        moveC1 = -38;
    }
    moveC1 -= 0.15;

    glutTimerFunc(20, updateC1, 0);
    glutPostRedisplay();
}
void updateC2(int value)
{

    if(moveC2 > +36)
    {
        moveC2 = -38;
    }
    moveC2 += 0.15;

    glutTimerFunc(20, updateC2, 0);
    glutPostRedisplay();
}

void updateB1(int value)
{

    moveB1 += speed;
    if(moveB1 > 38)
    {
        moveB1 = -38;
    }

//   moveB1 += 0.17;

    glutTimerFunc(20, updateB1, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}



void updateB2(int value)
{


    if(moveB2 < -36)
    {
        moveB2 = +38;
    }
    //Notify GLUT that the display has changed

    moveB2 -= 0.13;

    glutTimerFunc(20, updateB2, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}



void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 's'://stops
        speed = 0.0f;
        break;
    case 'r'://runs
        speed = 0.2f;
        break;
        glutPostRedisplay();
    }
}


void handleMouse(int button, int state, int x, int y)
{

    if (button == GLUT_LEFT_BUTTON)
    {
        speed += 0.05f;
    }


    else if (button == GLUT_RIGHT_BUTTON)
    {
        speed -= 0.05f;
    }
    glutPostRedisplay();
}





void display(void)
{
    DrawAllComponents();
    glFlush ();
}

void init()
{

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    glutInitWindowSize(1300, 700);
    //glutInitWindowPosition(100,100);
    glutCreateWindow(" Village Scenery ");
    init();


    glutTimerFunc(20, updateC1, 1);    // cloud speed
     glutTimerFunc(20, updateC2, 1);    // cloud speed
    glutTimerFunc(20, updateB1, 0); //Boat 1
    glutTimerFunc(20, updateB2, 0); //boat 2

    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}

