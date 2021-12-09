#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <unistd.h>

// simple game vesd



using namespace std;

//<><><><><><><><><><><><><><><><><><><><><><><><>
void INTR()
{
    for (int h = 1 ; h <= 3 ; h++)
    {
        for (int v = 1 ; v <= 3 ; v++)
        {
            Sleep(1);
            sleep(1);
            cout << ".";
        }
        Sleep(1);
        sleep(1);
        system("cls");
    }
}
//<><><><><><><><><><><><><><><><><><><><><><><><>



struct enemy
{
    int HPP;
    int dam;
    bool defn;
};

int HPplayer = 1000;

//int damplayer = 10;


void stage1()
{
    cout << "------------------";
    cout << "welcome to stage 1";
    cout << "------------------";
    cout << endl;
    int damplayer0;
    enemy enemya1;

    enemya1.HPP = 70;
    enemya1.dam = 20;
    enemya1.defn = false;

    while (true)
    {
        AS:
        cout << "Enter damage for enemya1 +=+ ";
        cin >> damplayer0;

        enemya1.HPP = enemya1.HPP - damplayer0;

        cout << "enemy health -> " << enemya1.HPP << endl;

        if (damplayer0 > 60)
        {
            cout << "now you can not damage over 60" << endl;
            damplayer0 = 0;
            goto AS;
        }

        Sleep(4);
        sleep(4);

        HPplayer = HPplayer - enemya1.dam;

        cout << "your health " << HPplayer << endl;
        /*
        if (enemya1.HPP <= 0 || HPplayer <= 0)
        {
            break;
        }
        */
        if (enemya1.HPP <= 0)
        {
            break;
            cout << "win !!!" << endl;
        }
        else if (HPplayer <= 0)
        {
            break;
            cout << "lose !!!";
        }

    }
}

void stage2()
{
    cout << "+----------------+";
    cout << "welcome to stage 2";
    cout << "+----------------+";
    cout << endl;
    int damplayer1;

    enemy enemyb2;

    enemyb2.HPP = 160;
    enemyb2.dam = 70;
    enemyb2.defn = false;

    while (true)
    {
        AS2:
        cout << "Enter damage for enemyb2 +=+ ";
        cin >> damplayer1;

        enemyb2.HPP = enemyb2.HPP - damplayer1;

        cout << "enemy health -> " << enemyb2.HPP << endl;

        if (damplayer1 > 100)
        {
            cout << "now you can not damage over 100";
            damplayer1 = 0;
            goto AS2;
        }

        HPplayer = HPplayer - enemyb2.dam;


        cout << "your health " << HPplayer << endl;
        /*
        if (enemyb2.HPP <= 0 || HPplayer <= 0)
        {
            break;
        }
        */
        if (enemyb2.HPP <= 0)
        {
            break;
            cout << "win !!!" << endl;
        }
        else if (HPplayer <= 0)
        {
            break;
            cout << "lose !!!" << endl;
        }
    }


}

// stage 3 different i want test and see what happens

void stage3()
{
    cout << "=:--------------:=";
    cout << "welcome to stage 3";
    cout << "=:--------------:=";
    cout << endl;
    int damplayer2;

    enemy enemyc3;

    enemyc3.HPP = 300;
    enemyc3.dam = 160;
    // int enemyc3attackrounds = 7;
    enemyc3.defn = true;

    while (true)
    {
        AS3:

        // GOBA:

        cout << "Enter damage for enemyc3 +=+ ";
        cin >> damplayer2;

        if (damplayer2 > 200)
        {
            cout << "now you can not damage over 100";
            damplayer2 = 0;
            goto AS3;
        }


        // this was important also here {read below comment}

        // now i do not think this was important
        /*
        if (enemyc3.HPP <= 0)
        {
            break;
            cout << "win !!!" << endl;
        }
        else if (HPplayer <= 0)
        {
            break;
            cout << "lose !!!" << endl;
        }
        */

        goto ENEMturn;

    }

    ENEMturn:

    enemyc3.HPP = enemyc3.HPP - damplayer2;

    cout << "enemy health -> " << enemyc3.HPP << endl;

    /*
    for (int vvb = 1 ; vvb <= enemyc3attackrounds ; vvb++)
    {
        HPplayer = HPplayer - enemyc3.dam;
        cout << "your health " << HPplayer << endl;
    }
    */

    HPplayer = HPplayer - enemyc3.dam;
    cout << "your health " << HPplayer << endl;

    goto AS3;

    if (enemyc3.HPP <= 0)
    {
        // break;
        cout << "win !!!" << endl;
    }
    else if (HPplayer <= 0)
    {
        // break;
        cout << "lose !!!" << endl;
    }
}

int main()
{
    INTR();
    stage1();
    stage2();
    stage3();
    return 0;
}
