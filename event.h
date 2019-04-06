//for event facileties

#include <string.h>
using namespace std;
class event
{
	int hour,min,sec;
	char EventName[10];
	
    public:
	   event()
       {  
       	strcpy(EventName,""); hour=0; min=0; sec=0; }
       
       void SetEvent()
       {   clrscr();
       	   cout<<"\nenter name of event ";
       	   gets(EventName);
       	   gets(EventName);
       	 
       	   cout<<"\nenter time in 24-hour format";
       	   cout<<"\nenter hour ";
       	   HourStart:
       	   cin>>hour;
       	   
       	       if(hour<0||hour>23)
       	        {  cout<<"\nenter hour properly ";
       	        	goto HourStart;
       	        }
       	     
       	   cout<<"\nenter min ";
       	   MinStart:
       	   cin>>min;
       	   if(min<0||min>59)
       	        {  cout<<"\nenter hour properly ";
       	        	goto MinStart;
       	        }
       	}   
       	
       	
       	void EditEvent()
       {   clrscr();
       	   cout<<"\nUpdating Event ";
       	   puts(EventName);
       	   cout<<"\tTime\t"<<hour<<":"<<min<<":"<<sec;
       	   cout<<"\nenter time in 24-hour format";
       	   cout<<"\nenter new hour ";
       	   HourStart:
       	   cin>>hour;
       	   
       	       if(hour<0||hour>23)
       	        {  cout<<"\nenter hour properly";
       	        	goto HourStart;
       	        }
       	     
       	   cout<<"\nenter new min ";
       	   MinStart:
       	   cin>>min;
       	   if(min<0||min>59)
       	        {  cout<<"\nenter hour properly";
       	        	goto MinStart;
       	        }
       	}
       
       void se()
       	{  puts(EventName);
       		cout<<hour<<min;
       		
       		}
   int* GetHour()
    {  return (&hour); }
   int* GetMin()
    {  return (&min);  }
   int GetSec()
    {  return (sec);  }
    

};
