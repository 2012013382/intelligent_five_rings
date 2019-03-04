#include"intelligent_Loop.h"
//һ��������Բ����һ���󻷺����С��������Loop�����ʾ���ɣ�Loop�д洢����ɫ�ӵ���ɫ��Ϣ
//Loop[0]��ʾ��Բ����1��5��ʾ5��СԲ������Բ����10��ɫ�ӣ�СԲ����7��ɫ��
//�ܹ���5����ɫ���ֱ�Ϊ�죨1�����̣�2��������3����ǳ����4�����ϣ�5��
//��ɫ(1.0,0.3,0,0��
//��ɫ(0.3,1.0,0,0)
//��ɫ(0.0,0.05,1.0,0)
//ǳ��(0.3,0.9,0.9,0)
//��ɫ(0.5,0.1,0.5,0)
////////////test////////////
int TestCount=0;
//////////////////////////
int Loop[6][11];//����Loop[i][10]�洢��i��Բ������ɫ���
int StartLoop[6][11];//�����洢Բ�̵ĳ�ʼ״̬�����ں����Ľ�����ʾ
int StepCount=0;//����
int surflag;
int OnceFlag=1;
int Number=0;
Color Loop_Color[6][11];//�����洢��ɫ

StepSave Save[1000];//���ڴ���ת��Բ�̵ķ���

void Change_Loop_Color()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<7;j++)
		{
			switch(Loop[i][j]){
			case 0://��ֵΪ��ɫ
				{
					Loop_Color[i][j].InColor[0]=1.0;
					Loop_Color[i][j].InColor[1]=0.3;
					Loop_Color[i][j].InColor[2]=0.0;
					Loop_Color[i][j].InColor[3]=0.0;
					break;
				}
				case 1://��ֵΪ��ɫ
				{
					Loop_Color[i][j].InColor[0]=0.3;
					Loop_Color[i][j].InColor[1]=1.0;
					Loop_Color[i][j].InColor[2]=0.0;
					Loop_Color[i][j].InColor[3]=0.0;
					break;
				}
				case 2://��ֵΪ��ɫ
				{
					Loop_Color[i][j].InColor[0]=0.0;
					Loop_Color[i][j].InColor[1]=0.05;
					Loop_Color[i][j].InColor[2]=1.0;
					Loop_Color[i][j].InColor[3]=0.0;
					break;
				}
				case 3://��ֵΪǳ��
				{
					Loop_Color[i][j].InColor[0]=0.3;
					Loop_Color[i][j].InColor[1]=0.9;
					Loop_Color[i][j].InColor[2]=0.9;
					Loop_Color[i][j].InColor[3]=0.0;
					break;
				}
				case 4://��ֵΪ��ɫ
				{
					Loop_Color[i][j].InColor[0]=0.5;
					Loop_Color[i][j].InColor[1]=0.1;
					Loop_Color[i][j].InColor[2]=0.5;
					Loop_Color[i][j].InColor[3]=0.0;
					break;
				}
			}
		}
	}
}

void Init_Loop()//��Բ���е�ɫ����ɫ���г�ʼ��
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<7;j++)
		{
			Loop[i][j]=i;
			Loop[i][10]=i;//��ʾLoop[i]�ĵ�����ɫ���Ϊi
		}
	}
}

void Loop_Clockwise(int Loop_Number)//Բ��˳ʱ����ת
{
	if(Loop_Number==5)//���Ϊ��Բ��
	{
		int temp3;
		int temp4;
		temp3=Loop[0][3];
		temp4=Loop[0][4];
		Loop[0][3]=Loop[4][3];
		Loop[0][4]=Loop[4][4];
		for(int i=3;i>0;i--)
		{
			Loop[(i+1)][3]=Loop[i][3];
			Loop[(i+1)][4]=Loop[i][4];
		}
		Loop[1][3]=temp3;
		Loop[1][4]=temp4;
	}
	else //���ΪСԲ��
	{
		int temp=-1;
		temp=Loop[Loop_Number][6];
		for(int i=5;i>=0;i--)
		{
			Loop[Loop_Number][i+1]=Loop[Loop_Number][i];
		}
		Loop[Loop_Number][0]=temp;
	}
	Change_Loop_Color();
}

