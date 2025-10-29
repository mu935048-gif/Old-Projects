#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

struct node {

int data;
node* next;

};

class linkedlist {
public:

node* head;


linkedList()
{
head = NULL;
head=NULL;
}
};
struct node1 {

int data1;
node1* next1;

};
class linkedlist1 {
public:

node1* head1;


linkedList1()
{
head1 = NULL;
head1=NULL;
}

};
class dice
{
	private:
		int num;
		public:
			void set(int n)
			{
				num=n;
			}
			
			int get_num()
			{
				return num;
			}
			int display()
			{
				int t;
		    	srand(time(0));
                t=rand()%(6-1)+1;
				cout<<"Dice num is"<<t<<endl;
				if(t==1)
				return 1;
				else if(t==2)
				return 2;
				else if(t==3)
				return 3;
				else if(t==4)
				return 4;
				else if(t==5)
				return 5;
				else if(t==6)
				return 6;
			}
			
			int display_for_comp()
			{
				int t;
		    	srand(time(0));
                t=rand()%(6-1)+1;
				cout<<"Dice num is"<<t<<endl;
				if(t==1)
				return 4;
				else if(t==2)
				return 3;
				else if(t==3)
				return 1;
				else if(t==4)
				return 6;
				else if(t==5)
				return 2;
				else if(t==6)
				return 5;
			}
};

class board
{
protected:
		int position;
		int score;
		dice d;
		linkedlist list;
		linkedlist1 list1;
		public:
			void set_pos(int p,int s)
			{
				position=p;
				score=s;
			}
			int get_pos()
			{
				return position;
			}
			
			int get_score()
			{
				return score;
			}
			void positions()
			{
			   for(int i=10;i<=100;i=i+10)
			   {
			   	for(int j=9;j>=0;j--)
			   	{
			   		if(i-j<=9)
			   		{
			   	       cout<<"0"<<i-j<<"   ";		
					}
					else
					cout<<i-j<<"   ";
			   	   	
				}
				cout<<endl;
			   }
			}
			
