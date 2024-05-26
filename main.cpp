#include <iostream>
#include "manage.h"
#include "student.h"
using namespace std;


void display_1();
void display_2();
void display_3();

//管理员相关函数
void addStu()//进入添加学生
{
    Manage manage1;//实例化对象
    for (int temp = 1; temp;) { //循环添加学生
        manage1.addStu();//调用Manage类中的addStu（）函数
        cout << "是否继续添加学生（Y(y)：是，N(n)：否）" << endl; //判断是否循环
        char a;
        cin >> a;
        if(a == 'Y' || a == 'y') {
            temp = 1;
        } else if(a == 'N' || a == 'n') {
            temp = 0;
        } else {
            cout << "输入错误!" << endl;
            temp = 1;
        }
    }
}

void delStu()//进入删除学生
{
    Manage manage2;//实例化对象
    for (int temp = 1; temp;) { //循环删除学生
        manage2.delStu();//调用Manage类中的delStu()函数
        cout << "是否继续删除学生（Y(y)：是，N(n)：否）" << endl; //判断是否循环
        char a;
        cin >> a;
        if(a == 'Y' || a == 'y') {
            temp = 1;
        } else if(a == 'N' || a == 'n') {
            temp = 0;
        } else {
            cout << "输入错误!" << endl;
            temp = 1;
        }
    }
}

void modManInfo()//管理员修改信息函数
{
    Manage manage3;//实例化对象
    for (int temp = 1; temp;) { //循环修改
        manage3.modManInfo();//调用Manage类中的modManInfo()函数
        cout << "是否继续修改（Y(y)：是，N(n)：否）" << endl; //循环判断
        char a;
        cin >> a;
        if(a == 'Y' || a == 'y') {
            temp = 1;
        } else if(a == 'N' || a == 'n') {
            temp = 0;
        } else {
            cout << "输入错误!" << endl;
            temp = 1;
        }
    }
}

void modStuScore()//管理员修改学生成绩函数
{
    Manage manage4;//实例化对象
    for (int temp = 1; temp;) { //循环修改
        manage4.modStuScore();//调用Manage类中的modStuScore()函数
        cout << "是否继续修改（Y(y)：是，N(n)：否）" << endl; //循环判断
        char a;
        cin >> a;
        if(a == 'Y' || a == 'y') {
            temp = 1;
        } else if(a == 'N' || a == 'n') {
            temp = 0;
        } else {
            cout << "输入错误!" << endl;
            temp = 1;
        }
    }
}

void getManageLogin()//管理员登录
{
    Manage manage5;
    for(int temp = 1; temp;) {
        int b;
        b = manage5.getManage();
        if(b == 1) {
            while(true) {
                system("cls");//清除屏幕内容
                cout << "**********************************" << endl;
                cout << "*******学生成绩管理系统（管理员）" << endl;
                cout << "*******请选择相应功能：***********" << endl;
                cout << "******* 1.增加学生 ***************" << endl;
                cout << "******* 2.删除学生 ***************" << endl;
                cout << "******* 3.修改学生成绩 ***********" << endl;
                cout << "******* 5.退出系统 ***************" << endl;
                int t;
                cin >> t;
                switch (t) {
                    case 1:
                        addStu();
                        break;
                    case 2:
                        delStu();
                        break;
                    case 3:
                        modStuScore();
                        break;
                    case 4:
                        cout << "感谢您的使用！" << endl;
                        system("pause");
                        display_1();
                    default:
                        cout << "输入错误！" << endl;
                }
            }
        } else { //登录失败判断是否再次登陆
            cout << "是否继续登陆（Y(y)：是，N(n)：否）" << endl; //循环判断
            char a;
            cin >> a;
            if(a == 'Y' || a == 'y') {
                temp = 1;
            } else if(a == 'N' || a == 'n') {
                temp = 0;
            } else {
                cout << "输入错误!" << endl;
                temp = 1;
            }
        }
    }
}


void modStuInfo()//学生修改信息函数
{
    Student student1;//实例化对象
    for (int temp = 1; temp;) { //循环修改
        student1.modStuInfo();//
        cout << "是否继续修改（Y(y)：是，N(n)：否）" << endl; //循环判断
        char a;
        cin >> a;
        if(a == 'Y' || a == 'y') {
            temp = 1;
        } else if(a == 'N' || a == 'n') {
            temp = 0;
        } else {
            cout << "输入错误!" << endl;
            temp = 1;
        }
    }

}