void Loop_Anticlockwise(int Loop_Number)//Բ����ʱ����ת
{
	if(Loop_Number==5)//���Ϊ��Բ��
	{
		int temp3;
		int temp4;
		temp3=Loop[0][3];
		temp4=Loop[0][4];
		Loop[0][3]=Loop[1][3];
		Loop[0][4]=Loop[1][4];
		for(int i=1;i<=3;i++)
		{
			Loop[i][3]=Loop[i+1][3];
			Loop[i][4]=Loop[i+1][4];
		}
		Loop[4][3]=temp3;
		Loop[4][4]=temp4;
	}
	else //���ΪСԲ��
	{
		int temp=-1;
		temp=Loop[Loop_Number][0];
		for(int i=1;i<=6;i++)
		{
			Loop[Loop_Number][i-1]=Loop[Loop_Number][i];
		}
		Loop[Loop_Number][6]=temp;
	}
	Change_Loop_Color();
}



///////Test////////////
void Start_Change_Loop_Color()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<7;j++)
		{
			switch(StartLoop[i][j]){
			case 0://��ֵΪ��ɫ
				{
					Loop_Color[i][j].InColor[0]=1.0;
					Loop_Color[i][j].InColor[1]=0.3;
					Loop_Color[i][j].InColor[2]=0.0;
					Loop_Color[i][j].InColor[3]=0.0;
					break;
				}
				case 1://��ֵΪ��ɫ
				{
					Loop_Color[i][j].InColor[0]=0.3;
					Loop_Color[i][j].InColor[1]=1.0;
					Loop_Color[i][j].InColor[2]=0.0;
					Loop_Color[i][j].InColor[3]=0.0;
					break;
				}
				case 2://��ֵΪ��ɫ
				{
					Loop_Color[i][j].InColor[0]=0.0;
					Loop_Color[i][j].InColor[1]=0.05;
					Loop_Color[i][j].InColor[2]=1.0;
					Loop_Color[i][j].InColor[3]=0.0;
					break;
				}
				case 3://��ֵΪǳ��
				{
					Loop_Color[i][j].InColor[0]=0.3;
					Loop_Color[i][j].InColor[1]=0.9;
					Loop_Color[i][j].InColor[2]=0.9;
					Loop_Color[i][j].InColor[3]=0.0;
					break;
				}
				case 4://��ֵΪ��ɫ
				{
					Loop_Color[i][j].InColor[0]=0.5;
					Loop_Color[i][j].InColor[1]=0.1;
					Loop_Color[i][j].InColor[2]=0.5;
					Loop_Color[i][j].InColor[3]=0.0;
					break;
				}
			}
		}
	}
}

void Start_Loop_Clockwise(int Loop_Number)
{
	
	if(Loop_Number==5)//���Ϊ��Բ��
	{
		int temp3;
		int temp4;
		temp3=StartLoop[0][3];
		temp4=StartLoop[0][4];
		StartLoop[0][3]=StartLoop[4][3];
		StartLoop[0][4]=StartLoop[4][4];
		for(int i=3;i>0;i--)
		{
			StartLoop[(i+1)][3]=StartLoop[i][3];
			StartLoop[(i+1)][4]=StartLoop[i][4];
		}
		StartLoop[1][3]=temp3;
		StartLoop[1][4]=temp4;
	}
	else //���ΪСԲ��
	{
			////////////////Test////////////
		if(TestCount==8)
		{
			int llll=0;
			llll=llll+1;
		}

		/////////////////////
		int temp=-1;
		temp=StartLoop[Loop_Number][6];
		for(int i=5;i>=0;i--)
		{
			StartLoop[Loop_Number][i+1]=StartLoop[Loop_Number][i];
		}
		StartLoop[Loop_Number][0]=temp;
	}
	Start_Change_Loop_Color();
}

void Start_Loop_Anticlockwise(int Loop_Number)//Բ����ʱ����ת
{
	if(Loop_Number==5)//���Ϊ��Բ��
	{
		int temp3;
		int temp4;
		temp3=StartLoop[0][3];
		temp4=StartLoop[0][4];
		StartLoop[0][3]=StartLoop[1][3];
		StartLoop[0][4]=StartLoop[1][4];
		for(int i=1;i<=3;i++)
		{
			StartLoop[i][3]=StartLoop[i+1][3];
			StartLoop[i][4]=StartLoop[i+1][4];
		}
		StartLoop[4][3]=temp3;
		StartLoop[4][4]=temp4;
	}
	else //���ΪСԲ��
	{
	
		int temp=-1;
		temp=StartLoop[Loop_Number][0];
		for(int i=1;i<=6;i++)
		{
			StartLoop[Loop_Number][i-1]=StartLoop[Loop_Number][i];
		}
		StartLoop[Loop_Number][6]=temp;
	}
	Start_Change_Loop_Color();
}
/////////////////////









