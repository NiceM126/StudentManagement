#include "manage.h"
#include "student.h"
Manage::Manage()
{
}

int Manage::getManage()
{
    cout << "��ӭѧ����Ϣ����ϵͳ��(����Ա)" << endl;
    string a, b;
    cout << "�������˺ţ�" << endl;
    cin >> a;
    cout << "���������룺" << endl;
    cin >> b;
    cout << "�˺ţ�" << a << " " << "���룺" << b << endl;
    ifstream in("C:\\Users\\nie\\Qt\\StudentManagement\\manage.txt"); //���ļ�
    string n, c;
    int i = 0; //��ǩ���ж��˺ŵĴ������
    if(!in) {
        char temp;
        string num = "NIE";//��ʼ����Ա�˺�
        string cod = "123456";
        cout << "���ļ�manage.txtʧ�ܡ�����" << endl;
        cout << "�Ƿ񴴽�manage.txt ? (Y��������N���˳�ϵͳ)" << endl;
        cin >> temp;
        if(temp == 'Y' || temp == 'y') {
            ofstream outtxt("C:\\Users\\nie\\Qt\\StudentManagement\\manage.txt", ios::out); //�������ļ�
            cout << "����manage.txt��ɣ�" << endl;
            cout << "��������Ĭ�Ϲ���Ա��Ϣ..." << endl;
            outtxt << num << " " << cod << endl;
            cout << "¼��ɹ���" << endl;
            outtxt.close();
        } else if(temp == 'N' || temp == 'n') {
            exit(0);
        } else {
            cout << "�������!" << endl;
            exit(-1);
        }
    } else {
        while(!in.eof()) {
            string s;
            getline(in, s); //����ÿһ��
            istringstream sin(s);//����sin��
            sin >> n >> c;
            if((a == n) && (b == c)) { //�ж��Ƿ����
                return 1;//������ֵ
                cout << "��½�ɹ���" << endl;
                break;
            }
        }
        in.close();
    }
    if(i == 0) { //δ�ҵ��˺�
        cout << "���벻��ȷ��" << endl;
        return 0;//���ؼ�ֵ
        in.close();//�ر��ļ�
    }
    return 0;
}

int Manage::modManInfo()
{
    int t = 0; //��ǩ���Ƿ���ڸ��˺�
    string a, b, c, d;
    cout << "���������Ա��Ϣ��" << endl;
    cout << "�˺ţ�" << endl;
    cin >> c;
    cout << "���룺" << endl;
    cin >> d;
    ifstream in("C:\\Users\\nie\\Qt\\StudentManagement\\manage.txt");//���ļ�
    string s1;
    while(getline(in, s1)) { //��������
        istringstream sin(s1);//����sin��
        sin >> a >> b;
        ofstream out("C:\\Users\\nie\\Qt\\StudentManagement\\manage1.txt", ios::app); //���ļ�
        if((a == c) && (b == d)) { //���ڸ��˺�
            t = 1;
            string m, p;
            cout << "�������޸ĺ����Ϣ:" << endl;
            cout << "������" << endl;
            cin >> m;
            cout << "���룺" << endl;
            cin >> p;
            out << m << " " << p << endl;
            cout << "�޸ĳɹ�" << endl;

        } else {
            out << a << " " << b << endl; //δ�޸�
            out.close();
        }
    }
    in.close();//�ر��ļ�
    ifstream filein("C:\\Users\\nie\\Qt\\StudentManagement\\manage1.txt");//���ĵ�
    ofstream fileout("C:\\Users\\nie\\Qt\\StudentManagement\\manage.txt", ios::out); //���ĵ����������
    string s;
    while(getline(filein, s)) { //���޸ĺ������д���ļ���ȥ
        fileout << s << endl;
    }
    filein.close();//�ر��ļ�
    fileout.close();//�ر��ļ�
    if(t == 0) { //�����ڸ��˺�
        cout << "�������" << endl;
    }
    system("del C:\\Users\\nie\\Qt\\StudentManagement\\manage1.txt");
    return 0;
}

