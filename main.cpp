#include <graphics.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;
#define FONTTYPE "΢���ź�"

#define WIDTH 40
#define HEIGHT 20


//�����ն˴��ڴ�С
static void Init()
{

    char cmd[128];
    sprintf_s(cmd,"mode con cols=%d lines=%d",WIDTH,HEIGHT);
    system(cmd);
}
//��ӡ������ʾ
void printInString(const string &msg)
{
    int leftSpace = (WIDTH - msg.length()) / 2;
    for (int i = 0; i < leftSpace; i++)
    {
        cout << " ";
    }
    cout << msg << endl;
}


void menuShow(void)
{
    string menu[] =
    {
        "1.��վ404����",
        "2.��վ�۸���ҳ",
        "3.��վ������¼",
        "4.�鿴������¼",
        "5.�˳�",
    };
    int max = 0;//����˵������󳤶�
    int menuCount = sizeof(menu) / sizeof(menu[0] );

    for (int i = 0; i < menuCount; i++)
    {
        if (menu[i].length() > max)
        {
            max = menu[i].length();
        }
    }

    //�����Ļ
    system("cls");
    printInString("---�ڿ͹���ϵͳ---");


    int leftSpace = (WIDTH - max) / 2;
    for (int i = 0; i < menuCount; i++)
    {
        for (int i = 0; i < leftSpace; i++)
        {
            cout << " ";
        }
        cout << menu[i] << endl;
    }

}



static void  Login()
{
    string  name;
    string  pwd;
    static bool loginFlag = false;

    while (loginFlag == false)
    {

        cout << "�������û�����";
        cin >> name;

        cout << "���������룺";
        cin >> pwd;

        if (name == "54hk" && pwd == "123456")
        {
            /*
            std::cout << "1.��վ404����" << std::endl;
            std::cout << "2.��վ�۸���ҳ" << std::endl;
            std::cout << "3.��վ������¼" << std::endl;
            std::cout << "4.DNS����" << std::endl;
            std::cout << "5.��������������" << std::endl;
            */

            menuShow();
            loginFlag = true;
        }
        else {
            cout << "�û������������"<<endl;
        }
    }
}



int main(void) {

    int Wight = 60;
    Init();
    Login();
    while(1)
    {
    
    }

/*
    initgraph(800,450);

    loadimage(0,_T("hk.jpg"));
    settextcolor(YELLOW);
    settextstyle(30, 0, _T(FONTTYPE) );

    rectangle(300,40,550,80);
    outtextxy(310, 45, TEXT("1-��վ 404����"));

    rectangle(300, 40+ Wight, 550, 80+ Wight);
    outtextxy(310 , 45 + Wight, TEXT("2-��վ �۸Ĺ���"));

    rectangle(300, 40 + Wight*2, 550, 80 + Wight * 2);
    outtextxy(310 , 45 + Wight * 2, TEXT("3-��վ�����޸�"));

    rectangle(300, 40 + Wight * 3, 550, 80 + Wight * 3);
    outtextxy(310 , 45 + Wight * 3, TEXT("4-�鿴������¼"));

    rectangle(300, 40 + Wight * 4, 550, 80 + Wight * 4);
    outtextxy(310 , 45 + Wight * 4, TEXT("5-�˳�"));
*/
    system("pause");
    closegraph();

    return 0;

}









