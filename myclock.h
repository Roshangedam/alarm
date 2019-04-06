//real time clock fcileties
#include <ctime>
using namespace std;

	int thour=0,tmin=0,tsec=0;

    time_t ct = time(0);
    struct tm* currtime = localtime(&ct);
    ;
   
    void SetTime()
   {   thour=currtime->tm_hour;
        tmin=currtime->tm_min;
       tsec=currtime->tm_sec;
	}
	void UpdateTime()
	{   
		
		while(LoopLimit<1)
		{ 
		 
		tsec++;
		if(tsec==60)
		{ tsec=0; 
		  tmin++;
		}
		if(tmin==60)
		{ tmin=0; 
		  thour++;
		}
		if(thour==24)
		{ thour=0; 
        }
        
		sleep(1);
		
       }
       
     }
	void ShowTime()
     {  cout<<"time: "<<thour << ":"<<tmin << ":"<<tsec << endl;
     	}
   int GetHour()
    {  return (thour); }
   int GetMin()
    {  return (tmin);  }
    int GetSec()
    {  return (tsec);  }


     
     
