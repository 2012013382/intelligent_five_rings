#include<windows.h>
#ifndef GLUT_DISABLE_ATEXIT_HACK  
#define GLUT_DISABLE_ATEXIT_HACK 
#endif  
#include<glut.h>
#include<iostream>
#include"View_Show.h"
#include"intelligent_Loop.h"
//��ɫ(1.0,0.3,0,0��
//��ɫ(0.3,1.0,0,0)
//��ɫ(0.0,0.05,1.0,0)
//ǳ��(0.3,0.9,0.9,0)
//��ɫ(0.5,0.1,0.5,0)
int InitFLag=1;
float Threashd0=0;
float Threashd1=0;
float Threashd2=0;
float Threashd3=0;
float Threashd4=0;
float BigThreashd0=0;
float BigThreashd1=0;
float BigThreashd2=0;
float BigThreashd3=0;
float BigThreashd4=0;
float BigThreashd5=0;
float BigThreashd6=0;
float BigThreashd7=0;
float BigThreashd8=0;
float BigThreashd9=0;
float x0=0;
float x1=0;
float x2=0;
float x3=0;
float x4=0;
float Bigx=0;
int FirstShow=0;
int SleepTime=5;//ˢ��ʱ��
void RunStateChange()
{
	Run();//��������
	//�˴����ݼ�¼����Ϸ������������½�����ʾ��ʵ��Բ�̵Ķ�̬��ʾ
	
	if(Number<StepCount&&InitFLag==0)
	{
		Start_Change_Loop_Color();//��ʼ����ɫ

	switch(Save[Number].loopNumber)
	{
	case 0:{
		      if(x0<=100)//0�ű�ʾ��ɫ�̵Ķ�̬��ת
	           {
				   if(Save[Number].Direction==CLOCKWISE)
				   {
	              Threashd0=(x0/100)*(51.1/180.0)*3.14159;
	              x0=x0+1;
	              Sleep(SleepTime);
				   }
				   else
				   {
				  Threashd0=-(x0/100)*(51.1/180.0)*3.14159;
	              x0=x0+1;
	              Sleep(SleepTime);
				   }
	           }
			  break;
		   }
	case 1:{
		       if(x1<=100)//1�ű�ʾ��ɫ�̵Ķ�̬��ת
	           {
				   if(Save[Number].Direction==CLOCKWISE)
				   {
	            Threashd1=(x1/100)*(51.1/180.0)*3.14159;
	            x1=x1+1;
	            Sleep(SleepTime);
				   }
				   else
				   {
			    Threashd1=-(x1/100)*(51.1/180.0)*3.14159;
	            x1=x1+1;
	            Sleep(SleepTime);
				   }
	           }
		   break;
		   }
	case 2:{
		        if(x2<=100)//2�ű�ʾ��ɫ�̵Ķ�̬��ת
	           {
				   if(Save[Number].Direction==CLOCKWISE)
				   {
	            Threashd2=(x2/100)*(51.1/180.0)*3.14159;
	            x2=x2+1;
	            Sleep(SleepTime);
				   }
				   else
				   {
			    Threashd2=-(x2/100)*(51.1/180.0)*3.14159;
	            x2=x2+1;
	            Sleep(SleepTime);
				   }
	           }
				break;
		   }
	case 3:{
		           if(x3<=100)//3�ű�ʾǳ��ɫ�̵Ķ�̬��ת
	           {
				   if(Save[Number].Direction==CLOCKWISE)
				   {
	            Threashd3=(x3/100)*(51.1/180.0)*3.14159;
	            x3=x3+1;
	            Sleep(SleepTime);
				   }
				   else
				   {
			    Threashd3=-(x3/100)*(51.1/180.0)*3.14159;
	            x3=x3+1;
	            Sleep(SleepTime);
				   }
	           }
				break;
		   }
	case 4:{
		       if(x4<=100)//3�ű�ʾ��ɫ�̵Ķ�̬��ת
	           {
				   if(Save[Number].Direction==CLOCKWISE)
				   {
	            Threashd4=(x4/100)*(51.1/180.0)*3.14159;
	            x4=x4+1;
	            Sleep(SleepTime);
				   }
				   else
				   {
			    Threashd4=-(x4/100)*(51.1/180.0)*3.14159;
	            x4=x4+1;
	            Sleep(SleepTime);
				   }
	           }
				break;
		   }
	case 5://��ʾת����
		{
			if(Save[Number].Direction==CLOCKWISE)
				   {
			if(Bigx<=100)
					 {
						  BigThreashd0=(Bigx/100)*70.5;
						  Sleep(SleepTime-4);
					  
					
						  BigThreashd1=(Bigx/100)*71.5;
						  Sleep(SleepTime-4);
					
						  BigThreashd2=(Bigx/100)*81.5;
						  Sleep(SleepTime-4);
					
						  BigThreashd3=(Bigx/100)*81.5;
						  Sleep(SleepTime-4);
					
						  BigThreashd4=(Bigx/100)*69;
						  Sleep(SleepTime-4);
					 
						  BigThreashd5=(Bigx/100)*69;
						  Sleep(SleepTime-4);
				
						  BigThreashd6=(Bigx/100)*70.5;
						  Sleep(SleepTime-4);
					
						  BigThreashd7=(Bigx/100)*70.5;
						  Sleep(SleepTime-4);
					
						  BigThreashd8=(Bigx/100)*69;
						  Sleep(SleepTime-4);
					 
						  BigThreashd9=(Bigx/100)*69;
						  Sleep(SleepTime-4);
						  Bigx=Bigx+1;
			}
			}
			else
			{
				if(Bigx<=100)
					 {
						  BigThreashd0=-(Bigx/100)*70.5;
						  Sleep(SleepTime-4);
					  
					
						  BigThreashd1=-(Bigx/100)*71.5;
						  Sleep(SleepTime-4);
					
						  BigThreashd2=-(Bigx/100)*81.5;
						  Sleep(SleepTime-4);
					
						  BigThreashd3=-(Bigx/100)*81.5;
						  Sleep(SleepTime-4);
					
						  BigThreashd4=-(Bigx/100)*69;
						  Sleep(SleepTime-4);
					 
						  BigThreashd5=-(Bigx/100)*69;
						  Sleep(SleepTime-4);
				
						  BigThreashd6=-(Bigx/100)*70.5;
						  Sleep(SleepTime-4);
					
						  BigThreashd7=-(Bigx/100)*70.5;
						  Sleep(SleepTime-4);
					
						  BigThreashd8=-(Bigx/100)*69;
						  Sleep(SleepTime-4);
					 
						  BigThreashd9=-(Bigx/100)*69;
						  Sleep(SleepTime-4);
						  Bigx=Bigx+1;
			}
			}
		}
					 
		}
	}
	
	if(x0>100 || x1>100 || x2>100 || x3>100 || x4>100  || Bigx>100)
	{
	if(Number<StepCount)
	{//�Խ�����и���

		if(Save[Number].Direction==CLOCKWISE)
		{
			Start_Loop_Clockwise(Save[Number].loopNumber);
		}
		else
		{
			Start_Loop_Anticlockwise(Save[Number].loopNumber);
		}
		Number++;
		//Sleep(100);
	}
	FirstShow=0;
	x0=0;
	x1=0;
	x2=0;
	x3=0;
	x4=0;
	Bigx=0;

	Threashd0=0;
	Threashd1=0;
	Threashd2=0;
	Threashd3=0;
	Threashd4=0;


	BigThreashd0=0;
	BigThreashd1=0;
	BigThreashd2=0;
	BigThreashd3=0;
	BigThreashd4=0;
	BigThreashd5=0;
	BigThreashd6=0;
    BigThreashd7=0;
    BigThreashd8=0;
    BigThreashd9=0;
	}

	
	}
	
     
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);//��������


    GLint circle_points = 100, i = 0;
	//���Ʊ�����
	glBegin(GL_TRIANGLE_FAN);
	glColor4f(1,1,0.5,0);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.9*cos(angle), 0.9*sin(angle),0);
    }
    glEnd();
	//���Ʊ�����
    glBegin(GL_TRIANGLE_FAN);
	glColor4f(1,1,0.0,0);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.37*cos(angle), 0.37*sin(angle),0);
    }
    glEnd();

	//���Ʊ�����
		glBegin(GL_TRIANGLE_FAN);
	glColor4f(0.9,0.9,0,0);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.1*cos(angle), 0.1*sin(angle),0);
    }
    glEnd();

	//���ƺ���
		glBegin(GL_TRIANGLE_FAN);
	glColor4f(1.0,0.0,0,0);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.5+(0.22)*cos(angle),0.2+(0.22)*sin(angle),0);
    }
    glEnd();
	
	//��������
	glBegin(GL_TRIANGLE_FAN);
	glColor4f(0.0,1.0,0,0);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.35+(0.22)*cos(angle),-0.4+(0.22)*sin(angle),0);
    }
    glEnd();

	//��������
		glBegin(GL_TRIANGLE_FAN);
	glColor4f(0.0,0.0,1.0,0);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(-0.35+(0.22)*cos(angle),-0.4+(0.22)*sin(angle),0);
    }
    glEnd();

	//����ǳ����
	glBegin(GL_TRIANGLE_FAN);
	glColor4f(0.0,0.9,0.9,0);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(-0.5+(0.22)*cos(angle),0.2+(0.22)*sin(angle),0);
    }
    glEnd();
	//��������
	glBegin(GL_TRIANGLE_FAN);
	glColor4f(0.5,0.0,0.5,0);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d((0.22)*cos(angle),0.55+(0.22)*sin(angle),0);
    }
    glEnd();

	//���ƺ�ɫ��1��ɫ��
		glBegin(GL_TRIANGLE_FAN);
		glColor4fv(Loop_Color[0][1].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd0+0.3+2*(51.0/180.0)*3.14159)+0.5+(0.08)*cos(angle),0.22*cos(Threashd0+0.3+2*(51.0/180.0)*3.14159)+0.2+(0.08)*sin(angle),0);
	
    }
    glEnd();
	//���ƺ�ɫ��2��ɫ��
		glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[0][2].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd0+0.3+3*(51.0/180.0)*3.14159)+0.5+(0.08)*cos(angle),0.22*cos(Threashd0+0.3+3*(51.0/180.0)*3.14159)+0.2+(0.08)*sin(angle),0);
	
    }
    glEnd();
	
	
	//���ƺ�ɫ��3��ɫ��
	if(Save[Number].loopNumber==5)
	{
       glBegin(GL_TRIANGLE_FAN);//[0][3]
	glColor4fv(Loop_Color[0][3].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.35*sin(((BigThreashd1+85.0)/180.0)*3.14159)+0.08*cos(angle),0.35*cos(((BigThreashd1+85.0)/180.0)*3.14159)+0.08*sin(angle),0);
    }
    glEnd();
	}
	else
	{
		glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[0][3].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd0+0.3+4*(51.0/180.0)*3.14159)+0.5+(0.08)*cos(angle),0.22*cos(Threashd0+0.3+4*(51.0/180.0)*3.14159)+0.2+(0.08)*sin(angle),0);
	
    }
    glEnd();
	}
	
	//���ƺ�ɫ��4��ɫ��
	if(Save[Number].loopNumber==5)
	{
		glBegin(GL_TRIANGLE_FAN);/////[0][4]
	glColor4fv(Loop_Color[0][4].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.35*sin(((BigThreashd0+53.5)/180.0)*3.14159)+0.08*cos(angle),0.35*cos(((BigThreashd0+53.5)/180.0)*3.14159)+0.08*sin(angle),0);
    }
    glEnd();
	}
	else
	{
		glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[0][4].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd0+0.3+5*(51.0/180.0)*3.14159)+0.5+(0.08)*cos(angle),0.22*cos(Threashd0+0.3+5*(51.0/180.0)*3.14159)+0.2+(0.08)*sin(angle),0);
	
    }
    glEnd();
	}
	//���ƺ�ɫ��5��ɫ��
		glBegin(GL_TRIANGLE_FAN);
		glColor4fv(Loop_Color[0][5].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd0+0.3+6*(51.0/180.0)*3.14159)+0.5+(0.08)*cos(angle),0.22*cos(Threashd0+0.3+6*(51.0/180.0)*3.14159)+0.2+(0.08)*sin(angle),0);
	
    }
    glEnd();
	//���ƺ�ɫ��6��ɫ��
		glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[0][6].InColor);
   
		for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd0+0.3+7*(51.0/180.0)*3.14159)+0.5+(0.08)*cos(angle),0.22*cos(Threashd0+0.3+7*(51.0/180.0)*3.14159)+0.2+(0.08)*sin(angle),0);
	
    }
    glEnd();
	//���ƺ�ɫ��0��ɫ��
		glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[0][0].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd0+0.3+((51.0)/180.0)*3.14159)+0.5+(0.08)*cos(angle),0.22*cos(Threashd0+0.3+(51.0/180.0)*3.14159)+0.2+(0.08)*sin(angle),0);
	
    }
    glEnd();
	
	//��������0��ɫ��
		glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[1][0].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd1+0.65+(2*(51.0)/180.0)*3.14159)+0.35+(0.08)*cos(angle),0.22*cos(Threashd1+0.65+2*(51.0/180.0)*3.14159)-0.4+(0.08)*sin(angle),0);
    }
    glEnd();

	
	//��������1��ɫ��
		glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[1][1].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd1+0.65+(3*(51.0)/180.0)*3.14159)+0.35+(0.08)*cos(angle),0.22*cos(Threashd1+0.65+3*(51.0/180.0)*3.14159)-0.4+(0.08)*sin(angle),0);
    }
    glEnd();

	
	//��������2��ɫ��
		glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[1][2].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd1+0.65+(4*(51.0)/180.0)*3.14159)+0.35+(0.08)*cos(angle),0.22*cos(Threashd1+0.65+4*(51.0/180.0)*3.14159)-0.4+(0.08)*sin(angle),0);
    }
    glEnd();
	
	//��������3��ɫ��
	if(Save[Number].loopNumber==5)
	{
    glBegin(GL_TRIANGLE_FAN);//[1][3]
	glColor4fv(Loop_Color[1][3].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.35*sin(((BigThreashd3+156.5)/180.0)*3.14159)+0.08*cos(angle),0.35*cos(((BigThreashd3+156.5)/180.0)*3.14159)+0.08*sin(angle),0);
    }
    glEnd();
	}
	else
	{
		glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[1][3].InColor);
	for(int i = 0; i < circle_points; i++ )
    {////////0.22*sin(Threashd0+0.3+4*(51.0/180.0)*3.14159)+0.5
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd1+0.65+(5*(51.0)/180.0)*3.14159)+0.35+(0.08)*cos(angle),0.22*cos(Threashd1+0.65+5*(51.0/180.0)*3.14159)-0.4+(0.08)*sin(angle),0);
    }
    glEnd();
	}
	
	//��������4��ɫ��
	if(Save[Number].loopNumber==5)
	{
     glBegin(GL_TRIANGLE_FAN);//[1][4]
	glColor4fv(Loop_Color[1][4].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.35*sin(((BigThreashd2+124.0)/180.0)*3.14159)+0.08*cos(angle),0.35*cos(((BigThreashd2+124.0)/180.0)*3.14159)+0.08*sin(angle),0);
    }
    glEnd();
	
	}
	else
	{
		glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[1][4].InColor);
	for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd1+0.65+(6*(51.0)/180.0)*3.14159)+0.35+(0.08)*cos(angle),0.22*cos(Threashd1+0.65+6*(51.0/180.0)*3.14159)-0.4+(0.08)*sin(angle),0);
    }
    glEnd();
	}
	//��������5��ɫ��
		glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[1][5].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd1+0.65+(7*(51.0)/180.0)*3.14159)+0.35+(0.08)*cos(angle),0.22*cos(Threashd1+0.65+7*(51.0/180.0)*3.14159)-0.4+(0.08)*sin(angle),0);
    }
    glEnd();
	
	//��������6��ɫ��
		glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[1][6].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd1+0.65+((51.0)/180.0)*3.14159)+0.35+(0.08)*cos(angle),0.22*cos(Threashd1+0.65+(51.0/180.0)*3.14159)-0.4+(0.08)*sin(angle),0);
    }
    glEnd();

	//��������0��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[2][0].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd2+2.1+2*((51.0)/180.0)*3.14159)-0.35+(0.08)*cos(angle),0.22*cos(Threashd2+2.1+2*(51.0/180.0)*3.14159)-0.4+(0.08)*sin(angle),0);
    }
    glEnd();

	//��������1��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[2][1].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd2+2.1+3*((51.0)/180.0)*3.14159)-0.35+(0.08)*cos(angle),0.22*cos(Threashd2+2.1+3*(51.0/180.0)*3.14159)-0.4+(0.08)*sin(angle),0);
    }
    glEnd();

	//��������2��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[2][2].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd2+2.1+4*((51.0)/180.0)*3.14159)-0.35+(0.08)*cos(angle),0.22*cos(Threashd2+2.1+4*(51.0/180.0)*3.14159)-0.4+(0.08)*sin(angle),0);
    }
    glEnd();

	//��������3��ɫ��
	if(Save[Number].loopNumber==5)
	{
	glBegin(GL_TRIANGLE_FAN);//[2][3]
	glColor4fv(Loop_Color[2][3].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.35*sin(((BigThreashd5+238)/180.0)*3.14159)+0.08*cos(angle),0.35*cos(((BigThreashd5+238)/180.0)*3.14159)+0.08*sin(angle),0);
    }
    glEnd();
	}
	else
	{
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[2][3].InColor);
	for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd2+2.1+5*((51.0)/180.0)*3.14159)-0.35+(0.08)*cos(angle),0.22*cos(Threashd2+2.1+5*(51.0/180.0)*3.14159)-0.4+(0.08)*sin(angle),0);
    }
    glEnd();
	}
	//��������4��ɫ��
	if(Save[Number].loopNumber==5)
	{
    glBegin(GL_TRIANGLE_FAN);//[2][4]
	glColor4fv(Loop_Color[2][4].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.35*sin(((BigThreashd4+205.5)/180.0)*3.14159)+0.08*cos(angle),0.35*cos(((BigThreashd4+205.5)/180.0)*3.14159)+0.08*sin(angle),0);
    }
    glEnd();
	
	}
	else
	{
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[2][4].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd2+2.1+6*((51.0)/180.0)*3.14159)-0.35+(0.08)*cos(angle),0.22*cos(Threashd2+2.1+6*(51.0/180.0)*3.14159)-0.4+(0.08)*sin(angle),0);
    }
    glEnd();
	}
	//��������5��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[2][5].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd2+2.1+7*((51.0)/180.0)*3.14159)-0.35+(0.08)*cos(angle),0.22*cos(Threashd2+2.1+7*(51.0/180.0)*3.14159)-0.4+(0.08)*sin(angle),0);
    }
    glEnd();

	//��������6��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[2][6].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd2+2.1+((51.0)/180.0)*3.14159)-0.35+(0.08)*cos(angle),0.22*cos(Threashd2+2.1+(51.0/180.0)*3.14159)-0.4+(0.08)*sin(angle),0);
    }
    glEnd();
	
	//����ǳ����0��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[3][0].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd3+2.5+3*((51.0)/180.0)*3.14159)-0.5+(0.08)*cos(angle),0.22*cos(Threashd3+2.5+3*(51.0/180.0)*3.14159)+0.2+(0.08)*sin(angle),0);
    }
	glEnd();

	//����ǳ����1��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[3][1].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd3+2.5+4*((51.0)/180.0)*3.14159)-0.5+(0.08)*cos(angle),0.22*cos(Threashd3+2.5+4*(51.0/180.0)*3.14159)+0.2+(0.08)*sin(angle),0);
    }
	glEnd();

	//����ǳ����2��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[3][2].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd3+2.5+5*((51.0)/180.0)*3.14159)-0.5+(0.08)*cos(angle),0.22*cos(Threashd3+2.5+5*(51.0/180.0)*3.14159)+0.2+(0.08)*sin(angle),0);
    }
	glEnd();

	//����ǳ����3��ɫ��
	if(Save[Number].loopNumber==5)
	{
      	glBegin(GL_TRIANGLE_FAN);//[3][3]
	glColor4fv(Loop_Color[3][3].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.35*sin(((BigThreashd7+306)/180.0)*3.14159)+0.08*cos(angle),0.35*cos(((BigThreashd7+306)/180.0)*3.14159)+0.08*sin(angle),0);
    }
    glEnd();
	}
	else
	{
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[3][3].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd3+2.5+6*((51.0)/180.0)*3.14159)-0.5+(0.08)*cos(angle),0.22*cos(Threashd3+2.5+6*(51.0/180.0)*3.14159)+0.2+(0.08)*sin(angle),0);
    }
	glEnd();
	}
	//����ǳ����4��ɫ��
	if(Save[Number].loopNumber==5)
	{
    glBegin(GL_TRIANGLE_FAN);//[3][4]
	glColor4fv(Loop_Color[3][4].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.35*sin(((BigThreashd6+274.5)/180.0)*3.14159)+0.08*cos(angle),0.35*cos(((BigThreashd6+274.5)/180.0)*3.14159)+0.08*sin(angle),0);
    }
    glEnd();
	}
	else
	{
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[3][4].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd3+2.5+7*((51.0)/180.0)*3.14159)-0.5+(0.08)*cos(angle),0.22*cos(Threashd3+2.5+7*(51.0/180.0)*3.14159)+0.2+(0.08)*sin(angle),0);
    }
	glEnd();
	}

	//����ǳ����5��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[3][5].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd3+2.5+((51.0)/180.0)*3.14159)-0.5+(0.08)*cos(angle),0.22*cos(Threashd3+2.5+(51.0/180.0)*3.14159)+0.2+(0.08)*sin(angle),0);
    }
	glEnd();
	//����ǳ����6��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[3][6].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd3+2.5+2*((51.0)/180.0)*3.14159)-0.5+(0.08)*cos(angle),0.22*cos(Threashd3+2.5+2*(51.0/180.0)*3.14159)+0.2+(0.08)*sin(angle),0);
    }
	glEnd();

	//��������0��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[4][0].InColor);
    
	for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd4+7*((51.0)/180.0)*3.14159)+(0.08)*cos(angle),0.22*cos(Threashd4+7*((51.0)/180.0)*3.14159)+0.55+(0.08)*sin(angle),0);
    }
    glEnd();

	//��������1��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[4][1].InColor);
    
	for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd4+((51.0)/180.0)*3.14159)+(0.08)*cos(angle),0.22*cos(Threashd4+((51.0)/180.0)*3.14159)+0.55+(0.08)*sin(angle),0);
    }
    glEnd();

	//��������2��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[4][2].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd4+2*((51.0)/180.0)*3.14159)+(0.08)*cos(angle),0.22*cos(Threashd4+2*((51.0)/180.0)*3.14159)+0.55+(0.08)*sin(angle),0);
    }
    glEnd();

	//��������3��ɫ��
	if(Save[Number].loopNumber==5)
	{
	glBegin(GL_TRIANGLE_FAN);//[4][3]
	glColor4fv(Loop_Color[4][3].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.35*sin(((BigThreashd9+376.5)/180.0)*3.14159)+0.08*cos(angle),0.35*cos(((BigThreashd9+376.5)/180.0)*3.14159)+0.08*sin(angle),0);
    }
    glEnd();
	
	}
	else
	{
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[4][3].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd4+3*((51.0)/180.0)*3.14159)+(0.08)*cos(angle),0.22*cos(Threashd4+3*((51.0)/180.0)*3.14159)+0.55+(0.08)*sin(angle),0);
    }
    glEnd();
	}
	//��������4��ɫ��
	if(Save[Number].loopNumber==5)
	{
    glBegin(GL_TRIANGLE_FAN);//[4][4]
	glColor4fv(Loop_Color[4][4].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.35*sin(((BigThreashd8+345)/180.0)*3.14159)+0.08*cos(angle),0.35*cos(((BigThreashd8+345)/180.0)*3.14159)+0.08*sin(angle),0);
    }
    glEnd();
	}
	else
	{
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[4][4].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd4+4*((51.0)/180.0)*3.14159)+(0.08)*cos(angle),0.22*cos(Threashd4+4*((51.0)/180.0)*3.14159)+0.55+(0.08)*sin(angle),0);
    }
    glEnd();
	}
	//��������5��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[4][5].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd4+5*((51.0)/180.0)*3.14159)+(0.08)*cos(angle),0.22*cos(Threashd4+5*((51.0)/180.0)*3.14159)+0.55+(0.08)*sin(angle),0);
    }
    glEnd();

	//��������6��ɫ��
	glBegin(GL_TRIANGLE_FAN);
	glColor4fv(Loop_Color[4][6].InColor);
    for(int i = 0; i < circle_points; i++ )
    {
        double angle = 2*3.14159f*i/circle_points;
        glVertex3d(0.22*sin(Threashd4+6*((51.0)/180.0)*3.14159)+(0.08)*cos(angle),0.22*cos(Threashd4+6*((51.0)/180.0)*3.14159)+0.55+(0.08)*sin(angle),0);
    }
    glEnd();
	


	glutSwapBuffers();

}
void myidle()//�ڴ˸ı�״̬
{
	RunStateChange();
	glutPostRedisplay();
}
void init()
{
	glClearColor(1.0,1.0,1.0,1.0);//������ɫ
	glColor3f(0.0,0.0,0.0);//ͼ����ɫ����֮ǰû������ɫ���þ�������ɫ
	glLineWidth(3.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-1.0,1.0,-1.0,1.0);
	glutIdleFunc(myidle);
}

