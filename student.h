#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
class Student
{

private:
    string name;//ѧ������
    string number;//ѧ��ѧ��
    string code;//ѧ������
    int a;//����Ŀ����
    int b;
    int c;
    int d;

public:
    Student();//Ĭ���޲ι��캯��
    int getStu();//ѧ����¼��֤
    void modStuInfo();//ѧ����Ϣ�޸�
    void getStuScore();//�鿴ѧ������
    int getA();
    int getB();
    int getC();
    int getD();
    void setA(int a);
    void setB(int b);
    void setC(int c);
    void setD(int d);
    string getName();
    void setName(string name);


    ~Student();//��������

};

#endif
