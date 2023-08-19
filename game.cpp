#include<iostream>
#include<ctime>

using namespace std;


int main()
{	cout<<"       \t\t\t!!!BOOK CRICKET!!!          \n\n\n";
	cout<<"Press Enter to Continue......          \n";
	cin.ignore();
	system("cls");
	cout<<"       \t\t\t!!!RULES OF THE GAME!!!          \n\n";
	cout<<"1.THIS IS A 2 PLAYER GAME\n\n";
	cout<<"2.RANDOM NUMBERS ARE GENERATED BETWEEN 1-100.THE FIRST DIGIT OF THE NUMBER IS   TAKEN AS THE RUNS SCORED\n\n";
	cout<<"3.IF THE FIRST DIGIT IS GREATER THAN 6 THEN THE PLAYER IS OUT.THE RUNS SCORED IS THE TOTAL SUM OF ALL RUNS SCORED TILL THAT POINT \n\n";
	cout<<"4.NOW THE SECOND PLAYER PLAYS AND SIMILAR PROCEDURE IS FOLLOWED AND HIS RUNS ARE CALCULATED \n\n";
	cout<<"5.THE PLAYER WITH THE HIGHEST SCORE WINS\n\n";
	cout<<"Press Enter to Continue......          \n";
	cin.ignore();
	srand((unsigned) time(0));
	
	while(1)
{	system("cls");
	int play1=0;
	cout<<"PLAYER 1 IS PLAYING RIGHT NOW\n";
	int gen;
	while(1)
	{	
		cout<<"Press Enter to Continue......          \n";
		cin.ignore();
		gen = (rand()%100)+1;
		cout<<"CURRENT SCORE: "<<play1<<"\n";
		if(gen%10>6)
		{	cout<<"NUMBER GENERATED: "<<gen<<"\n";
			cout<<"!!!OUT!!!\n";
			break;
		}
		else
		{	cout<<"NUMBER GENERATED: "<<gen<<"\n";
			play1=play1+gen%10;
		}
		
	}
	cout<<"FINAL SCORE OF PLAYER 1: "<<play1<<"\n";
	cout<<"Press Enter to Continue......          \n";
	cin.ignore();
	system("cls");
	int play2=0;
	cout<<"PLAYER 2 IS PLAYING RIGHT NOW\n";
	while(1)
	{	gen = (rand()%100)+1;
		cout<<"CURRENT SCORE: "<<play2<<"   "<<"TARGET: "<<play1<<"\n";
		if(play2>play1)
		{	cout<<"\n!!!PLAYER 2 WINS!!!\n";
			break;
		}
		
		if(gen%10>6)
		{	cout<<"NUMBER GENERATED: "<<gen<<"\n";
			cout<<"!!!OUT!!!\n";
			break;
		}
		else
		{	cout<<"NUMBER GENERATED: "<<gen<<"\n";
			play2=play2+gen%10;
		}
		cout<<"Press Enter to Continue......          \n";
		cin.ignore();
	}
	if(play1==play2)
	{	cout<<"\n!!!ITS A TIE!!!\n";}
	else if(play1>play2)
	cout<<"\n!!!PLAYER 1 WINS!!!\n";
	
	
	
	cout<<"DO YOU WANT TO PLAY AGAIN(y/n) ";
	char c;cin>>c;
	if(c=='n')
	break;
}
			
			
	
}

	