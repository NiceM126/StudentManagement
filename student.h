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
    string name;//学生姓名
    string number;//学生学号
    string code;//学生密码
    int a;//各科目分数
    int b;
    int c;
    int d;

public:
    Student();//默认无参构造函数
    int getStu();//学生登录验证
    void modStuInfo();//学生信息修改
    void getStuScore();//查看学生分数
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


    ~Student();//析构函数

};

#endif
