#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
class Student
{
private:
    string name;//学生姓名
    string number;//学生学号
    string code;//学生密码

public:
    Student();//默认构造函数
    int getStu();//学生登录验证
    void modStuInfo();//学生信息修改
    void getStuScore();//查看学生分数

    ~Student();//析构函数

};

#endif
