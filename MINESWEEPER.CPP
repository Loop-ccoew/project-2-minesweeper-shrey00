#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char table[9][9];
 char table1[9][9];
 int r,c,t=0,u;
 for(int k=0;k<9;k++)
 {
  cout<<"\t"<<k+1;
 }
 cout<<endl;
 for(int i=0;i<9;i++)
 {
  cout<<i+1<<"\t";
  for(int j=0;j<9;j++)
  {
   table[i][j]='*';
   cout<<table[i][j]<<"\t";
  }
  cout<<endl;
 }
 cout<<endl<<"player 1 enter the locations for mines, press 10 when done"<<endl;
 while(r!=10)
 {
  cout<<"enter row";
  cin>>r;
  while(r!=10)
  {
   cout<<"enter column";
   cin>>c;
   table1 [r][c]='o';
   cout<<"enter row";
   cin>>r;
  }
 }
 cout<<endl<<"player 2 begin, guess a location for mine"<<endl;
  while(u!=0)
   {
     cout<<"enter row";
     cin>>r;
     cout<<"enter column";
     cin>>c;
     if(table1[r][c]=='o')
	 {
	   u=0;
	   cout<<"you hit a mine!!"<<endl;
	 }
     else
	 {
	  t=0;
	  if(table1[r-1][c]=='o'){t++;}
	  if(table1[r][c-1]=='o'){t++;}
	  if(table1[r+1][c]=='o'){t++;}
	  if(table1[r][c+1]=='o'){t++;}
	  for(int k=0;k<9;k++)
	      {
		cout<<"\t"<<k+1;
	      }
	  cout<<endl;
	  for(int i=0;i<9;i++)
	      {
		cout<<i+1<<"\t";
		if(i+1==c)
		   {
		     for(int j=0;j<9;j++)
		       {
			 if(j+1==r)
			   {cout<<t<<"\t";}
			 else
			   {cout<<table[j][i+1]<<"\t";}
		       }
		   }
		else
		   {
		     for(int j=0;j<9;j++)
			{cout<<table[i][j]<<"\t";}
		   }
	       cout<<endl;
	  }cout<<"you may keep guessing"<<endl;
	}
	cout<<"0 to stop,any other key to continue"<<endl;
	cin>>u;
	}
 getch();
}