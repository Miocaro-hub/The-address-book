#define _CRT_SECURE_NO_WARNINGS
//����
//ͨѶ¼��Ҫʵ�ֵĹ���:
//1.���1000�����ѵ���Ϣ:����,�绰,�Ա�,סַ,����
//2.���Ӻ�����Ϣ
//3.ɾ��ָ�����ֵĺ�����Ϣ
//4.���Һ�����Ϣ
//5.�޸ĺ�����Ϣ
//6.��ӡ������Ϣ
//7.���������Ϣ......(�����Լ�ʵ��)

#include"contact.h"

void menu()
{
	printf("**********************************\n");
	printf("******1.add        2.del   *******\n");
	printf("******3.search     4.modify*******\n");
	printf("******5.show       6.sort  *******\n");
	printf("************0.exit****************\n");
	printf("**********************************\n");

}

int main()
{
	int input = 0;

	//����Ҫ����һ��ͨѶ¼
	struct Contact con; //con����ͨѶ¼,�������1000��Ԫ�ص������size

	//��ʼ��ͨѶ¼
	InitContact(&con);

	//
	do
	{
		menu();
		printf("��ѡ��->");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}
	while (input);
	{

	}
	return 0;
}

