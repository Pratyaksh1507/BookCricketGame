#include<iostream>
#include<ctime>
using namespace std;
int main(){
	cout << endl;
	cout <<"\t\t~~~~~~~~~~~~~~~> BOOK CRICKET <~~~~~~~~~~~~~~~~        \n ";

	cin.ignore();
	cout <<"\t\t<<<<<---WELCOME TO THE GAME--->>>>>\n";         
	cout << endl;
	cout << endl;
	cout <<"\t\t~~~~~~~~~~~~~~~~RULES OF THE GAME~~~~~~~~~~~~~~~~\n\n";
	
	cout <<"1.THIS IS A TWO-PLAYER GAME\n\n";
	cout <<"2.RANDOM NUMBERS WILL GENERATE.\n\n";
	cout <<"3.THE RUNS WILL BE 0,2,4,6,8. \n\n";
	cout <<"4.IF THE FIRST DIGIT IS 0, THEN THE PLAYER IS OUT \n\n"; 
	cout <<"5.ONLY CHANGE IN THE GAME IS THAT IF THE FIRST DIGIT IS 8, THEN IT AS CONSIDERED AS 1 RUN \n\n";
	cout <<"6.IF THE RUNS SCORED IS THE TOTAL SUM OF ALL RUNS SCORED TILL THAT POINT \n\n";
	cout <<"7.NOW THE SECOND PLAYER PLAYS AND SIMILAR PROCEDURE IS FOLLOWED AND HIS RUNS ARE CALCULATED \n\n";
	cout <<"8.THE PLAYER WITH THE HIGHEST SCORE WINS \n\n";

	cin.ignore();
	srand((unsigned) time(0));
	cout <<endl;
	cout <<endl;
	
	//PLAYER 1 TURN BEGINS............
	while(1){	

		int sum1=0;
		cout <<"\t\t~~~~~~~~~~~~~~~~FIRST INNINGS STARTS~~~~~~~~~~~~~~~~" << endl;
		cout <<"PLAYER 1 IS PLAYING RIGHT NOW\n";
		int gen;
		while(1){	
			cout << endl;
			cin.ignore();
			gen = 2*(rand()%100);
			cout << "\t\tCURRENT SCORE: "<< sum1 << endl;
			if(gen%10==0){
				cout<<"RUN SCORED--->  "<< gen%10 <<"\n";
				cout<<"!!!OUT!!!\n";
				break;
			}
			if(gen%10==8){
				cout<<"RUN SCORED--->  "<< 1 <<"\n";
				sum1 = sum1 + 1;
			}
			else{
				cout<<"RUN SCORED--->  "<< gen%10 <<"\n";
				sum1 = sum1 + gen%10;
				}
		}
		cout << endl;
		cout<<"\t\t\tFINAL SCORE OF PLAYER 1--->  "<< sum1 <<"\n\n";
		cin.ignore();


	//PLAYER 2 TURN BEGINS...................
	int sum2 = 0;
	cout <<"\t\t~~~~~~~~~~~~~~~~SECOND INNINGS STARTS~~~~~~~~~~~~~~~~\n\n";
	cout<<"PLAYER 2 IS PLAYING RIGHT NOW\n";
	while(1){
		if(sum2 > sum1){	
			cout<<"\n!!!PLAYER 2 WINS!!!\n";
			break;
	}
		gen = 2*(rand()%100);
		cout<<"\t\tCURRENT SCORE: "<< sum2 <<"   "<<"TARGET: "<< sum1 <<"\n";

		if( gen%10 == 0){
				cout<<"RUN SCORED--->  "<< gen%10 <<"\n";
				cout<<"!!!OUT!!!\n";
				break;
		}
		if(gen%10==8){
				cout<<"RUN SCORED--->  "<< 1 <<"\n";
				sum2 = sum2 + 1;
			}
		else{
				cout<<"RUN SCORED--->  "<< gen%10 <<"\n";
			sum2 = sum2 + gen%10;
		}
		//cout<<"Press Enter to Continue......          \n";
		cin.ignore();
	cout << endl;
	}
	if(sum1 == sum2){
			cout<<"\n!!!ITS A TIE!!!\n";
	}
	
	else if(sum1>sum2)
			cout<<"\n!!!PLAYER 1 WINS!!!\n";
	
	cout << endl;
	cout << endl;
	cout<<"DO YOU WANT TO PLAY AGAIN(y/n) ";
	char c;
	cin>>c;
	if(c=='n')
	break;
}	
}
