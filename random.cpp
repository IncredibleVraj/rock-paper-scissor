#include <cstdlib>
#include <ctime>
#include <iostream>
#include <conio.h>
using namespace std;
void name1(int input2)
{
    if(input2==1)
    {
        cout<<"stone"<<endl;
    }
    else if(input2==2)
    {
        cout<<"paper"<<endl;
    }
    else if(input2==3)
    {
        cout<<"scissor"<<endl;
    }
}
void name2(char nm)
{
    if(nm=='1')
    {
        cout<<"stone"<<endl;
    }
    else if(nm=='2')
    {
        cout<<"paper"<<endl;
    }
    else if(nm=='3')
    {
        cout<<"scissor"<<endl;
    }
}
int main()
{
    string name;
    int input2,input1,w=0,q=0,choice;
    srand((unsigned) time(0));
    int RandomNumber;
    string name_of_player1,name_of_player2;
    char input4,input5;
    int input3,a=0,b=0;
    cout<<"press 1. to play with computer"<<endl;
    cout<<"press 2. to play with players"<<endl;
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter the name of player:"<<endl;
        cin>>name;
        menu:
        cout<<"|---------------------|"<<endl;
        cout<<"|1. To Play The Game  |"<<endl;
        cout<<"|2. Quit The Game     |"<<endl;
        cout<<"|---------------------|"<<endl;
        cin>>input1;
        if(input1==1)
        {
            menu1:
            cout<<"|---------------------|"<<endl;
            cout<<"|Press 1. for stone   |"<<endl;
            cout<<"|Press 2. for paper   |"<<endl;
            cout<<"|Press 3. for scissor |"<<endl;
            cout<<"|---------------------|"<<endl;
            {
                cin>>input2;
            }
            if(input2>=1 && input2<=3)
            {
                RandomNumber = (rand() % 3) + 1;
                cout<<"---------------------"<<endl;
                cout<<"player name:"<<name<<endl<<"opt:";
                name1(input2);
                cout<<"---------------------"<<endl;
                cout<<"computer "<<endl<<"opt:";
                name1(RandomNumber);
                cout<<"---------------------"<<endl;
                if(RandomNumber==input2)
                {
                    cout<<"Match Tie"<<endl;
                }
                else if(RandomNumber==1 && input2==3)
                {
                    cout<<"Computer Wins"<<endl;
                    q++;
                }
                else if(RandomNumber==1 && input2==2)
                {
                    w++;
                    cout<<name<<" Wins"<<endl;
                }
                else if(RandomNumber==2 && input2==1)
                {
                    cout<<"Computer Wins"<<endl;
                    q++;
                }
                else if(RandomNumber==2 && input2==3)
                {
                    w++;
                    cout<<name<<" Wins"<<endl;
                }
                else if(RandomNumber==3 && input2==2)
                {
                    q++;
                    cout<<"Computer Wins"<<endl;
                }
                else if(RandomNumber==3 && input2==1)
                {
                    w++;
                    cout<<name<<" Wins"<<endl;
                }
                goto menu;
            }
            else
            {
                goto menu;
            }
        }
        else if(input1==2)
        {
            cout<<"---------------------"<<endl;
            if(q>w)
            {
                cout<<name<<" scored:"<<w<<endl;
                cout<<"Computer scored:"<<q<<endl;
                cout<<"So Computer wins the whole game"<<endl;
            }
            else if(w>q)
            {
                cout<<name<<" scored:"<<w<<endl;
                cout<<"Computer scored:"<<q<<endl;
                cout<<"So "<<name<<" wins the whole game"<<endl;
            }
            else if (q==w && q>0 || w>0)
            {
                cout<<"Whole Match Tied"<<endl;
            }
            else if(q==0 && w==0)
            {
                cout<<"You never played this game"<<endl;
            }
            cout<<"---------------------"<<endl;
        }
        else
        {
            cout<<"Invalid output"<<endl;
            goto menu;
        }
    }
    else if(choice==2)
    {
        cout<<"Enter the name of player 1:"<<endl;
        cin>>name_of_player1;
        cout<<"Enter the name of player 2:"<<endl;
        cin>>name_of_player2;
        menu2:
        cout<<"|---------------------|"<<endl;
        cout<<"|1. To Play The Game  |"<<endl;
        cout<<"|2. Quit The Game     |"<<endl;
        cout<<"|---------------------|"<<endl;
        cin>>input3;
        if(input3==1)
        {
            menu3:
            cout<<"|---------------------|"<<endl;
            cout<<"|Press 1. for stone   |"<<endl;
            cout<<"|Press 2. for paper   |"<<endl;
            cout<<"|Press 3. for scissor |"<<endl;
            cout<<"|---------------------|"<<endl;
            cout<<"Enter the number for player 1"<<endl;
            input4=getch();
            cout<<"Enter the number for player 2"<<endl;
            input5=getch();
            if(input4>='1' && input4<='3')
            {
                if(input5>='1' && input5<='3')
                {
                    cout<<"---------------------"<<endl;
                    cout<<"player name:"<<name_of_player1<<endl<<"opt:";
                    name2(input4);
                    cout<<"---------------------"<<endl;
                    cout<<"player name:"<<name_of_player2<<endl<<"opt:";
                    name2(input5);
                    cout<<"---------------------"<<endl;
                    if(input4==input5)
                    {
                        cout<<"Match Tie"<<endl;
                    }
                    else if(input5=='1' && input4=='3')
                    {
                        cout<<name_of_player2<<" Wins"<<endl;
                        b++;
                    }
                    else if(input5=='1' && input4=='2')
                    {
                        a++;
                        cout<<name_of_player1<<" Wins"<<endl;
                    }
                    else if(input5=='2' && input4=='1')
                    {
                        cout<<name_of_player2<<" Wins"<<endl;
                        b++;
                    }
                    else if(input5=='2' && input4=='3')
                    {
                        a++;
                        cout<<name_of_player1<<" Wins"<<endl;
                    }
                    else if(input5=='3' && input4=='2')
                    {
                        b++;
                        cout<<name_of_player2<<" Wins"<<endl;
                    }
                    else if(input5=='3' && input4=='1')
                    {
                        a++;
                        cout<<name_of_player1<<" Wins"<<endl;
                    }
                    goto menu2;
                }
                else
                {
                    cout<<"Invalid input by "<<name_of_player2<<endl;
                    goto menu3;
                }
            }
            else
            {
                cout<<"Invalid input by "<<name_of_player1<<endl;
                goto menu3;
            }
        }
        else if(input3==2)
        {
            cout<<"---------------------"<<endl;
            if(b>a)
            {
                cout<<name_of_player1<<" scored:"<<a<<endl;
                cout<<name_of_player2<<" scored:"<<b<<endl;
                cout<<"So "<<name_of_player2<<" wins the whole game"<<endl;
            }
            else if(a>b)
            {
                cout<<name_of_player1<<" scored:"<<a<<endl;
                cout<<name_of_player2<<" scored:"<<b<<endl;
                cout<<"So "<<name_of_player1<<" wins the whole game"<<endl;
            }
            else if (b==a && b>0 || a>0)
            {
                cout<<"Whole Match Tied"<<endl;
            }
            else if(b==0 && a==0)
            {
                cout<<"You never played this game"<<endl;
            }
            cout<<"---------------------"<<endl;
        }
        else
        {
            cout<<"Invalid output"<<endl;
            goto menu2;
        }
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
}
