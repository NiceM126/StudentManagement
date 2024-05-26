#include "manage.h"

Manage::Manage()
{
}

int Manage::getManage()
{
    cout << "欢迎学生信息管理系统！(管理员)" << endl;
    string a, b;
    cout << "请输入账号：" << endl;
    cin >> a;
    cout << "请输入密码：" << endl;
    cin >> b;
    cout << "账号：" << a << " " << "密码：" << b << endl;
    ifstream in("C:\\Users\\nie\\Qt\\StudentManagement\\manage.txt"); //打开文件
    string n, c;
    int i = 0; //标签，判断账号的存在与否
    if(!in) { //文件尾就结束
        char temp;
        string num = "NIE";
        string cod = "123456";
        cout << "打开文件manage.txt失败。。。" << endl;
        cout << "是否创建manage.txt ? (Y：创建，N：退出系统)" << endl;
        cin >> temp;
        if(temp == 'Y' || temp == 'y') {
            ofstream outtxt("C:\\Users\\nie\\Qt\\StudentManagement\\manage.txt", ios::out); //创建新文件
            cout << "创建manage.txt完成！" << endl;
            cout << "即将创建默认管理员信息..." << endl;
            outtxt << num << " " << cod << endl;
            cout << "录入成功！" << endl;
            outtxt.close();
        } else if(temp == 'N' || temp == 'n') {
            exit(0);
        } else {
            cout << "输入错误!" << endl;
            exit(-1);
        }
    } else {
        while(!in.eof()) {
            string s;
            getline(in, s); //读入每一行
            istringstream sin(s);//定义sin流
            sin >> n >> c;
            if((a == n) && (b == c)) { //判断是否存在
                i = 1;
                return 1;//返回真值
                cout << "登陆成功！" << endl;
                break;
            }
        }
        in.close();
    }
    if(i == 0) { //未找到账号
        cout << "输入不正确！" << endl;
        return 0;//返回假值
        in.close();//关闭文件
    }
    return 0;
}

int Manage::modManInfo()
{
    int t = 0; //标签，是否存在该账号
    string a, b, c, d;
    cout << "请输入管理员信息：" << endl;
    cout << "账号：" << endl;
    cin >> c;
    cout << "密码：" << endl;
    cin >> d;
    ifstream in("C:\\Users\\nie\\Qt\\StudentManagement\\manage.txt");//打开文件
    string s1;
    while( getline(in, s1)) { //读入数据
        istringstream sin(s1);//定义sin流
        sin >> a >> b;
        ofstream out("C:\\Users\\nie\\Qt\\StudentManagement\\manage1.txt", ios::app); //打开文件
        if((a == c) && (b == d)) { //存在该账号
            t = 1;
            string m, p;
            cout << "请输入修改后的信息:" << endl;
            cout << "姓名：" << endl;
            cin >> m;
            cout << "密码：" << endl;
            cin >> p;
            out << m << " " << p << endl;
            cout << "修改成功" << endl;
        } else {
            out << a << " " << b << endl; //未修改
            out.close();
        }
    }
    in.close();//关闭文件
    ifstream filein("C:\\Users\\nie\\Qt\\StudentManagement\\manage1.txt");//打开文档
    ofstream fileout("C:\\Users\\nie\\Qt\\StudentManagement\\manage.txt", ios::out); //打开文档并清空内容
    string s;
    while(getline(filein, s)) { //将修改后的内容写到文件中去
        fileout << s << endl;
    }
    filein.close();//关闭文件
    fileout.close();//关闭文件
    if(t == 0) { //不存在该账号
        cout << "输入错误！" << endl;
    }
    system("del C:\\Users\\nie\\Qt\\StudentManagement\\manage1.txt");
}

void Manage::addStu()
{
    ofstream fout("C:\\Users\\nie\\Qt\\StudentManagement\\student.txt", ios::app); //以追加方式打开文件ofstream:写入模式
    string a, b, c;
    cout << "请输入添加的学生相应信息！" << endl;
    cout << "姓名：" << endl;
    cin >> a;
    cout << "学号：" << endl;
    cin >> b;
    cout << "密码：" << endl;
    cin >> c;
    fout << a << " " << b << " " << c << " " << endl;
    fout.close();//关闭文件
}

