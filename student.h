#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
class Student
{
private:
    string name;//ѧ������
    string number;//ѧ��ѧ��
    string code;//ѧ������

public:
    Student();//Ĭ�Ϲ��캯��
    int getStu();//ѧ����¼��֤
    void modStuInfo();//ѧ����Ϣ�޸�
    void getStuScore();//�鿴ѧ������

    ~Student();//��������

};

#endif
