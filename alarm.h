//strting thred to cmpare all event 
#include "numbers.h"
void alarme1(int* x,int* y)
{  
	
    
	 while(e1limit<1)
       { 
       	 
         if(*x==(int)GetHour())
	     {    if(*y==(int)GetMin())
		      { if((int)GetSec()<10)
		      	  {fun();e1limit=1;}
		      }
	     }  
	     sleep(1);
	   }
}
void alarme2(int* x,int* y)
{   
	
    
	 while(e2limit<1)
       { 
       	 
         if(*x==(int)GetHour())
	     {    if(*y==(int)GetMin())
		      { if((int)GetSec()<10)
		      	  {fun();e2limit==1;}
		      }
	     }  
	     sleep(1);
	   }
}
void alarme3(int* x,int* y)
{  
	
    
	 while(e3limit<1)
       { 
       	 
         if(*x==(int)GetHour())
	     {    if(*y==(int)GetMin())
		      { if((int)GetSec()<10)
		      	  {fun();e3limit;}
		      }
	     }  
	     sleep(1);
	   }
}