void Manage::addStu()
{
    ofstream fout("C:\\Users\\nie\\Qt\\StudentManagement\\student.txt", ios::app); //��׷�ӷ�ʽ���ļ�ofstream:д��ģʽ
    string a, b, c;
    cout << "��������ӵ�ѧ����Ӧ��Ϣ��" << endl;
    cout << "������" << endl;
    cin >> a;
    cout << "ѧ�ţ�" << endl;
    cin >> b;
    cout << "���룺" << endl;
    cin >> c;
    fout << a << " " << b << " " << c << " " << endl;
    fout.close();//�ر��ļ�
}

void Manage::delStu()
{
    ifstream filein("C:\\Users\\nie\\Qt\\StudentManagement\\student.txt");//���ļ�(��ȡģʽ)
    if(!filein) {
        cout << "���ļ�ʧ�ܣ�" << endl;
    } else {
        string t, m;
        int n = 0; //��ǩ���Ƿ����������
        cout << "������ɾ��ѧ����������" << endl;
        cin >> m;
        cout << "������ɾ��ѧ����ѧ�ţ�" << endl;
        cin >> t;
        do {
            string x, y, z; //�������
            string s;
            getline(filein, s); //����ÿһ��
            istringstream sin(s);
            sin >> x >> y >> z; //��s�е�һ���ַ�����a
            ofstream fileout("C:\\Users\\nie\\Qt\\StudentManagement\\student1.txt", ios::app); //д�����ļ���ȥ(׷��д)
            if(m != x || t != y) { //�ж��Ƿ�Ϊɾ���ĵط�
                fileout << s << endl;    //д������
            }
            if(m == x && t == y) { //�ж��Ƿ�Ϊɾ���ĵط�
                n = 1;
                cout << "ԭѧ����ϢΪ:" << endl;
                cout << "������" << x << endl;
                cout << "ѧ�ţ�" << y << endl;
                cout << "���룺" << z << endl;
                cout << "�Ƿ�ɾ������Y(y)���ǣ�N(n)����" << endl;
                char a;//�������
                cin >> a;
                if(a == 'Y' || a == 'y') {
                    cout << "ɾ���ɹ���" << endl;
                    system("pause");
                } else if(a == 'N' || a == 'n') {
                    cout << "δɾ����" << endl;
                    fileout << x << " " << y << " " << z << endl; //д�뵽�ļ�
                } else {
                    cout << "�������" << endl;
                    system("pause");
                }
                fileout.close();//�ر��ļ�
            }
        } while(!filein.eof()); //�ж��Ƿ��ļ�β
        if(n == 0) { //���������ѧ��
            cout << "δ�ҵ�Ҫɾ����ѧ����" << endl;
        }
    }
    filein.close();//�ر�
    ifstream filei("C:\\Users\\nie\\Qt\\StudentManagement\\student1.txt");//���ĵ�
    ofstream fileout("C:\\Users\\nie\\Qt\\StudentManagement\\student.txt", ios::out); //���ĵ����������(ֻд��ʽ)
    for(string s; getline(filei, s);) { //���޸ĺ������д���ļ���ȥ
        fileout << s << endl;
    }
    filei.close();//�ر��ļ�
    fileout.close();//�ر��ļ�
    system("del C:\\Users\\nie\\Qt\\StudentManagement\\student1.txt");//ɾ���ļ�����
}

