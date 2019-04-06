//main function app
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <thread>
using namespace std;
#include "menu.h"
#include "event.h"
#include "alarm.h"
int choice =NULL;
int SetEvent1=0;
int SetEvent2=0;
int SetEvent3=0;


using namespace std;
int main()
{ 
	event *e1=new event;
	event *e2=new event;
	event *e3=new event;
	 SetTime();
	thread updatetime(UpdateTime);
	int* xe1=e1->GetHour();
    int* ye1=e1->GetMin();
    int* xe2=e2->GetHour();
    int* ye2=e2->GetMin();
    int* xe3=e3->GetHour();
    int* ye3=e3->GetMin();
	thread e11(alarme1,xe1,ye1);
	thread e22(alarme2,xe2,ye2);
	thread e33(alarme3,xe3,ye3);
     menu MainMenu,EventMenu;
     MainMenuStart :
	 MainMenu.ShowMenu();
	 cin>>choice;
	if(LoopLimit==1||e1limit==1||e2limit==1)
	 {  updatetime.join(); 
	 	e11.join();
	 	e22.join();
	 	e33.join();
	     exit (0);
	 	}
	  
     
     
     switch(choice)
     {
         case 1:
         {   SetEventStart:
             EventMenu.ShowEventMenu();
             int a;
             cin>>a;
             switch(a)
               {
                   case 1:
                   { if(SetEvent1==0)
                   	   {e1->SetEvent();
                         cout<<"\ndone\n";
                   	   	SetEvent1=1;
                   	  }
                       else{cout<<"\ncannot set again";}
                       	  getch();
                     goto SetEventStart;
                   }
                   case 2:
                   { if(SetEvent2==0)
                   	   {e2->SetEvent();
                        cout<<"\ndone\n";
                   	   	SetEvent2=1;
                   	  }
                       else{cout<<"\ncannot set again";}
                       getch();
                     goto SetEventStart;
                   }
                   case 3:
                   { if(SetEvent3==0)
                   	   {e3->SetEvent();
                        cout<<"\ndone\n";
                   	   	SetEvent3=1;
                   	  }
                       else{cout<<"\ncannot set again";}
                         getch();
                     goto SetEventStart;
                   }
                   case 0:
                   {goto MainMenuStart;}
                   default :
                   {  cout<<"\nenter again\n";
                      goto SetEventStart;
                   }
               }  
          }
        case 2:
          {    EditEventStart:
             EventMenu.ShowEditEventMenu();
             int a;
             cin>>a;
             switch(a)
               {
                   case 1:
                   {  
                   	 e1->EditEvent();
                       cout<<"\ndone\n";
                       getch();
                     goto EditEventStart;
                   }
                   case 2:
                   { e2->EditEvent();
                       cout<<"\ndone\n";
                    
                       getch();
                     goto EditEventStart;
                   }
                   case 3:
                   { e3->EditEvent();
                       cout<<"\ndone\n";
                       getch();
                     goto EditEventStart;
                   }
                   case 0:
                   {goto MainMenuStart;}
                   default :
                   {  cout<<"\nenter again\n";
                      goto EditEventStart;
                   }
               }  
          }
         case 0:
          {  LoopLimit=1; e1limit=1;
          	 e2limit=1;
          	 e3limit=1;goto  MainMenuStart;
          }
         default :
          {  cout<<"\nenter again\n";
              getch();
            goto MainMenuStart;
          }
     }   
     return 0;
}
	


