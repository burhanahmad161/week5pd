#include<iostream>
#include<conio.h>
#include<cmath>
#include<windows.h>
using namespace std;
void movePacman(int x,int y);
void erase(int x,int y);
void printMaze();
int ghostMoveH(int x,int y);
int ghostMoveY(int x,int y);
void gotoxy(int x,int y);
char getCharAtxy(short int x,short int y);
main()
{
  int pacmanx=4;
  int pacmany=4;
  bool gamerunning=true;
  system("cls");
  printMaze();
  movePacman(pacmanx,pacmany);
  while(gamerunning)
  {

      if(GetAsyncKeyState(VK_LEFT))
          {
           erase(pacmanx,pacmany);
           pacmanx=pacmanx-1;
           movePacman(pacmanx,pacmany);
          }
      if(GetAsyncKeyState(VK_RIGHT))
          {
          erase(pacmanx,pacmany);
          pacmanx=pacmanx+1;
          movePacman(pacmanx,pacmany);
          }
      if(GetAsyncKeyState(VK_UP))
          {
          erase(pacmanx,pacmany);
          pacmany=pacmany-1;
          movePacman(pacmanx,pacmany);
          }
      if(GetAsyncKeyState(VK_DOWN))
          {
          erase(pacmanx,pacmany);
          pacmany=pacmany+1;
          movePacman(pacmanx,pacmany);
          }
     if(GetAsyncKeyState(VK_ESCAPE))
          {
            gamerunning=false;
          }   
    Sleep(200);
  }
   while(true)
{
int ghostmoveH(int x,int y)
{
  int x=10;
  int y=10;
  if(x<10)
  {
    x=x+1;
  }
  if(x==10)
  {
    gotoxy(x+1,y);
    cout<<"G";
    x=10;
  }
}
int ghostmoveY(int x,int y)
{
  int x=35;
  int y=35;
  if(y<15)
  {
    y=y+1;
  }
  if(y==15)
  {
    gotoxy(x,y+1);
    cout<<"G";
    y=15;
  }
}
}

} 

void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
  char getCharAtxy(short int x, short int y)
{
  return 0;
}
  char getcharAtxy(short int x, short int y)
  {
  CHAR_INFO ci;
  COORD xy= {0,0};
  SMALL_RECT rect={x,y,x,y};
  COORD coordBufSize;
  coordBufSize.X=1;
  coordBufSize.Y=1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci,coordBufSize,xy, &rect) ? ci.Char.AsciiChar :  'B';
  }
void printMaze()
{
cout<<" ####################################################################################################################"<<endl;
cout<<"||..   .....................................................................................................        ||"<<endl;
cout<<"||..   %%%%%%%%%%%%%%%%%%%%%%%%%%%%                 ....             %%%%%%%%%%%%%%%%%%%%     |%|..     %%%%        ||"<<endl;
cout<<"||..                   |%|      |%|              |%|....             |%|              |%|     |%|..      |%|        ||"<<endl;
cout<<"||..                   |%|      |%|              |%|....             |%|              |%|     |%|..      |%|        ||"<<endl;
cout<<"||..                   %%%%%%%%%%         .   .  |%|....             %%%%%%%%%%%%%%%%%%%%        ..     %%%%.       ||"<<endl;
cout<<"||..                   |%|                .   .  |%|....             ......................|%|   ..         .       ||"<<endl;
cout<<"||..                   %%%%%%%%%%%%%%%%%%%.   .  |%|....             %%%%%%%%%%%%%%%%      |%|   ..     %%%%.       ||"<<endl;
cout<<"||..                                   |%|.                          |%|                   |%|   ..      |%|.       ||"<<endl;
cout<<"||..                 ................. |%|.                          |%|............             ..      |%|.       ||"<<endl;
cout<<"||..|%|             |%|%|%%%%%%%|%|%|. |%|.                             ............|%|          ...|%|  |%|.       ||"<<endl;
cout<<"||..|%|             |%|%|       |%|%|..       |%|                       ............|%|           ..|%|.            ||"<<endl;
cout<<"||..|%|             |%|%|       |%|%|..       %%%%%%%%%%%%%%%%%%%%%%    ............|%|          .  |%|.            ||"<<endl;
cout<<"||..|%|                                                        ...|%|          %%%%%%%%          ...|%|.            ||"<<endl;
cout<<"||..|%|             %%%%%%%%%%%%%%%%%%%%%%%%%                  ...|%|                      |%|   ...|%|%%%%%%       ||"<<endl;
cout<<"||..                                                           ...|%|%%%%%%%%%%%%%%%%%%    |%|   ............       ||"<<endl;
cout<<"||......................................................................................   |%|   ............       ||"<<endl;
cout<<"||..                                                                                                 ........       ||"<<endl;
cout<<"||.. ...................................................................................   |%|     ..|%|.           ||"<<endl;
cout<<"||..|%|             |%||%|       |%||%|..             %%%%%%%%%%%%%%%%%%   .........|%|    |%|     ..|%|.           ||"<<endl;
cout<<"||..|%|             |%||%|       |%||%|..                          ...|%|      %%%%%%%%    |%|     ..|%|.           ||"<<endl;
cout<<"||..|%|                                 .                          ...|%|                  |%|     ..|%|%%%%%       ||"<<endl;
cout<<"||..|%|             %%%%%%%%%%%%%%%%%%%%%%%%%%%%                   ...|%|%%%%%%%%%%%       |%|     ..........       ||"<<endl;
cout<<"||......................................................................................   |%|     ..........       ||"<<endl;
cout<<"||       ...............................................................................           ..........       ||"<<endl;
cout<<" ####################################################################################################################"<<endl;
}
void movePacman(int x,int y)
{
   gotoxy(x,y);
   cout<<"P";
}
void erase(int x,int y)
{
    gotoxy(x,y);
   cout<<" ";
}