void Manage::modStuScore()
{
    string s;
    int a, b, c, d;
    int flag = 0;
    char t, m;

    cout << "������ѧ��������" << endl;
    cin >> s;
    ifstream fin("C:\\Users\\nie\\Qt\\StudentManagement\\score.txt");//���ļ�
    if(fin.eof()) {
        cout << "��score.txtʧ�ܣ�" << endl;
    } else {
        while(!fin.eof()) {
            string n;
            getline(fin, n); //����ÿһ��
            istringstream strin(n);//����strin��
            strin >> n >> a >> b >> c >> d;

            if(s == n) {
                flag = 1;
                cout << "�Ѳ��ҵ�ѧ���ɼ���" << endl;
                cout << "�ߵ���ѧ�� " << "��ѧ���� " << "����������� " << "C���Գ�����ƣ� " << endl;
                cout << "     " << a << "         " << b << "          " << c << "           " << d << endl;
                cout << "�Ƿ��޸ģ���Y(y)���ǣ�N(n)����" << endl;
                cin >> t;
                if(t == 'Y' || t == 'y') {

                    while (true) {
                        system("cls");//�����Ļ����
                        cout << "**********************************" << endl;
                        cout << "*******ѧ���ɼ�����ϵͳ������Ա��" << endl;
                        cout << "*******�޸�ѧ���ɼ���*************" << endl;
                        cout << "******* 1.�ߵ���ѧ ***************" << endl;
                        cout << "******* 2.��ѧ���� ***************" << endl;
                        cout << "******* 3.��������� *************" << endl;
                        cout << "******* 4.C���Գ������ **********" << endl;
                        cout << "******* 5.�˳� *******************" << endl;
                        ofstream out("C:\\Users\\nie\\Qt\\StudentManagement\\score1.txt", ios::app); //�򿪲�д�����ļ�
                        int choose, temp;
                        cin >> choose;
                        switch (choose) {
                            case 1:
                                cout << "�ɼ�1Ϊ��" << endl;
                                cin >> temp;
                                out << n << " " << temp << " " << b << " " << c << " " << d << endl;
                                cout << "¼��ɹ���" << endl;
                                break;
                            case 2:
                                cout << "�ɼ�2Ϊ��" << endl;
                                cin >> temp;
                                out << n << " " << a << " " << temp << " " << c << " " << d << endl;
                                cout << "¼��ɹ���" << endl;
                                break;
                            case 3:
                                cout << "�ɼ�3Ϊ��" << endl;
                                cin >> temp;
                                out << n << " " << a << " " << b << " " << temp << " " << d << endl;
                                cout << "¼��ɹ���" << endl;
                                break;
                            case 4:
                                cout << "�ɼ�4Ϊ��" << endl;
                                cin >> temp;
                                out << n << " " << a << " " << b << " " << c << " " << temp << endl;
                                cout << "¼��ɹ���" << endl;
                                break;
                            case 5:
                                system("pause");
                                return;
                                break;
                            default:
                                cout << "�������" << endl;

                        }

                        ifstream filein("C:\\Users\\nie\\Qt\\StudentManagement\\score1.txt");//���ĵ�
                        ofstream fileout("C:\\Users\\nie\\Qt\\StudentManagement\\score.txt", ios::out); //���ĵ����������
                        string str;
                        while(getline(filein, str)) { //���޸ĺ������д���ļ���ȥ
                            fileout << str << endl;
                        }
                        filein.close();//�ر��ļ�
                        fileout.close();//�ر��ļ�
                    }
                } else if(t == 'N' || t == 'n') {
                    cout << "δ�޸ģ�" << endl;
                } else {
                    cout << "�������" << endl;
                    system("pause");
                }

                system("pause");


            }

            if(flag == 0) {
                cout << "δ���ҵ���ѧ���ĳɼ�������Y/y¼�룡" << endl;
                cin >> m;
                if(m == 'Y' || m == 'y') {

                    system("cls");//�����Ļ����
                    cout << "**********************************" << endl;
                    cout << "*******ѧ���ɼ�����ϵͳ������Ա��" << endl;
                    cout << "*******¼��ѧ���ɼ���*************" << endl;
                    cout << "******* 1.�ߵ���ѧ ***************" << endl;
                    cout << "******* 2.��ѧ���� ***************" << endl;
                    cout << "******* 3.��������� *************" << endl;
                    cout << "******* 4.C���Գ������ **********" << endl;
                    cout << "******* 5.�˳� *******************" << endl;

                    ofstream out1("C:\\Users\\nie\\Qt\\StudentManagement\\score1.txt", ios::app); //�򿪲�д�����ļ�
                    int temp1, temp2, temp3, temp4;
                    cout << "����ɼ�1��2��3��4�ֱ�Ϊ��" << endl;
                    cin >> temp1 >> temp2 >> temp3 >> temp4;
                    out1 << s << " " << temp1 << " " << temp2 << " " << temp3 << " " << temp4 << endl;
                    cout << "¼��ɹ���" << endl;


                    ifstream filein1("C:\\Users\\nie\\Qt\\StudentManagement\\score1.txt");//���ĵ�
                    ofstream fileout1("C:\\Users\\nie\\Qt\\StudentManagement\\score.txt", ios::out); //���ĵ����������
                    string str1;
                    while(getline(filein1, str1)) { //��¼��������д���ļ���ȥ
                        fileout1 << str1 << endl;
                    }

                    filein1.close();//�ر��ļ�
                    fileout1.close();//�ر��ļ�

                    break;

                }
                break;
            }


        }


    }
    fin.close();
    system("del C:\\Users\\nie\\Qt\\StudentManagement\\score1.txt");//ɾ���ļ�

}

