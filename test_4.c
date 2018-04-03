    //The arrival time is same for all processes.

#include<stdio.h>
#include<conio.h>

void main()
 {
     int n;
	char process[50],temp[10];
 	int arrival[10]={0};
	int burst[10],lottery[10],ticket[10][10];
	int i,j,p,max_tick,z;
	
	printf("Enter no of process:");
	scanf("%d",&n);
	printf(" Enter process id ,arrival and burst time\n\n" );
	
	for(i =0;i<n;i++)
	{ printf("Process %d id:",i+1);
	  scanf("%s",&process[i]);
	  
	  	
	   printf("BT:");
	   scanf("%d",&burst[i]);
    }     
	   
	
	
 	//Generate arrival time for each process 
 	for(i=0;i<n;i++)
 	{
	   printf("\n  %c \t    %d    \t%d",process[i],arrival[i],burst[i]);
 	}
                 
	
        printf("\n\n\nprocess  Request   Lottery \t Tickets");
        p =0;
        max_tick = 0;
        //assign one or more lottery numbers to each process
	for(i=0;i<n;i++)
	{
		if(burst[i]>0)
		{
			lottery[i]=burst[i]/2;
			if ((lottery[i] == 0) && (burst[i] > 0))
                lottery[i] = 1;
               
			for (z = 0; z < lottery[i]; z++) {
                    ticket[i][z] = p++;
                        max_tick = p;
                    }
                    temp[i] = process[i];   
					
			printf("\n  %c\t   %d\t\t%d",temp[i],burst[i],lottery[i]);
			for(z=0;z<lottery[i];z++)
			{
				printf("\t::%d::",ticket[i][z]);
			   }   
		}
	}
}

