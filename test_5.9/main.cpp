//��������Ϸ
#include<iostream>
using namespace std;
//timeϵͳʱ��ͷ�ļ�����
#include<ctime>
int main()
{
	//�������������ӣ����������õ�ǰϵͳʱ�����������������ֹÿ�ζ�������ͬ���������
	srand((unsigned int)time(NULL));//�����timeû�а���ͷ�ļ�Ϊʲô�ܹ�ִ���أ�
	//1��ϵͳ���������
	int num = rand() % 100 + 1;  //rand()%100 + 1 ���� 0 +1 ~99+ 1 �����
	//����rand���ɵ���α�����
	//cout << num << endl;
	//2����ҽ��в²�
	cout << "���������²������,������λ���" << endl;
	int val = 0;//�����������
	int i = 1;
	while (i<6)
	{
		cin >> val;

		//3���ж���ҵĲ²�
		if (val > num)
		{
			cout << "���²�Ĺ���" << endl;
		}
		else if (val < num)
		{
			cout << "���²�Ĺ�С" << endl;
		}
		else
		{
			cout << "��ϲ��¶���" << endl;
			break;//�����˳���ǰ��ѭ��

		}
		i++;
		
	}
	//�¶�   �˳���Ϸ
	//�´�   ��ʾ�µĽ��������С   ���·��ص�2��

	cout << "��ǰ����������" << endl;
	return 0;
}