			void rules()
			{
				cout<<"'P' is the key to play the game. The game has position jumps.Game should be complete in 22 turns"<<endl<<"\nLADDERS\nJumps Num_7  to Num_23\nJumps Num_37 to 62\nJumps 64 to Num_87";
				cout<<"\n\nSnakes\nJumps Num_19 to Num_3\nJumps Num_73 to Num_48\n"<<endl;
			}
			void players()
			{
			
				node* first=new node();
				first->next=0;
				list.head=first;
				node* temp1=list.head;			
				int j,k,i1=2,i2=2;
				
				node1* sec=new node1();
				sec->next1=0;
				list1.head1=sec;
				node1* temp2=list1.head1;			
				
				
				int turns=1, player=1,position_1=0,position_2=0,l_1,l_2,score_1=0,score_2;
		        char c;string player_1name,player_2name;
			   cout<<"Enter Player 1 name"<<endl;
			   cin>>player_1name;
			   cout<<"Enter Player 2 name"<<endl;
			   cin>>player_2name;
			
			 do
			 {
		     if(position_1==100||position_2==100)
		     {
		     	turns=23;
		     	break;
			 }
			 switch(player)
			 {
			 	case 1:
			 	{
			 
			  	cout<<endl<<endl<<"Turn no. "<<turns<<endl;
			     cout<<"Press 'P' "<< player_1name<<" to Play the Game"<<endl;
			     cin>>c;
			     if(c=='p'&&position_1<94)
			     	 {
			     	l_1=d.display();
			     	position_1=position_1+l_1;
			     	cout<<"Position of "<< player_1name<<" is" <<position_1<<endl;
			     	if(position_1==7)
			     	{
			     		position_1=23;
					 }
					 else if(position_1==19)
					 {
					 	position_1=3;
					 }
					 else if(position_1==37)
					 {
					 	position_1=62;
					 }
					 else if(position_1==73)
					 {
					 	position_1=48;
					 }
					 else if(position_1==64)
					 {
					 	position_1=87;
					 }
				 }
				 else if(c=='p'&&position_1>93&&position_1<=100)
				 {
				 	if(position_1==94)
				 	position_1=position_1+6;
				 		else if(position_1==95)
				 	position_1=position_1+5;
				 		else if(position_1==96)
				 	position_1=position_1+4;
				 		 else if(position_1==97)
				 	position_1=position_1+3;
				 		else if(position_1==98)
				 	position_1=position_1+2;
				 		else if(position_1==99)
				 	position_1=position_1+1;
				 	
				 	cout<<"Position of "<<player_1name<< " is"<<position_1<<endl;
				 	break;
				 }
				 if(l_1==1)
				 l_1=l_1+1;
				 else if(l_1==2)
				 l_1=l_1+4;
				 else if(l_1==3)
				 l_1=l_1+5;
				 else if(l_1==4)
				 l_1=l_1+6;
				 else if(l_1==5)
				 l_1=l_1+7;
				 else if(l_1==6)
				 l_1=l_1+10;
				 
			 score_1=score_1+l_1;
			 
			 
			 temp1->data=position_1;
			 
			 node* ji1=new node();
			 temp1->next=ji1;
			 temp1=temp1->next;
			 i1++;
			
			  }
			  if(position_1==100)
			  {
			  	turns=23;
			  	break;
			  }
			    case 2:
			    	{
			    		
			  	cout<<endl<<endl<<"Turn no. "<<turns<<endl;
			     cout<<"Press 'P' by "<<player_2name<<" to Play the Game"<<endl;
			     cin>>c;
			     if(c=='p'&&position_2<94)
			     	 {
			     	l_2=d.display();
			     	position_2=position_2+l_2;
			     	cout<<"Position  of "<<player_2name<<" is "<<position_2<<endl;
			     	if(position_2==7)
			     	{
			     		position_2=23;
					 }
					 else if(position_2==19)
					 {
					 	position_2=3;
					 }
					 else if(position_2==37)
					 {
					 	position_2=62;
					 }
					 else if(position_2==73)
					 {
					 	position_2=48;
					 }
					 else if(position_2==64)
					 {
					 	position_2=87;
					 }
				 }
				 else if(c=='p'&&position_2>93&&position_2<=100)
				 {
				 	if(position_2==94)
				 	position_2=position_2+6;
				 		else if(position_2==95)
				 	position_2=position_2+5;
				 		else if(position_2==96)
				 	position_2=position_2+4;
				 		 else if(position_2==97)
				 	position_2=position_2+3;
				 		else if(position_2==98)
				 	position_2=position_2+2;
				 		else if(position_2==99)
				 	position_2=position_2+1;
				 	
				 	cout<<"Position of "<<player_2name<<" is"<<position_2<<endl;
				 	break;
				 }
				 if(l_2==1)
				 l_2=l_2+1;
				 else if(l_2==2)
				 l_2=l_2+4;
				 else if(l_2==3)
				 l_2=l_2+5;
				 else if(l_2==4)
				 l_2=l_2+6;
				 else if(l_2==5)
				 l_2=l_2+7;
				 else if(l_2==6)
				 l_2=l_2+10;
				 
			 score_2=score_2+l_2;
			  
			  temp2->data1=position_2;
			 node1* ki2=new node1();
			 temp2->next1=ki2;
			 temp2=temp2->next1;
			 i2++;
			 break;
			    }
			  
				}
			    
			    turns++;
			 }
			 while(player!=0&&turns!=23&&position_1<=100&&position_2<=100);	
			 
			 	cout<<"Score of "<<player_1name<<" is"<<score_1<<endl<<endl;
			cout<<"Score of "<<player_2name<<" is"<<score_2<<endl<<endl;
			 }
			  

