#include "student.h"

Student::Student()
{
    this->name = "δ����";
    this->code = "";
}


int Student::getStu()
{
    cout << "��ӭ����ѧ����Ϣ����ϵͳ��(ѧ��)" << endl;
    string a, b, c;
    cout << "������������" << endl;
    cin >> a;
    cout << "������ѧ�ţ�" << endl;
    cin >> b;
    cout << "���������룺" << endl;
    cin >> c;
    string na, nu, co;
    int flag = 0;
    ifstream fin("C:\\Users\\nie\\Qt\\StudentManagement\\student.txt");//���ļ�
    if(fin.eof()) {
        cout << "��student.txtʧ�ܣ�" << endl;
    } else {
        while(!fin) {
            string str;
            getline(fin, str); //����ÿһ��
            istringstream strin(str);//����strin��
            strin >> na >> nu >> co;
            if((a == na) && b == nu && c == co) {
                flag = 1;
                return 1;
                cout << "���ѳɹ���½��" << endl;
                break;
            }
        }
        if(flag == 0) {
            cout << "���벻��ȷ��" << endl;
            return 0;
            fin.close();
        }
    }
}

void Student::modStuInfo()
{
    int t = 0; //��ǩ���ж��˺��Ƿ����
    string a, b, c, d, e, f; //�������
    cout << "�����������Ϣ��" << endl;
    cout << "����:" << endl;
    cin >> d;
    cout << "ѧ�ţ�" << endl;
    cin >> e;
    cout << "���룺" << endl;
    cin >> f;
    ifstream in("C:\\Users\\nie\\Qt\\StudentManagement\\student.txt");//���ļ�
    string s1;
    while(getline(in, s1)) { //��������
        istringstream sin(s1);//����sin1��
        sin >> a >> b >> c;
        ofstream out("C:\\Users\\nie\\Qt\\StudentManagement\\student1.txt", ios::app); //�򿪲�д�����ļ�
        if((a == d) && (b == e) && (c == f)) { //�ж��Ƿ�������ȷ
            t = 1;
            string m, p, q; //�������
            cout << "�������޸ĺ����Ϣ:" << endl;
            cout << "������" << endl;
            cin >> m;
            cout << "ѧ�ţ�" << endl;
            cin >> p;
            cout << "���룺" << endl;
            cin >> q;
            out << m << " " << p << " " << q << endl;
            cout << "�޸ĳɹ�" << endl;
        } else {
            out << a << " " << b << " " << c << endl; //д��δ�޸ĵ�����
            out.close();//�ر��ļ�
        }
    }
    in.close();//�ر��ļ�
    ifstream filein("C:\\Users\\nie\\Qt\\StudentManagement\\student1.txt");//���ĵ�
    ofstream fileout("C:\\Users\\nie\\Qt\\StudentManagement\\student.txt", ios::out); //���ĵ����������
    string s;
    while(getline(filein, s)) { //���޸ĺ������д���ļ���ȥ
        fileout << s << endl;
    }
    filein.close();//�ر��ļ�
    fileout.close();//�ر��ļ�
    if(t == 0) { //�˺��������
        cout << "�˺��������" << endl;
    }
    system("del C:\\Users\\nie\\Qt\\StudentManagement\\student1.txt");//ɾ���ļ�
}

void Student::getStuScore()
{
    string s, a, b, c, d;
    cout << "���������������" << endl;
    cin >> s;
    int flag = 0;
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
                cout << "�Ѳ��ҵ���ĳɼ���" << endl;
                cout << "�ߵ���ѧ�� " << "��ѧ���� " << "����������� " << "C���Գ�����ƣ� " << endl;
                cout << "     " << a << "         " << b << "          " << c << "           " << d << endl;
                system("pause");
            }
        }
        if(flag == 0) {
            cout << "δ���ҵ���ĳɼ�������ϵ��ʦ¼�룡" << endl;
            return ;
            fin.close();
        }
    }


}

Student::~Student()
{
}