void Option(GLint selectedOption)
{
	switch(selectedOption){
	case 1:
		{

	/////test////////
	Loop_Anticlockwise(0);
	Loop_Anticlockwise(1);
	Loop_Anticlockwise(5);
	Loop_Clockwise(1);
	Loop_Clockwise(5);
	Loop_Clockwise(5);
	Loop_Clockwise(0);
	Loop_Clockwise(5);
	Loop_Clockwise(4);
	Loop_Clockwise(2);
	/*
	Loop_Clockwise(2);
	Loop_Clockwise(3);
	Loop_Anticlockwise(0);
	Loop_Anticlockwise(5);
	Loop_Clockwise(4);
	Loop_Anticlockwise(2);
	*/
	//////////////////
		for(int i=0;i<6;i++)
		for(int j=0;j<10;j++)
		{
			StartLoop[i][j]=Loop[i][j];//��¼Բ�̵ĳ�ʼ״̬
		}
			break;
		}
	case 2:
		{
     ////////��ɫ��λ�㷨///////////
    Intelligent_Loop();
				InitFLag=0;
	///////////////////////////
			break;
		}
	}
}

void InitGraph()
{
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(700,700);
	glutInitWindowPosition(0,0);//��ʾ���ɵĴ��ڳ�������Ļ��λ��
	glutCreateWindow("IntelligentLoop");
	glutDisplayFunc(display);
    init();
	glutCreateMenu(Option);
	glutAddMenuEntry("Radom initialization",1);
	glutAddMenuEntry("begin",2);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
}

