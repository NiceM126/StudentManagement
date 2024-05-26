#include <iostream>
#include "manage.h"
#include "student.h"
using namespace std;


void display_1();
void display_2();
void display_3();

//����Ա��غ���
void addStu()//�������ѧ��
{
    Manage manage1;//ʵ��������
    for (int temp = 1; temp;) { //ѭ�����ѧ��
        manage1.addStu();//����Manage���е�addStu��������
        cout << "�Ƿ�������ѧ����Y(y)���ǣ�N(n)����" << endl; //�ж��Ƿ�ѭ��
        char a;
        cin >> a;
        if(a == 'Y' || a == 'y') {
            temp = 1;
        } else if(a == 'N' || a == 'n') {
            temp = 0;
        } else {
            cout << "�������!" << endl;
            temp = 1;
        }
    }
}

void delStu()//����ɾ��ѧ��
{
    Manage manage2;//ʵ��������
    for (int temp = 1; temp;) { //ѭ��ɾ��ѧ��
        manage2.delStu();//����Manage���е�delStu()����
        cout << "�Ƿ����ɾ��ѧ����Y(y)���ǣ�N(n)����" << endl; //�ж��Ƿ�ѭ��
        char a;
        cin >> a;
        if(a == 'Y' || a == 'y') {
            temp = 1;
        } else if(a == 'N' || a == 'n') {
            temp = 0;
        } else {
            cout << "�������!" << endl;
            temp = 1;
        }
    }
}

void modManInfo()//����Ա�޸���Ϣ����
{
    Manage manage3;//ʵ��������
    for (int temp = 1; temp;) { //ѭ���޸�
        manage3.modManInfo();//����Manage���е�modManInfo()����
        cout << "�Ƿ�����޸ģ�Y(y)���ǣ�N(n)����" << endl; //ѭ���ж�
        char a;
        cin >> a;
        if(a == 'Y' || a == 'y') {
            temp = 1;
        } else if(a == 'N' || a == 'n') {
            temp = 0;
        } else {
            cout << "�������!" << endl;
            temp = 1;
        }
    }
}

void modStuScore()//����Ա�޸�ѧ���ɼ�����
{
    Manage manage4;//ʵ��������
    for (int temp = 1; temp;) { //ѭ���޸�
        manage4.modStuScore();//����Manage���е�modStuScore()����
        cout << "�Ƿ�����޸ģ�Y(y)���ǣ�N(n)����" << endl; //ѭ���ж�
        char a;
        cin >> a;
        if(a == 'Y' || a == 'y') {
            temp = 1;
        } else if(a == 'N' || a == 'n') {
            temp = 0;
        } else {
            cout << "�������!" << endl;
            temp = 1;
        }
    }
}

void getManageLogin()//����Ա��¼
{
    Manage manage5;
    for(int temp = 1; temp;) {
        int b;
        b = manage5.getManage();
        if(b == 1) {
            while(true) {
                system("cls");//�����Ļ����
                cout << "**********************************" << endl;
                cout << "*******ѧ���ɼ�����ϵͳ������Ա��" << endl;
                cout << "*******��ѡ����Ӧ���ܣ�***********" << endl;
                cout << "******* 1.����ѧ�� ***************" << endl;
                cout << "******* 2.ɾ��ѧ�� ***************" << endl;
                cout << "******* 3.�޸�ѧ���ɼ� ***********" << endl;
                cout << "******* 4.�޸Ĺ���Ա��Ϣ *********" << endl;
                cout << "******* 5.�˳�ϵͳ ***************" << endl;
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
                        modManInfo();
                        break;
                    case 5:
                        cout << "��л����ʹ�ã�" << endl;
                        system("pause");
                        display_1();
                    default:
                        cout << "�������" << endl;
                }
            }
        } else { //��¼ʧ���ж��Ƿ��ٴε�½
            cout << "�Ƿ������½��Y(y)���ǣ�N(n)����" << endl; //ѭ���ж�
            char a;
            cin >> a;
            if(a == 'Y' || a == 'y') {
                temp = 1;
            } else if(a == 'N' || a == 'n') {
                temp = 0;
            } else {
                cout << "�������!" << endl;
                temp = 1;
            }
        }
    }
}


