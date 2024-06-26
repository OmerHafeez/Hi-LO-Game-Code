#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int num,guess;
	srand(time(0));
	num= 1 + rand()%100;
					// For random values
    cout<<"Enter a number"<<endl;
    cin>>guess;
    
    if(num==guess)
    cout<<"You have won"<<endl;
    
    else
    {
		 {
		 
		   if(num<guess)
	       cout<<"Too high"<<endl;
	       
	       else
	       cout<<"Too low"<<endl;
	      
	      }
	    
    cout<<"Again enter a number"<<endl;
    cin>>guess;
    
    if(num==guess)
    {
    cout<<"You have won"<<endl;
}
    
    else{
    	{
		   if(num<guess)
	       cout<<"Too high"<<endl;
	       
	       else
	       cout<<"Too low"<<endl;
	      
	      } 
	      
       cout<<"Again enter a number.";
       cin>>guess;
       
       if(num==guess)
      cout<<"You have won."<<endl;
    
       else
	   { 
	    {
		   if(num<guess)
	       cout<<"Too high"<<endl;
	       else
	       cout<<"Too low"<<endl;
	      }
	      
       cout<<"Again enter a number."<<endl;
       cin>>guess;
       
       if(num==guess)
       cout<<"You have won."<<endl;
    
       else
	   {
		  {
		
		   if(num<guess)
	       cout<<"Too high"<<endl;
	       
	       else
	       cout<<"Too low"<<endl;
	      
	      }
	      
       cout<<"Again enter a number."<<endl;
       cin>>guess;
       
	   if(num==guess)
	   cout<<"You have won."<<endl;
    
       else
	   {
	   cout<<"Out of tries."<<endl;
       cout<<"You have lost, the number was "<<num<<endl;
       }
       }
       }
	   } 
	   }
	   
return 0;
      
}



