#include <graphics.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;
#define FONTTYPE "微软雅黑"

#define WIDTH 40
#define HEIGHT 20


//设置终端窗口大小
static void Init()
{

    char cmd[128];
    sprintf_s(cmd,"mode con cols=%d lines=%d",WIDTH,HEIGHT);
    system(cmd);
}
//打印具中显示
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
        "1.网站404攻击",
        "2.网站篡改网页",
        "3.网站攻击记录",
        "4.查看攻击记录",
        "5.退出",
    };
    int max = 0;//计算菜单项的最大长度
    int menuCount = sizeof(menu) / sizeof(menu[0] );

    for (int i = 0; i < menuCount; i++)
    {
        if (menu[i].length() > max)
        {
            max = menu[i].length();
        }
    }

    //清除屏幕
    system("cls");
    printInString("---黑客攻击系统---");


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

        cout << "请输入用户名：";
        cin >> name;

        cout << "请输入密码：";
        cin >> pwd;

        if (name == "54hk" && pwd == "123456")
        {
            /*
            std::cout << "1.网站404攻击" << std::endl;
            std::cout << "2.网站篡改网页" << std::endl;
            std::cout << "3.网站攻击记录" << std::endl;
            std::cout << "4.DNS攻击" << std::endl;
            std::cout << "5.服务器重启攻击" << std::endl;
            */

            menuShow();
            loginFlag = true;
        }
        else {
            cout << "用户名或密码错误！"<<endl;
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
    outtextxy(310, 45, TEXT("1-网站 404攻击"));

    rectangle(300, 40+ Wight, 550, 80+ Wight);
    outtextxy(310 , 45 + Wight, TEXT("2-网站 篡改攻击"));

    rectangle(300, 40 + Wight*2, 550, 80 + Wight * 2);
    outtextxy(310 , 45 + Wight * 2, TEXT("3-网站攻击修复"));

    rectangle(300, 40 + Wight * 3, 550, 80 + Wight * 3);
    outtextxy(310 , 45 + Wight * 3, TEXT("4-查看攻击记录"));

    rectangle(300, 40 + Wight * 4, 550, 80 + Wight * 4);
    outtextxy(310 , 45 + Wight * 4, TEXT("5-退出"));
*/
    system("pause");
    closegraph();

    return 0;

}