void modStuInfo()//ѧ���޸���Ϣ����
{
    Student student1;//ʵ��������
    for (int temp = 1; temp;) { //ѭ���޸�
        student1.modStuInfo();//
        cout << "�Ƿ�����޸ģ�Y(y)���ǣ�N(n)����" << endl; //ѭ���ж�
        char a;
        cin >> a;
        if(a == 'Y' || a == 'y') {
            temp = 1;
        } else if(a == 'N' || a == 'n') {
            temp = 0;
        } else {
            cout << "�������!" << endl;
            temp = 1;
        }
    }

}

void getStuScore()//ѧ���ɼ��鿴����
{
    Student student2;//ʵ��������
    for (int temp = 1; temp;) { //ѭ���鿴
        student2.getStuScore();
        cout << "�Ƿ�����鿴��Y(y)���ǣ�N(n)����" << endl; //ѭ���ж�
        char a;
        cin >> a;
        if(a == 'Y' || a == 'y') {
            temp = 1;
        } else if(a == 'N' || a == 'n') {
            temp = 0;
        } else {
            cout << "�������!" << endl;
            temp = 1;
        }
    }

}


void getStudentLogin()//ѧ����¼����
{
    Student student3;//ʵ��������
    for (int temp = 1; temp;) { //ѭ����½
        int a;
        a = student3.getStu();
        if(a == 1) { //��½�ɹ�
            while(true) {
                system("cls");//�����Ļ����
                cout << "********************************" << endl;
                cout << "******* ѧ���ɼ�����ϵͳ��ѧ����*****" << endl;
                cout << "******* ��ѡ����Ӧ���ܣ�***********" << endl;
                cout << "******* 1.�鿴�ɼ� **************" << endl;
                cout << "******* 2.�˳�ϵͳ ***************" << endl;
                int t;
                cin >> t;
                switch(t) {
                    case 1:
                        getStuScore();
                        break;
                    case 2:
                        cout << "��л����ʹ�ã�" << endl;
                        system("pause");
                        display_1();
                    default:
                        cout << "�������" << endl; //�������
                }
            }
        } else {
            cout << "�Ƿ�������루Y(y)���ǣ�N(n)����" << endl; //ѭ���ж�
            char a;
            cin >> a;
            if(a == 'Y' || a == 'y') {
                temp = 1;
            } else if(a == 'N' || a == 'n') {
                temp = 0;
            } else {
                cout << "�������!" << endl;
                temp = 1;
            }
        }
    }
}


void display_3()//���ܲ˵���ʾ������ѧ���ˣ�
{
    while(true) {
        system("cls");//�����Ļ����
        cout << "**********************************" << endl;
        cout << "��ӭ����ѧ���ɼ�����ϵͳ��(ѧ��)" << endl;
        cout << "******* 1.��½�˺� ***************" << endl;
        cout << "******* 2.�޸�ѧ����Ϣ ***********" << endl;
        cout << "******* 3.�˳�ϵͳ ***************" << endl;
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
                cout << "��л����ʹ�ã�" << endl; //�˳�
                system("pause");
                display_1();
            default :
                cout << "�������" << endl; //������ʾ
        }
    }
}


void display_2()//���ܲ˵���ʾ����������Ա�ˣ�
{
    while(true) {
        system("cls");//�����Ļ����
        cout << "**********************************" << endl;
        cout << "��ӭ����ѧ���ɼ�����ϵͳ��(����Ա)" << endl;
        cout << "******* 1.��½�˺� ***************" << endl;
        cout << "******* 2.�޸Ĺ���Ա��Ϣ *********" << endl;
        cout << "******* 3.�˳�ϵͳ ***************" << endl;
        int t;
        cin >> t;
        switch(t) {
            case 1:
                getManageLogin();
                break;
                modManInfo();
                break;
            case 3:
                cout << "��л����ʹ�ã�" << endl;
                system("pause");
                display_1();
            default :
                cout << "�������" << endl; //�������
        }
    }
}

void display_1()//���ܲ˵���ʾ����
{
    while(true) {
        system("cls");//�����Ļ����
        cout << "*****************************" << endl;
        cout << "**** ��ӭ����ѧ���ɼ�����ϵͳ��" << endl;
        cout << "**** ��ѡ���Ժ�����ݵ�¼��" << endl;
        cout << "**** 1.����Ա ****" << endl;
        cout << "**** 2.ѧ�� ****" << endl;
        cout << "**** 3.�˳� ****" << endl;
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
                cout << "��л����ʹ�ã�" << endl; //�˳�
                system("pause");
                exit(0);
            default :
                cout << "�������" << endl; //������ʾ
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