int hideTwoChesses(int j)
{

	/////////////////test////////////
	if(Loop[4][3]==3&&Loop[4][4]==3&&Loop[4][2]==2&&Loop[4][1]==2)
	{

	}
	////////////////////////////
	int i;
	int chess,temp1,temp2,temp3,temp4,temp5,temp6;
	chess=Loop[j][10];//��chess����Բ��j�ĵ�ɫ
	for(i=0;i<5;i++)
	{
		temp1=Loop[i][1];
		temp2=Loop[i][2];
		temp3=Loop[i][3];
		temp4=Loop[i][4];
		temp5=Loop[i][5];
		temp6=Loop[i][6];

		if(chess==Loop[i][10])
		{
			
            if(temp3==chess)
            {

                break;
            }
            else
                continue;
		}
		else
		{
			if(temp3==chess)
			{
				//��ʱ����תi��
				Loop_Anticlockwise(i);
				Save[StepCount].Direction=ANTICLOCKWISE;
				Save[StepCount].loopNumber=i;
				StepCount++;

				//��ʱ����תi��
				Loop_Anticlockwise(i);
				Save[StepCount].Direction=ANTICLOCKWISE;
				Save[StepCount].loopNumber=i;
				StepCount++;

				break;
			}
			  else if(temp5==chess || temp2==chess)
            {
                surflag=1;          //��־��1
                break;
            }
		}


	}
	return i;
}


