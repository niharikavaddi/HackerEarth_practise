#include<iostream>
using namespace std;
class train
{
	public:
	int matrix[19][7];
	void declare()
	{
	int n=1,i,j;
	for(i=1;i<=18;i++)
	{
		for(j=1;j<=6;j++)
		{
		matrix[i][j]=n;
		n++;
        }
	}
   }
	void input(int number)
	{
		int i,j;
		for(i=1;i<=18;i++)
		{
			for(j=1;j<=6;j++)
			{
				     if(matrix[i][j]==number)
				    { 
				       if(i%2==0)
				       {
				       	   	switch(j)
					   	{             
					   		    case 1:
				   		    	cout<<endl<<number-1<<" ";
					   			berth(j);
					   			break;
					   			case 2:
			   					cout<<endl<<number-3<<" ";
					   			berth(j);
					   			break;
					   			case 3:
			   					cout<<endl<<number-5<<" ";
					   			berth(j);
					   			break;
					   			case 4:
								cout<<endl<<number-7<<" ";
					   			berth(j);
					   			break;
					   			case 5:
					   			cout<<endl<<number-9<<" ";
					   			berth(j);
					   			break;
					   			case 6:
					   			cout<<endl<<number-11<<" ";
					   			berth(j);
					   			break;
						   }
					   }
					   else
					   {
					   	switch(j)
					   	{
					   		    case 1:
				   		    	cout<<endl<<number+11<<" ";
					   			berth(j);
					   			break;
					   			case 2:
			   					cout<<endl<<number+9<<" ";
					   			berth(j);
					   			break;
					   			case 3:
			   					cout<<endl<<number+7<<" ";
					   			berth(j);
					   			break;
					   			case 4:
								cout<<endl<<number+5<<" ";
					   			berth(j);
					   			break;
					   			case 5:
					   			cout<<endl<<number+3<<" ";
					   			berth(j);
					   			break;
					   			case 6:
					   			cout<<endl<<number+1<<" ";
					   			berth(j);
					   			break;
						   }
					   }
				
					}
					}
				}
			}
	void berth(int j)
	{
		if(j==1||j==6)
		{
			cout<<"WS";
		}
		else if(j==2||j==5)
		{
			cout<<"MS";
		}
		else
		{
			cout<<"AS";
		}
	}
};




int main()
{	
int test,i,seat[10];
train o;
o.declare(); 
cin>>test;
for(i=0;i<test;i++)
{
cin>>seat[i];
}
for(i=0;i<test;i++)
{
o.input(seat[i]);
}
return 0;	
	
}
