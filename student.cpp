#include "student.h"

Student::Student()
{
    this->name = "未命名";
    this->code = "";
}


int Student::getStu()
{
    cout << "欢迎进入学生信息管理系统！(学生)" << endl;
    string a, b, c;
    cout << "请输入姓名：" << endl;
    cin >> a;
    cout << "请输入学号：" << endl;
    cin >> b;
    cout << "请输入密码：" << endl;
    cin >> c;
    string na, nu, co;
    int flag = 0;
    ifstream fin("C:\\Users\\nie\\Qt\\StudentManagement\\student.txt");//打开文件
    if(fin.eof()) {
        cout << "打开student.txt失败！" << endl;
    } else {
        while(!fin) {
            string str;
            getline(fin, str); //读入每一行
            istringstream strin(str);//定义strin流
            strin >> na >> nu >> co;
            if((a == na) && b == nu && c == co) {
                flag = 1;
                return 1;
                cout << "你已成功登陆！" << endl;
                break;
            }
        }
        if(flag == 0) {
            cout << "输入不正确！" << endl;
            return 0;
            fin.close();
        }
    }
}

void Student::modStuInfo()
{
    int t = 0; //标签，判断账号是否存在
    string a, b, c, d, e, f; //定义变量
    cout << "请输入个人信息：" << endl;
    cout << "姓名:" << endl;
    cin >> d;
    cout << "学号：" << endl;
    cin >> e;
    cout << "密码：" << endl;
    cin >> f;
    ifstream in("C:\\Users\\nie\\Qt\\StudentManagement\\student.txt");//打开文件
    string s1;
    while(getline(in, s1)) { //读入数据
        istringstream sin(s1);//定义sin1流
        sin >> a >> b >> c;
        ofstream out("C:\\Users\\nie\\Qt\\StudentManagement\\student1.txt", ios::app); //打开并写入新文件
        if((a == d) && (b == e) && (c == f)) { //判断是否输入正确
            t = 1;
            string m, p, q; //定义变量
            cout << "请输入修改后的信息:" << endl;
            cout << "姓名：" << endl;
            cin >> m;
            cout << "学号：" << endl;
            cin >> p;
            cout << "密码：" << endl;
            cin >> q;
            out << m << " " << p << " " << q << endl;
            cout << "修改成功" << endl;
        } else {
            out << a << " " << b << " " << c << endl; //写入未修改的内容
            out.close();//关闭文件
        }
    }
    in.close();//关闭文件
    ifstream filein("C:\\Users\\nie\\Qt\\StudentManagement\\student1.txt");//打开文档
    ofstream fileout("C:\\Users\\nie\\Qt\\StudentManagement\\student.txt", ios::out); //打开文档并清空内容
    string s;
    while(getline(filein, s)) { //将修改后的内容写到文件中去
        fileout << s << endl;
    }
    filein.close();//关闭文件
    fileout.close();//关闭文件
    if(t == 0) { //账号输入错误
        cout << "账号输入错误！" << endl;
    }
    system("del C:\\Users\\nie\\Qt\\StudentManagement\\student1.txt");//删除文件
}

void Student::getStuScore()
{
    string s, a, b, c, d;
    cout << "请输入你的姓名：" << endl;
    cin >> s;
    int flag = 0;
    ifstream fin("C:\\Users\\nie\\Qt\\StudentManagement\\score.txt");//打开文件
    if(fin.eof()) {
        cout << "打开score.txt失败！" << endl;
    } else {
        while(!fin.eof()) {
            string n;
            getline(fin, n); //读入每一行
            istringstream strin(n);//定义strin流
            strin >> n >> a >> b >> c >> d;
            if(s == n) {
                flag = 1;
                cout << "已查找到你的成绩！" << endl;
                cout << "高等数学： " << "大学物理： " << "计算机基础： " << "C语言程序设计： " << endl;
                cout << "     " << a << "         " << b << "          " << c << "           " << d << endl;
                system("pause");
            }
        }
        if(flag == 0) {
            cout << "未查找到你的成绩，请联系老师录入！" << endl;
            return ;
            fin.close();
        }
    }


}

Student::~Student()
{
}