void Manage::delStu()
{
    ifstream filein("C:\\Users\\nie\\Qt\\StudentManagement\\student.txt");//打开文件(读取模式)
    if(!filein) {
        cout << "打开文件失败！" << endl;
    } else {
        string t, m;
        int n = 0; //标签，是否有这个读者
        cout << "请输入删除学生的姓名：" << endl;
        cin >> m;
        cout << "请输入删除学生的学号：" << endl;
        cin >> t;
        do {
            string x, y, z; //定义变量
            string s;
            getline(filein, s); //读入每一行
            istringstream sin(s);
            sin >> x >> y >> z; //把s中第一个字符串给a
            ofstream fileout("C:\\Users\\nie\\Qt\\StudentManagement\\student1.txt", ios::app); //写到新文件中去(追加写)
            if(m != x || t != y) { //判断是否为删除的地方
                fileout << s << endl;    //写入数据
            }
            if(m == x && t == y) { //判断是否为删除的地方
                n = 1;
                cout << "原学生信息为:" << endl;
                cout << "姓名：" << x << endl;
                cout << "学号：" << y << endl;
                cout << "密码：" << z << endl;
                cout << "是否删除？（Y(y)：是，N(n)：否）" << endl;
                char a;//定义变量
                cin >> a;
                if(a == 'Y' || a == 'y') {
                    cout << "删除成功！" << endl;
                    system("pause");
                } else if(a == 'N' || a == 'n') {
                    cout << "未删除！" << endl;
                    fileout << x << " " << y << " " << z << endl; //写入到文件
                } else {
                    cout << "输入错误！" << endl;
                    system("pause");
                }
                fileout.close();//关闭文件
            }
        } while(!filein.eof()); //判断是否到文件尾
        if(n == 0) { //不存在这个学生
            cout << "未找到要删除的学生！" << endl;
        }
    }
    filein.close();//关闭
    ifstream filei("C:\\Users\\nie\\Qt\\StudentManagement\\student1.txt");//打开文档
    ofstream fileout("C:\\Users\\nie\\Qt\\StudentManagement\\student.txt", ios::out); //打开文档并清空内容(只写方式)
    for(string s; getline(filei, s);) { //将修改后的内容写到文件中去
        fileout << s << endl;
    }
    filei.close();//关闭文件
    fileout.close();//关闭文件
    system("del C:\\Users\\nie\\Qt\\StudentManagement\\student1.txt");//删除文件副本
}

void Manage::modStuScore()
{
    string s, a, b, c, d;
    int flag = 0;
    char t;

    cout << "请输入学生姓名：" << endl;
    cin >> s;
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
                cout << "已查找到学生成绩！" << endl;
                cout << "高等数学： " << "大学物理： " << "计算机基础： " << "C语言程序设计： " << endl;
                cout << "     " << a << "         " << b << "          " << c << "           " << d << endl;
                cout << "是否修改？（Y(y)：是，N(n)：否）" << endl;
                cin >> t;
                if(t == 'Y' || t == 'y') {

                    while (true) {
                        system("cls");//清除屏幕内容
                        cout << "**********************************" << endl;
                        cout << "*******学生成绩管理系统（管理员）" << endl;
                        cout << "*******录入学生成绩：*************" << endl;
                        cout << "******* 1.高等数学 ***************" << endl;
                        cout << "******* 2.大学物理 ***************" << endl;
                        cout << "******* 3.计算机基础 *************" << endl;
                        cout << "******* 4.C语言程序设计 **********" << endl;
                        cout << "******* 5.退出 *******************" << endl;
                        int temp;
                        cin >> temp;
                        switch (temp) {
                            case 1:
                                cout << "成绩1为：" << endl;
                                cin >> temp;
                                cout << "录入成功！" << endl;
                                break;
                            case 2:
                                cout << "成绩2为：" << endl;
                                cin >> temp;
                                cout << "录入成功！" << endl;
                                break;
                            case 3:
                                cout << "成绩3为：" << endl;
                                cin >> temp;
                                cout << "录入成功！" << endl;
                                break;
                            case 4:
                                cout << "成绩4为：" << endl;
                                cin >> temp;
                                cout << "录入成功！" << endl;
                                break;
                            case 5:
                                system("pause");
                                return;
                                break;
                            default:
                                cout << "输入错误！" << endl;

                        }
                    }
                } else if(t == 'N' || t == 'n') {
                    cout << "未修改！" << endl;
                } else {
                    cout << "输入错误！" << endl;
                    system("pause");
                }
                fin.close();//关闭文件
                system("pause");
            }
        }
        if(flag == 0) {
            cout << "未查找到此学生的成绩，请录入！" << endl;
            return ;
            fin.close();
        }
    }
}

Manage::~Manage()
{
}
