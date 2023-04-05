#include<iostream>
#include<conio.h>
#include<windows.h>
#include<mmsystem.h>
//#include<iomanip>
using namespace std;
void gotoxy(short x, short y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

int main(int argc, char** argv)
{    
    
	int playQuiz(void);
	int finalresult=0;
	char playagain;
	 
	play:	
	finalresult = playQuiz();
	gotoxy(35,4);
	cout<<"Your Score is : "<<finalresult<<endl;
	
	if(finalresult>=6)
	{
		gotoxy(35,8);
		cout<<"YOU ARE PASS"<<endl;
		PlaySound(TEXT("win.wav"),NULL,SND_SYNC);
		gotoxy(35,12);
		cout<<"Do you want to play Quiz again ?"<<endl;
		gotoxy(35,16);
		cout<<"Yes(Y) OR No(N) : ";
		cin>>playagain;
		system("cls");
	
		if(playagain=='y' || playagain=='Y')
		{
			
		   goto play;	
		}
		else{
			
			gotoxy(35,8);
			cout<<"Thank You"<<endl;
			PlaySound(TEXT("thankyou.wav"),NULL,SND_SYNC);
			exit(0);
			
			
		}
	    
	}
	else {
		gotoxy(35,8);
		cout<<"YOU ARE FAILED"<<endl;
		PlaySound(TEXT("lose.wav"),NULL,SND_SYNC);
		gotoxy(35,12);
		cout<<"Do you want to play Quiz again ?"<<endl;
		gotoxy(35,16);
		cout<<"Yes(Y) OR No(N) : ";
		cin>>playagain;
		system("cls");
		
		if(playagain=='y' || playagain=='Y')
		{
		  goto play;	
		}
		else{
			
			gotoxy(35,8);
			cout<<"Thank You"<<endl;
			PlaySound(TEXT("thankyou.wav"),NULL,SND_SYNC);
			exit(0);
		}
	}
	
	getch();
	return(0);
}
int playQuiz()
{
	char c;
	char option;
	char again;
	int score=0;
	 
	
	
	gotoxy(30,4);
	cout<<"--------------Welcome to Quiz Game-------------"<<endl; 
    gotoxy(30,6);
	cout<<"----------Please Follow the instruction----------"<<endl;
	gotoxy(30,10);
	cout<<"Instruction 1 : Quiz contains Total 10 Questions"<<endl;
	gotoxy(30,14);
	cout<<"Instruction 2 : You will get 1 marks for each right answer"<<endl;
	gotoxy(30,18);
	cout<<"Instruction 3 : There will be negative marking of -1 for each wrong answers"<<endl;
	gotoxy(30,22);
	cout<<"Instruction 4 : Please Selection any one option a/b/c/d"<<endl;
	gotoxy(30,26);
	cout<<"Instruction 6 : If you score >=6, you will pass the Quiz"<<endl;
	gotoxy(30,30);
	cout<<"Instruction 6 : Press your answer after the end of music"<<endl;
	gotoxy(30,34);
	cout<<"Instruction 5 : Please press 'S' to start the QUIZ : ";
    cin>>c;
    
    system("cls");
	
	if(c=='S' || c=='s')
	{       
	        playinsidefunction:
	        	
			
			gotoxy(35,4);
			cout<<"Q1. What is the Capital of India"<<endl;
			gotoxy(10,8);
			cout<<"(a) New Delhi"<<endl;
		    gotoxy(75,8);
			cout<<"(b) Mumbai"<<endl;
		    gotoxy(10,12);
			cout<<"(c) Kolkata"<<endl;
			gotoxy(75,12);
			cout<<"(d) Chennai"<<endl;
			gotoxy(45,16);
			cout<<"Your Answer : ";
			PlaySound(TEXT("question.wav"),NULL,SND_SYNC);
			cin>>option;
			if(option=='a' || option=='A')
			{
				score=score+1;
			}
			
			else if(option!='a' || option!='A')
			{
				score=score-1;
			
			}
		
			system("cls");
				
			gotoxy(39,4);
			cout<<"Q2. Who is the Prime Minister of INDIA"<<endl;
			gotoxy(10,8);
			cout<<"(a) MR. Arvind Kejriwal"<<endl;
			gotoxy(75,8);
			cout<<"(b) MR. Rahul Ghandhi"<<endl;
			gotoxy(10,12);
			cout<<"(c) MR. Narendra Damodar Das Modi"<<endl;
			gotoxy(75,12);
			cout<<"(d) MRS. Priyanka Gandhi"<<endl;
			gotoxy(50,16);
			cout<<"Your Answer : ";
			PlaySound(TEXT("question.wav"),NULL,SND_SYNC);
			cin>>option;
			if(option=='c' || option=='C')
			{
				score=score+1;
			}
			
			else if(option!='c' || option!='C')
			{
				score=score-1;
				
			}
			system("cls");
			
			gotoxy(30,4);
			cout<<"Q3. What is the national bird of INDIA"<<endl;
			gotoxy(10,8);
			cout<<"(a) Penguine"<<endl;
			gotoxy(75,8);
			cout<<"(b) Peacocke"<<endl;
			gotoxy(10,12);
			cout<<"(c) Sparrow"<<endl;
			gotoxy(75,12);
			cout<<"(d) Parrot"<<endl;
			gotoxy(40,16);
			cout<<"Your Answer : ";
			PlaySound(TEXT("question.wav"),NULL,SND_SYNC);
			cin>>option;
			if(option=='b' || option=='B')
			{
				score=score+1;
			}
			
			else if(option!='b' || option!='B')
			{
				score=score-1;
			}
			system("cls");
			
			gotoxy(30,4);
			cout<<"Q4. What is the national animal of INDIA"<<endl;
			gotoxy(10,8);
			cout<<"(a) Lion"<<endl;
			gotoxy(75,8);
			cout<<"(b) Cow"<<endl;
			gotoxy(10,12);
			cout<<"(c) Bengal Tiger"<<endl;
			gotoxy(75,12);
			cout<<"(d) Tiger"<<endl;
			gotoxy(40,16);
			cout<<"Your Answer : ";
			PlaySound(TEXT("question.wav"),NULL,SND_SYNC);
			cin>>option;
			if(option=='d' || option=='D')
			{
				score=score+1;
			}
			
			else if(option!='d' || option!='D')
			{
				score=score-1;
			}
			system("cls");
			
			gotoxy(30,4);
			cout<<"Q5. What is the national flower of INDIA"<<endl;
			gotoxy(10,8);
			cout<<"(a) Rose"<<endl;
			gotoxy(75,8);
			cout<<"(b) Sun Flower"<<endl;
			gotoxy(10,12);
			cout<<"(c) Lotus"<<endl;
			gotoxy(75,12);
			cout<<"(d) Lilly"<<endl;
			gotoxy(40,16);
			cout<<"Your Answer : ";
			PlaySound(TEXT("question.wav"),NULL,SND_SYNC);
			cin>>option;
			if(option=='c' || option=='C')
			{
				score=score+1;
			}
			
			else if(option!='c' || option!='C')
			{
				score=score-1;
			}
			system("cls");
			
			gotoxy(30,4);
			cout<<"Q6. Who is the Chief Minister of CHHATTISGARH"<<endl;
			gotoxy(10,8);
			cout<<"(a) MR. Bhupesh Baghel"<<endl;
			gotoxy(75,8);
			cout<<"(b) SHREE Yogi Aadhitya Nath"<<endl;
			gotoxy(10,12);
			cout<<"(c) MR. Raman Singh"<<endl;
			gotoxy(75,12);
			cout<<"(d) MR. Devendra Yadav"<<endl;
			gotoxy(45,16);
			cout<<"Your Answer : ";
			PlaySound(TEXT("question.wav"),NULL,SND_SYNC);
			cin>>option;
			if(option=='a' || option=='A')
			{
				score=score+1;
			}
			
			else if(option!='a' || option!='A')
			{
				score=score-1;
			}
			system("cls");
			
			gotoxy(30,4);
			cout<<"Q7. What is the capital of CHHATTISGARH"<<endl;
			gotoxy(10,8);
			cout<<"(a) Durg"<<endl;
			gotoxy(75,8);
			cout<<"(b) Bhilai"<<endl;
			gotoxy(10,12);
			cout<<"(c) Raigarh"<<endl;
			gotoxy(75,12);
			cout<<"(d) New Raipur"<<endl;
            gotoxy(40,16);		
			cout<<"Your Answer : ";
			PlaySound(TEXT("question.wav"),NULL,SND_SYNC);
			cin>>option;
			if(option=='d' || option=='D')
			{
				score=score+1;
			}
			
			else if(option!='d' || option!='D')
			{
				score=score-1;
			}
			system("cls");
			
			gotoxy(30,4);
			cout<<"Q8. What is the capital of New Delhi"<<endl;
			gotoxy(10,8);
			cout<<"(a) Mumbai"<<endl;
			gotoxy(75,8);
			cout<<"(b) Delhi"<<endl;
			gotoxy(10,12);
			cout<<"(c) None of these"<<endl;
			gotoxy(75,12);
			cout<<"(d) India"<<endl;
			gotoxy(40,16);
			cout<<"Your Answer : ";
			PlaySound(TEXT("question.wav"),NULL,SND_SYNC);
			cin>>option;
			if(option=='c' || option=='C')
			{
				score=score+1;
			}
			
			else if(option!='c' || option!='C')
			{
				score=score-1;
			}
			system("cls");
			
			gotoxy(30,4);
			cout<<"Q9. Who is the caption of India Cricket Team"<<endl;
			gotoxy(10,8);
			cout<<"(a) Virath kohali"<<endl;
			gotoxy(75,8);
			cout<<"(b) Rohit Sharma"<<endl;
			gotoxy(10,12);
			cout<<"(c) Ambati Raidu"<<endl;
			gotoxy(75,12);
			cout<<"(d) Dinesh Kartik"<<endl;
			gotoxy(40,16);
			cout<<"Your Answer : ";
			PlaySound(TEXT("question.wav"),NULL,SND_SYNC);
			cin>>option;
			if(option=='b' || option=='B')
			{
				score=score+1;
			}
			
			else if(option!='b' || option!='B')
			{
				score=score-1;
			}
			system("cls");
			
			gotoxy(30,4);
			cout<<"Q10. Who is the caption of CSK in IPl 2022"<<endl;
			gotoxy(10,8);
			cout<<"(a) Ravindra Jadeja"<<endl;
			gotoxy(75,8);
			cout<<"(b) Mahendra Singh Dhoni"<<endl;
			gotoxy(10,12);
			cout<<"(c) Ambati Raidu"<<endl;
			gotoxy(75,12);
			cout<<"(d) None of the above"<<endl;
			gotoxy(40,16);
			cout<<"Your Answer : ";
			PlaySound(TEXT("question.wav"),NULL,SND_SYNC);
			cin>>option;
			if(option=='b' || option=='B')
			{
				score=score+1;
			}
			
			else if(option!='b' || option!='B')
			{
				score=score-1;
			}
			system("cls");
			
	}
	else {
		tryagain:
		gotoxy(35,8);
		cout<<"You have entered wrong value"<<endl;
		PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
		gotoxy(35,12);
		cout<<"PLEASE ENTER 'S' TO START THE GAME : ";
		cin>>again;
		system("cls");
		if (again=='S' || again=='s')
		{
		  goto playinsidefunction;	
		}
		
		else {
			goto tryagain;
		}
	    
	}
    return score;
}

	