void getStuScore()//学生成绩查看函数
{
    Student student2;//实例化对象
    for (int temp = 1; temp;) { //循环查看
        student2.getStuScore();
        cout << "是否继续查看（Y(y)：是，N(n)：否）" << endl; //循环判断
        char a;
        cin >> a;
        if(a == 'Y' || a == 'y') {
            temp = 1;
        } else if(a == 'N' || a == 'n') {
            temp = 0;
        } else {
            cout << "输入错误!" << endl;
            temp = 1;
        }
    }

}


void getStudentLogin()//学生登录函数
{
    Student student3;//实例化对象
    for (int temp = 1; temp;) { //循环登陆
        int a;
        a = student3.getStu();
        if(a == 1) { //登陆成功
            while(true) {
                system("cls");//清除屏幕内容
                cout << "********************************" << endl;
                cout << "******* 学生成绩管理系统（学生）*****" << endl;
                cout << "******* 请选择相应功能：***********" << endl;
                cout << "******* 1.查看成绩 **************" << endl;
                cout << "******* 2.退出系统 ***************" << endl;
                int t;
                cin >> t;
                switch(t) {
                    case 1:
                        getStuScore();
                        break;
                    case 2:
                        cout << "感谢您的使用！" << endl;
                        system("pause");
                        display_1();
                    default:
                        cout << "输入错误！" << endl; //输入错误
                }
            }
        } else {
            cout << "是否继续输入（Y(y)：是，N(n)：否）" << endl; //循环判断
            char a;
            cin >> a;
            if(a == 'Y' || a == 'y') {
                temp = 1;
            } else if(a == 'N' || a == 'n') {
                temp = 0;
            } else {
                cout << "输入错误!" << endl;
                temp = 1;
            }
        }
    }
}


void display_3()//功能菜单显示函数（学生端）
{
    while(true) {
        system("cls");//清除屏幕内容
        cout << "**********************************" << endl;
        cout << "欢迎进入学生成绩管理系统！(学生)" << endl;
        cout << "******* 1.登陆账号 ***************" << endl;
        cout << "******* 2.修改学生信息 ***********" << endl;
        cout << "******* 3.退出系统 ***************" << endl;
        int t;
        cin >> t;
        switch(t) {
            case 1:
                getStudentLogin();
                break;
            case 2:
                modStuInfo();
                break;
            case 3:
                cout << "感谢您的使用！" << endl; //退出
                system("pause");
                display_1();
            default :
                cout << "输入错误！" << endl; //错误提示
        }
    }
}


void display_2()//功能菜单显示函数（管理员端）
{
    while(true) {
        system("cls");//清除屏幕内容
        cout << "**********************************" << endl;
        cout << "欢迎进入学生成绩管理系统！(管理员)" << endl;
        cout << "******* 1.登陆账号 ***************" << endl;
        cout << "******* 2.修改管理员信息 *********" << endl;
        cout << "******* 3.退出系统 ***************" << endl;
        int t;
        cin >> t;
        switch(t) {
            case 1:
                getManageLogin();
                break;
                modManInfo();
                break;
            case 3:
                cout << "感谢您的使用！" << endl;
                system("pause");
                display_1();
            default :
                cout << "输入错误！" << endl; //输入错误
        }
    }
}

void display_1()//功能菜单显示函数
{
    while(true) {
        system("cls");//清除屏幕内容
        cout << "*****************************" << endl;
        cout << "**** 欢迎进入学生成绩管理系统！" << endl;
        cout << "**** 请选择以何种身份登录？" << endl;
        cout << "**** 1.管理员 ****" << endl;
        cout << "**** 2.学生 ****" << endl;
        cout << "**** 3.退出 ****" << endl;
        int t;
        cin >> t;
        switch(t) {
            case 1:
                display_2();
                break;
            case 2:
                display_3();
                break;
            case 3:
                cout << "感谢您的使用！" << endl; //退出
                system("pause");
                exit(0);
            default :
                cout << "输入错误！" << endl; //错误提示
        }
    }
}

int main()
{
    while(1) {
        display_1();
    }
    return 0;
}
