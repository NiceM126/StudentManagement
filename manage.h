#ifndef MANAGE_H
#define MANAGE_H
#include<iostream>//使用标准输入输出流
#include<fstream>//文件流
#include<sstream>//string流
using namespace std;//std命名空间

class Manage
{
private:
    string number;//管理员账号
    string code;//管理员密码
public:
    Manage();//默认构造函数
    int getManage();//管理员登录函数
    int modManInfo();//修改管理员信息函数
    void addStu();//添加学生函数
    void delStu();//删除学生函数
    void modStuScore();//录入学生成绩函数
    ~Manage();//析构函数
};

#endif
