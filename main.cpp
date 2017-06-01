#include<iostream>
#include<bits/stdc++.h>
#include<windows.h>
#include<MMSystem.h>
#include"person.h"

using namespace std;

char m[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
int u;
static int o=0;

void music()
{
    system("cls");
   int num;
    cout<<"  Number "<<"        Title          "<<endl;
    cout<<endl;
    cout<<"  1.     "<<"  Hymn for the Weekend "<<endl;
    cout<<"  2.     "<<"  Faded(Music)         "<<endl;
    cout<<"  3.     "<<"  Faded(Lyrics)        "<<endl;
    cout<<"  4.     "<<"  EvaSimonsFeat        "<<endl;
    cout<<"  5.     "<<"  Troyboi Afterhour    "<<endl;
    cout<<"  6.     "<<"  Starboy(The Weeknd)  "<<endl;
    cout<<"  7.     "<<"  The Chainsmoker      "<<endl;
    cout<<"  8.     "<<"  Radioactive          "<<endl;
    cout<<"  9.     "<<"  Demons(Imagine Dragon"<<endl;
    cout<<" 10.     "<<"  Clean Bandit         "<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"Click number corresponding to the song you want to play ! "<<endl;
    cin>>num;
    system("cls");

    switch(num)
    {
        case 1 :
        PlaySound(TEXT("Music\\1.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        break;

        case 2 :
        PlaySound(TEXT("Music\\2.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        break;

        case 3 :
        PlaySound(TEXT("Music\\3.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        break;

        case 4 :
        PlaySound(TEXT("Music\\4.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        break;

        case 5 :
        PlaySound(TEXT("Music\\5.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        break;

        case 6 :
        PlaySound(TEXT("Music\\6.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        break;

        case 7 :
        PlaySound(TEXT("Music\\7.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        break;

        case 8 :
        PlaySound(TEXT("Music\\8.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        break;

        case 9 :
        PlaySound(TEXT("Music\\9.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        break;

        case 10 :
        PlaySound(TEXT("Music\\10.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        break;

        default :
        PlaySound(TEXT("Music\\2.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        break;


    }

}


void display_board()
{
    o+=1;
    system("cls");
    cout<<"TIC TAC TOE GAME !! (Version 1.0)"<<endl;
    cout<<endl;
    cout<<"Developer : Sanchit Jalan "<<endl;
    cout<<endl;
    cout<<endl;
	for(int i=0;i<=2;i++)
    {
    	cout<<"                 ";
        for(int j=0;j<=2;j++)
        {
            cout<<m[i][j];
            if(j!=2)
            {
                cout<<"  |  ";
            }
        }
        cout<<endl;
        cout<<"                 ___|_____|_____"<<endl;
        cout<<"                    |     |     "<<endl;
    }
    if(o>1)
    {
        cout<<"Game Number : "<<u<<endl;
    }
    cout<<endl;
}

void player_input()
{
    int i;
    cout<<"Its player "<<player<<" turn !"<<endl;
    cout<<"Enter the index number for given matrix ";
    cin>>i;
    if(i==1)
    {
        if(m[0][0]=='1')
        {
            m[0][0]=player;
        }
        else
        {
            cout<<"This index number is already being used. Enter again."<<endl;
            player_input();
        }
    }
    else if(i==2)
    {
        if(m[0][1]=='2')
        {
            m[0][1]=player;
        }
        else
        {
            cout<<"This index number is already being used. Enter again."<<endl;
            player_input();
        }
    }
    else if(i==3)
    {
        if(m[0][2]=='3')
        {
            m[0][2]=player;
        }
        else
        {
            cout<<"This index number is already being used. Enter again."<<endl;
            player_input();
        }
    }
    else if(i==4)
    {
        if(m[1][0]=='4')
        {
            m[1][0]=player;
        }
        else
        {
            cout<<"This index number is already being used. Enter again."<<endl;
            player_input();
        }
    }
    else if(i==5)
    {
        if(m[1][1]=='5')
        {
            m[1][1]=player;
        }
        else
        {
            cout<<"This index number is already being used. Enter again."<<endl;
            player_input();
        }
    }
    else if(i==6)
    {
        if(m[1][2]=='6')
        {
            m[1][2]=player;
        }
        else
        {
            cout<<"This index number is already being used. Enter again."<<endl;
            player_input();
        }
    }
    else if(i==7)
    {
        if(m[2][0]=='7')
        {
            m[2][0]=player;
        }
        else
        {
            cout<<"This index number is already being used. Enter again."<<endl;
            player_input();
        }
    }
    else if(i==8)
    {
        if(m[2][1]=='8')
        {
            m[2][1]=player;
        }
        else
        {
            cout<<"This index number is already being used. Enter again."<<endl;
            player_input();
        }
    }
    else if(i==9)
    {
        if(m[2][2]=='9')
        {
            m[2][2]=player;
        }
        else
        {
            cout<<"This index number is already being used. Enter again."<<endl;
            player_input();
        }
    }

}

void toggle_player()
{
    if(player=='X')
    {

        player='O';
    }
    else
    {
        player='X';
    }
}

void renew_matrix()
{
   char m1[3][3]={'1','2','3','4','5','6','7','8','9'};
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            m[i][j]=m1[i][j];
        }
    }
}

char winner()
{
    if(m[0][0]=='X' && m[0][1]=='X' && m[0][2]=='X')
    {
        return 'X';
    }
    else if(m[0][0]=='O' && m[0][1]=='O' && m[0][2]=='O')
    {
        return 'O';
    }

    else if(m[1][0]=='X' && m[1][1]=='X' && m[1][2]=='X')
    {
        return 'X';
    }
    else if(m[1][0]=='O' && m[1][1]=='O' && m[1][2]=='O')
    {
        return 'O';
    }

    else if(m[2][0]=='X' && m[2][1]=='X' && m[2][2]=='X')
    {
        return 'X';
    }
    else if(m[2][0]=='O' && m[2][1]=='O' && m[2][2]=='O')
    {
        return 'O';
    }

    else if(m[0][0]=='X' && m[1][0]=='X' && m[2][0]=='X')
    {
        return 'X';
    }
    else if(m[0][0]=='O' && m[1][0]=='O' && m[2][0]=='O')
    {
        return 'O';
    }

    else if(m[0][1]=='X' && m[1][1]=='X' && m[2][1]=='X')
    {
        return 'X';
    }
    else if(m[0][1]=='O' && m[1][1]=='O' && m[2][1]=='O')
    {
        return 'O';
    }

    else if(m[0][2]=='X' && m[1][2]=='X' && m[2][2]=='X')
    {
        return 'X';
    }
    else if(m[0][2]=='O' && m[1][2]=='O' && m[2][2]=='O')
    {
        return 'O';
    }

    else if(m[0][0]=='X' && m[1][1]=='X' && m[2][2]=='X')
    {
        return 'X';
    }
    else if(m[0][0]=='O' && m[1][1]=='O' && m[2][2]=='O')
    {
        return 'O';
    }

    else if(m[0][2]=='X' && m[1][1]=='X' && m[2][0]=='X')
    {
        return 'X';
    }
    else if(m[0][2]=='O' && m[1][1]=='O' && m[2][0]=='O')
    {
        return 'O';
    }
    return 'N';
}

int main()
{

    music();

    display_board();
    person p,q;
    int  n,t,x=0;
    cout<<"How many matches do you want to play ? "<<endl;
    cin>>t;
    p.matches(t);
    q.matches(t);
    cout<<"Enter name of First Player(X) "<<endl;
    p.input();
    cout<<"Enter name of Second Player(O) "<<endl;
    q.input();
    while(t--)
    {
        u+=1;
        n=0;
        int g=0;
        display_board();
        while(1)
        {
            n+=1;
            player_input();
            display_board();
            toggle_player();
            if(winner()=='X')
            {
                cout<<"Winner is "<< p.output() <<"(X) !"<<endl;
                g=1;
                p.increment_score();
                system("pause");
                renew_matrix();
                break;
            }
            else if(winner()=='O')
            {
                cout<<"Winner is "<<q.output()<<"(O) !"<<endl;
                g=2;
                q.increment_score();
                system("pause");
                renew_matrix();
                break;
            }
            else
            {
                if(winner()=='N' && n==9)
                {
                    cout<<"Match draw "<<endl;
                    x+=1;
                    system("pause");
                    renew_matrix();
                    break;
                }
            }
        }

        char c;
        if(g==1)
        {
            cout<<p.output()<<" do you want to change background Music ? Press Y/y for Yes and "<<endl<<"N/n for NO. "<<endl;
        }
        else if(g==2)
        {
            cout<<q.output()<<" do you want to change background Music ? Press Y/y for Yes and "<<endl<<"N/n for NO."<<endl;
        }
        else
        {
            cout<<"Do you want to change background Music ? Press Y/y for Yes and "<<endl<<"N/n for NO."<<endl;
        }
        cin>>c;
        if(c=='Y' || c=='y')
        {
            music();
        }
     }

    system("cls");

    cout<<"Final results of  all the matches played are :- "<<endl;
    cout<<endl;

    p.display_result();
    cout<<endl;

    q.display_result();
    cout<<endl;

    if(x>0)
    {
        cout<<"Matches drawn : "<<x<<endl;
    }

    cout<<"Press any key if you want to stop the background sound ! -.-"<<endl;
    system("pause");
    PlaySound(NULL,0,0);

    cout<<"Press any key if you want to exit the game !"<<endl;

    return 0;

}
