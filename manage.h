#ifndef MANAGE_H
#define MANAGE_H
#include<iostream>//ʹ�ñ�׼���������
#include<fstream>//�ļ���
#include<sstream>//string��
#include<vector>
#include<algorithm>
using namespace std;//std�����ռ�

class Manage
{
private:
    string number;//����Ա�˺�
    string code;//����Ա����
public:
    Manage();//Ĭ�Ϲ��캯��
    int getManage();//����Ա��¼����
    int modManInfo();//�޸Ĺ���Ա��Ϣ����
    void addStu();//���ѧ������
    void delStu();//ɾ��ѧ������
    void modStuScore();//�޸�ѧ���ɼ�����
    void saveScore();
    void sortScore();

    ~Manage();//��������
};

#endif