	void play_with_computer()
			{
				node* first=new node();
				first->next=0;
				list.head=first;
				node* temp1=list.head;			
				int j,k,i1=2,i2=2;
				
				node1* sec=new node1();
				sec->next1=0;
				list1.head1=sec;
				node1* temp2=list1.head1;			
				
				
				int turns=1, player=1,position_1=0,position_2=0,l_1,l_2,score_1=0,score_2;
		        char c;string player_1name;
			   cout<<"Enter Player 1 name"<<endl;
			   cin>>player_1name;
			
			 do
			 {
			 	   if(position_1==100||position_2==100)
		     {
		     	turns=23;
		     	break;
			 }
			 switch(player)
			 {
			 	case 1:
			 	{
			 
			  	cout<<endl<<endl<<"Turn no. "<<turns<<endl;
			     cout<<"Press 'P' "<< player_1name<<" to Play the Game"<<endl;
			     cin>>c;
			     if(c=='p'&&position_1<94)
			     	 {
			     	l_1=d.display();
			     	position_1=position_1+l_1;
			     	cout<<"Position of "<< player_1name<<" is" <<position_1<<endl;
			     	if(position_1==7)
			     	{
			     		position_1=23;
					 }
					 else if(position_1==19)
					 {
					 	position_1=3;
					 }
					 else if(position_1==37)
					 {
					 	position_1=62;
					 }
					 else if(position_1==73)
					 {
					 	position_1=48;
					 }
					 else if(position_1==64)
					 {
					 	position_1=87;
					 }
				 }
				 else if(c=='p'&&position_1>93&&position_1<=100)
				 {
				 	if(position_1==94)
				 	position_1=position_1+6;
				 		else if(position_1==95)
				 	position_1=position_1+5;
				 		else if(position_1==96)
				 	position_1=position_1+4;
				 		 else if(position_1==97)
				 	position_1=position_1+3;
				 		else if(position_1==98)
				 	position_1=position_1+2;
				 		else if(position_1==99)
				 	position_1=position_1+1;
				 	
				 	cout<<"Position of "<<player_1name<< " is"<<position_1<<endl;
				 	break;
				 }
				 
				 if(l_1==1)
				 l_1=l_1+1;
				 else if(l_1==2)
				 l_1=l_1+4;
				 else if(l_1==3)
				 l_1=l_1+5;
				 else if(l_1==4)
				 l_1=l_1+6;
				 else if(l_1==5)
				 l_1=l_1+7;
				 else if(l_1==6)
				 l_1=l_1+10;
			 score_1=score_1+l_1;
			 
		
			 temp1->data=position_1;
			 node* ji1=new node();
			 temp1->next=ji1;
			 temp1=temp1->next;
			 i1++; 
			  }
			  	  if(position_1==100)
			  {
			  	turns=23;
			  	break;
			  }
			    case 2:
			    	{ 
			    	
			  	cout<<endl<<endl<<"Turn no. "<<turns<<endl;

			     if(position_2<94)
			     	 {
			     	l_2=d.display_for_comp();
			     	position_2=position_2+l_2;
			     	cout<<"Position  of Computer is "<<position_2<<endl;
			     	if(position_2==7)
			     	{
			     		position_2=23;
					 }
					 else if(position_2==19)
					 {
					 	position_2=3;
					 }
					 else if(position_2==37)
					 {
					 	position_2=62;
					 }
					 else if(position_2==73)
					 {
					 	position_2=48;
					 }
					 else if(position_2==64)
					 {
					 	position_2=87;
					 }
				 }
				 else if(position_2>93&&position_2<=100)
				 {
				 	if(position_2==94)
				 	position_2=position_2+6;
				 		else if(position_2==95)
				 	position_2=position_2+5;
				 		else if(position_2==96)
				 	position_2=position_2+4;
				 		 else if(position_2==97)
				 	position_2=position_2+3;
				 		else if(position_2==98)
				 	position_2=position_2+2;
				 		else if(position_2==99)
				 	position_2=position_2+1;
				 	
				 	cout<<"Position of Computer is"<<position_2<<endl;
				 	break;
				 }
				 		 if(l_2==1)
				 l_2=l_2+1;
				 else if(l_2==2)
				 l_2=l_2+4;
				 else if(l_2==3)
				 l_2=l_2+5;
				 else if(l_2==4)
				 l_2=l_2+6;
				 else if(l_2==5)
				 l_2=l_2+7;
				 else if(l_2==6)
				 l_2=l_2+10;
			 score_2=score_2+l_2;
			 
			 
			  	 temp2->data1=position_2;
			 node1* ki2=new node1();
			 temp2->next1=ki2;
			 temp2=temp2->next1;
			 i2++;
			    }
			  
				}
			    
			    turns++;
			 }
			 while(player!=0&&turns!=23&&position_1<=100&&position_2<=100);	
			 
			 	cout<<"Score of "<<player_1name<<" is"<<score_1<<endl<<endl;
			cout<<"Score of Computer is "<<score_2<<endl<<endl;
			 }	
			 
			 		void display_1()
{
	
	node* temp=list.head;
	
	do{
		
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	while(temp!=0);
	cout<<endl<<endl<<endl;
}

		void display_2()
{
	
	node1* temp=list1.head1;
	
do
	{ 
		cout<<temp->data1<<" ";
		temp=temp->next1;
		
	}
	while(temp!=0);
	
	cout<<endl<<endl<<endl;
}
	
};
main()
{


	
	cout<<"=======================SNAKE & LADDER============================="<<endl;
	board b;
	int choice;
	do
	{
	  cout<<"Select the choice"<<endl;
	 
	  cout<<"1.Player vs Player"<<endl;
	  cout<<"2.Player vs Computer"<<endl;
	  cout<<"3.Rules"<<endl;
	  cout<<"4.Exit"<<endl;
	   cin>>choice;
	  switch(choice){
	  	case 1:
	  	{
	  	    string opt;
	  		b.positions();
	        b.players();
	        cout<<"If you want to check steps for Player1 Press 'y1' for Player1 and y2 for Player2"<<endl;
	        cin>>opt;
	        if(opt=="y1")
	        b.display_1();
	        else if(opt=="y2")
	        b.display_2();
	        break;
	    }
	    	case 2:
	  	{
	  	string opt;
	  		b.positions();
	        b.play_with_computer();
	        cout<<"If you want to check steps for Player1 Press 'y1' for Player1 and y2 for Player2"<<endl<<endl;
	        cin>>opt;
	        if(opt=="y1")
	        b.display_1();
	        else if(opt=="y2")
	        b.display_2();
	        break;
	    }
	    case 3:
	    	{
	    		b.rules();
			    break;
			}
			case 4:
				break;
	  }
    
	}
	while(choice!=0);
	
	
}