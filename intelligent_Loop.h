#ifndef defi_IL
#define defi_IL
#define CLOCKWISE 1//��ʾ˳ʱ��
#define ANTICLOCKWISE 0//��ʾ��ʱ��
 typedef struct Color
{
	float InColor[4];
}Color;//�����洢��ɫ��ֵ

typedef struct StepSave
{
	int loopNumber;//Բ�����
	int Direction;//˳��ʱ��
}StepSave;

extern int StartLoop[6][11];//�����洢Բ�̵ĳ�ʼ״̬�����ں����Ľ�����ʾ
extern Color Loop_Color[6][11];//�����洢��ɫ
extern StepSave Save[1000];
extern int StepCount;//����
extern int Number;
extern int Loop[6][11];//����Loop[i][10]�洢��i��Բ������ɫ���
///////////Test//////////
extern int TestCount;
///////////////////////
void Run();//�������Ҫ����
void Start_Change_Loop_Color();
void Start_Loop_Clockwise(int Loop_Number);
void Start_Loop_Anticlockwise(int Loop_Number);//Բ����ʱ����ת
void Intelligent_Loop();
void Loop_Anticlockwise(int Loop_Number);//Բ����ʱ����ת
void Loop_Clockwise(int Loop_Number);//Բ��˳ʱ����ת
void Start_Loop_Anticlockwise(int Loop_Number);//Բ����ʱ����ת
void Start_Loop_Clockwise(int Loop_Number);
#endif