void Intelligent_Loop()
{
	

	int temp1,temp2,temp3,temp4;
	int i;
	int firstFlag=1;//ȫ�ֱ��������ơ���һ����ɡ��ĳ���ʾֻ����һ��
	while(1)
	{
		for(int i=0;i<5;i++)//���μ��С����״̬
		{
			int flag1=0;
			for(int j=0;j<7;j++)
			{
				if(Loop[i][j]!=Loop[i][10]&&Loop[i][(j+1)%7]!=Loop[i][10])
					flag1=1;//������������ɫ�ӵ���ɫ���͵�ǰת����ɫ��ͬ
				if(Loop[i][j]==Loop[i][(j+1)%7]&&Loop[i][j]!=Loop[i][10])
				{//��ʾ������������ɫ�ӵ���ɫ��ͬ���ҵ�ǰɫ����û�����ɫ��ͬ
					flag1=2;
					break;
				}
			}

			for(int j=0;j<6;j++)
			{
				temp1=Loop[i][3];
				temp2=Loop[i][4];

				if(flag1==1)
				{
					if(temp1==Loop[i][10]||temp2==Loop[i][10])
					{
						Loop_Clockwise(i);//˳ʱ����ת��i
						Save[StepCount].Direction=CLOCKWISE;
						Save[StepCount].loopNumber=i;
						StepCount++;
					}
				}
				else if(flag1==0)
				{
					if(	temp2==Loop[i][10])
					{
					Loop_Clockwise(i);//˳ʱ����ת��i
					    Save[StepCount].Direction=CLOCKWISE;
						Save[StepCount].loopNumber=i;
						StepCount++;
					}
				}
				else if(flag1==2)
				{
					if(temp1!=temp2 || temp1==Loop[i][10] || temp2==Loop[i][10])
					{
						Loop_Clockwise(i);//˳ʱ����ת��i
						Save[StepCount].Direction=CLOCKWISE;
						Save[StepCount].loopNumber=i;
						StepCount++;
					}
				}
				else   //��ͬ���˳�
					break;
			}

		}

		bool flag = 0;
		int temp;
		int j[5];
		for(int i=0;i<5;i++)
		{
			for(j[i]=1;j[i]<6;j[i]++)//С���ϳ�3��Բ����4��Բ���Ƿ���С����ɫ��ͬ
			{
				temp=(4+j[i])%7;
				temp1=Loop[i][temp];
				if(temp1!=Loop[i][10])
				{
					flag=1;
					break;
				}
			}

			if(flag)
			{
				break;
			}
		}

		 for(i = 0; i < 5; i++)
        {//��ʾ��ɫ��ͬ
            if(j[i]<=5)
                break;
        }


		 if(i==5)//��ʾ��ɫ��ͬ
		 {
			  if(firstFlag==1)
            {

                firstFlag=0;
            }

            int flag=0;
			for(int i=0;i<5;i++)
			{

				temp1=Loop[i][3];
				temp2=Loop[i][4];

				if(temp1==temp2)
				{
					flag++;
					continue;
				}
				else if(temp1!=Loop[i][10] && temp2!=Loop[i][10])
				{

				}
				else if(temp1!=Loop[i][10] && temp2==Loop[i][10])
				{
					Loop_Anticlockwise(i);//��ʱ����תi��
		                Save[StepCount].Direction=ANTICLOCKWISE;
						Save[StepCount].loopNumber=i;
						StepCount++;

						int j=0;
						//������һ����ת����Loop[i][3]���Ѿ�ת��Loop[i][2]���������µ�����
						temp1=Loop[i][3];
						temp3=Loop[i][2];
						while(j<5 && temp1!=temp3)
						{
							Loop_Clockwise(5);//������������˳ʱ��ת������
							Save[StepCount].Direction=CLOCKWISE;
							Save[StepCount].loopNumber=5;
							StepCount++;

							temp1=Loop[i][3];//���ڴ���ת�������ڸ�������
							temp3=Loop[i][2];
							j++;
						}
						Loop_Clockwise(i);//˳ʱ��ת��i��
						Save[StepCount].Direction=CLOCKWISE;
						Save[StepCount].loopNumber=i;
						StepCount++;
				}
				else
				{
					    Loop_Clockwise(i);//˳ʱ��ת��i��
						Save[StepCount].Direction=CLOCKWISE;
						Save[StepCount].loopNumber=i;
						StepCount++;

						int j=0;
						//������һ����ת����Loop[i][4]���Ѿ�ת��Loop[i][5]���������µ�����
						temp2=Loop[i][4];
						temp4=Loop[i][5];

						while(j<5 && temp2 != temp4)
						{
							 Loop_Clockwise(5);//˳ʱ��ת����
						     Save[StepCount].Direction=CLOCKWISE;
						     Save[StepCount].loopNumber=5;
						     StepCount++;

							 temp2=Loop[i][4];
							 temp4=Loop[i][5];
							 j++;
						}
						     Loop_Anticlockwise(i);//��ʱ��ת��i��
						     Save[StepCount].Direction=ANTICLOCKWISE;
						     Save[StepCount].loopNumber=i;
						     StepCount++;
				}
			}
			if(flag==5)//��ʱ�����Ѿ�ʵ������ɫ�����������
			{
				 int i,step,surplus; //step ����Ҫת���Ĳ�����surplus,�ָ�����

				  int direction;  //����surflag��ֵȷ��С����ת������;
				  
				  for(int j=0;j<5;j++)
				  {
					  i=hideTwoChesses(j);
					  step=j-i;

					

					  if(step<0)
					  {
						  surplus=5+step;
						  while(step<0)
						  {
							  //˳ʱ��ת����
							 Loop_Clockwise(5);
						     Save[StepCount].Direction=CLOCKWISE;
						     Save[StepCount].loopNumber=5;
						     StepCount++;
							  step++;
						  }

						  if(surflag==1)
						  {
							  int temp2,temp5;

							  temp2=Loop[i][2];
							  temp5=Loop[i][5];

							  if(temp2!=Loop[i][10])
							  {
								  direction=1;
							  }

							  if(temp5!=Loop[i][10])
							  {
								  direction=0;
							  }
							  surflag=0;
						  }
						  else
						  {
							  direction=1;
						  }

						  //��תi��
						  if(direction==1)
						  {
						  	 Loop_Clockwise(i);
						     Save[StepCount].Direction=direction;
						     Save[StepCount].loopNumber=i;
						     StepCount++;
						  }
						  else
						  {
							 Loop_Anticlockwise(i);
						     Save[StepCount].Direction=direction;
						     Save[StepCount].loopNumber=i;
						     StepCount++;
						  }
						  //��תi��
						  if(direction==1)
						  {
						  	 Loop_Clockwise(i);
						     Save[StepCount].Direction=direction;
						     Save[StepCount].loopNumber=i;
						     StepCount++;
						  }
						  else
						  {
							 Loop_Anticlockwise(i);
						     Save[StepCount].Direction=direction;
						     Save[StepCount].loopNumber=i;
						     StepCount++;
						  }
							  
						  for(int i=0;i<surplus;i++)
						  {
							  //˳ʱ����ת��
							  Loop_Clockwise(5);
							  Save[StepCount].Direction=CLOCKWISE;
							  Save[StepCount].loopNumber=5;
							  StepCount++;
						  }
					  }
					  else if(step>0)
					  {
						  surplus=5-step;
						   while(step>0)
						   {
							   //��������������ʱ����ת����
							    Loop_Anticlockwise(5);
							  Save[StepCount].Direction=ANTICLOCKWISE;
							  Save[StepCount].loopNumber=5;
							  StepCount++;

							  step--;
						   }

						   if(surflag==1)
						   {
							   int temp2,temp5;

							   temp2=Loop[i][2];
							   temp5=Loop[i][5];

                               if(temp2!=Loop[i][10])
							   {
								   direction=1;
							   }
							   if(temp5!=Loop[i][10])
							   {
								   direction=0;
							   }

							   surflag=0;
						   }
						   else
							   direction=1;
						     //��תi��
						  if(direction==1)
						  {
						  	 Loop_Clockwise(i);
						     Save[StepCount].Direction=direction;
						     Save[StepCount].loopNumber=i;
						     StepCount++;
						  }
						  else
						  {
							 Loop_Anticlockwise(i);
						     Save[StepCount].Direction=direction;
						     Save[StepCount].loopNumber=i;
						     StepCount++;
						  }

						        //��תi��
						  if(direction==1)
						  {
						  	 Loop_Clockwise(i);
						     Save[StepCount].Direction=direction;
						     Save[StepCount].loopNumber=i;
						     StepCount++;
						  }
						  else
						  {
							 Loop_Anticlockwise(i);
						     Save[StepCount].Direction=direction;
						     Save[StepCount].loopNumber=i;
						     StepCount++;
						  }

						   for(int i=0;i<surplus;i++)
						   {
							   //��ʱ��ת������
							   Loop_Anticlockwise(5);
							   Save[StepCount].Direction=ANTICLOCKWISE;
							   Save[StepCount].loopNumber=5;
							   StepCount++;

						   }

					  }
					  else
					  {
                       int temp2,temp5;
					   temp2=Loop[i][2];
					   temp5=Loop[i][5];

					   if(temp2!=Loop[i][10])
					   {
						   //˳ʱ����ת��i
						   Loop_Clockwise(i);
						   Save[StepCount].Direction=CLOCKWISE;
						   Save[StepCount].loopNumber=i;
						   StepCount++;

						   //˳ʱ����ת��i
						   Loop_Clockwise(i);
						   Save[StepCount].Direction=CLOCKWISE;
						   Save[StepCount].loopNumber=i;
						   StepCount++;

						   j--;

						   continue;
					   }
					   else if(temp5!=Loop[i][10])
					   {
						   //��ʱ����תi��
						   Loop_Anticlockwise(i);
						   Save[StepCount].Direction=ANTICLOCKWISE;
						   Save[StepCount].loopNumber=i;
						   StepCount++;

						    //��ʱ����תi��
						   Loop_Anticlockwise(i);
						   Save[StepCount].Direction=ANTICLOCKWISE;
						   Save[StepCount].loopNumber=i;
						   StepCount++;

						   j--;
                           continue;
					   }
					   else
					   {
						   continue;
					   }

					  }
				  }
				  break;
			}

		 }



		 //�����������˳ʱ��ת������
		 Loop_Clockwise(5);
		 Save[StepCount].Direction=CLOCKWISE;
		 Save[StepCount].loopNumber=5;
		 StepCount++;
	}//��ʱ������Բ���⣬����С������5���Ӷ��Ѿ�ʵ����ɫ��λ

}

void Run()//�������Ҫ����
{
	//��ʼ��Բ��
	if(OnceFlag)
	{
	Init_Loop();
	Change_Loop_Color();//��ʼ��Բ����ɫ
	

	 OnceFlag=0;
	}
}