bool myCompare1(Student &s1, Student &s2)//�Զ���������򣨰��ɼ�A�Ӵ�С����
{
    return s1.getA() > s2.getA();
}

bool myCompare2(Student &s1, Student &s2)
{
    return s1.getB() > s2.getB();
}

bool myCompare3(Student &s1, Student &s2)
{
    return s1.getC() > s2.getC();
}

bool myCompare4(Student &s1, Student &s2)
{
    return s1.getD() > s2.getD();
}

void Manage::sortScore()
{
    Student studentSort;
    string str;
    int a, b, c, d;
    int count = 0;
    char t;
    ifstream fin("C:\\Users\\nie\\Qt\\StudentManagement\\score.txt");//���ļ�
    if(fin.eof()) {
        cout << "��score.txtʧ�ܣ�" << endl;
    } else {

        vector<Student> s;//vector��������ĸ��ɼ�

        while(!fin.eof()) {

            getline(fin, str); //����ÿһ��
            istringstream strin(str);//����strin��
            strin >> str >> a >> b >> c >> d;
            studentSort.setName(str);
            studentSort.setA(a);
            studentSort.setB(b);
            studentSort.setC(c);
            studentSort.setD(d);

            s.push_back(Student(studentSort));
            count ++;

        }

        cout << "����Ҫ���ĸ���Ŀ�ɼ�: (����A��B��C��Dѡ��)" << endl;
        cout << "A.�ߵ���ѧ" << "  " << "B.��ѧ����" << "  " << "C.���������" << "  " << "D.C���Գ������" << endl;
        cin >> t;
        if (t == 'A' || t == 'a') {
            sort(s.begin(), s.end(), myCompare1);
            for (int i = 0; i < count - 1; i ++) {
                cout << "����: " << s[i].getName() << " " << "�ɼ�A: " << s[i].getA() << endl;
            }
            system("pause");
            return;
        }

        else if (t == 'B' || t == 'b') {
            sort(s.begin(), s.end(), myCompare2);
            for (int i = 0; i < count - 1; i ++) {
                cout << "����: " << s[i].getName() << " " << "�ɼ�B: " << s[i].getB() << endl;
            }
            system("pause");
            return;
        }

        else if (t == 'c' || t == 'C') {
            sort(s.begin(), s.end(), myCompare3);
            for (int i = 0; i < count - 1; i ++) {
                cout << "����: " << s[i].getName() << " " << "�ɼ�C: " << s[i].getC() << endl;
            }
            system("pause");
            return;
        }

        else if (t == 'D' || t == 'd') {
            sort(s.begin(), s.end(), myCompare1);
            for (int i = 0; i < count - 1; i ++) {
                cout << "����: " << s[i].getName() << " " << "�ɼ�D: " << s[i].getD() << endl;
            }
            system("pause");
            return;
        }

        else {
            cout << "�������!!!" << endl;
            system("pause");
        }


    }

}

Manage::~Manage()
{
}
