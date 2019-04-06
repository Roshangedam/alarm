//menu functionlity
int LoopLimit=0;
int e1limit=0;
int e2limit=0;
int e3limit=0;
#include "myclock.h"

using namespace std;
class menu
{   

	public :
	
	
	void ShowMenu()
	{   clrscr();
		cout<<"\t\t\t\tMAIN MENU\n";
	   
	    cout<<"\n1)Set Event\n2)Edit event\n0)exit\n";
	    ShowTime();
		
	}
	
	void ShowEventMenu()
	{   clrscr();
	    cout<<"\t\t\t\tEVENT MENU\n";
	    cout<<"1)Set Event 1\n2)Set Event 2\n3)Set Event 3\n0)back\n";
	}
	void ShowEditEventMenu()
	{   clrscr();
	    cout<<"\t\t\t\tEDIT EVENT MENU\n";
	    cout<<"1)Edit Event 1\n2)Edit Event 2\n3)Edit Event 3\n0)back\n";
	}
};


