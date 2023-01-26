#include<iostream>
#include<fstream>
#include<windows.h>
#include<string.h>
#include<sstream>
#include<math.h>
using namespace std;
int slowc(string b)
{
	for(int j=0;j<b.size();j++)
	{
		cout<<b[j];
		Sleep(30);//30
	}
	Sleep(300);//300
	return 0;
}
int fastc(string c)
{
	for(int z=0;z<c.size();z++)
	{
		cout<<c[z];
		Sleep(1);
	}
	Sleep(25);
	return 0;
}
int main()
{
	
	SetConsoleTitle("Start - LubsWonder");
	slowc("Welcome to LW, LubsWonder.");
	Sleep(2500);
	system("cls");
	
	SetConsoleTitle("Login/Sign in - LubsWonder");
	int choice;
	char password[255];
	char username[255];
	choice=MessageBox(NULL,"Do you have an account? (Only use one account in one PC.)","Account Question",MB_YESNO|MB_ICONQUESTION);
	if(choice==6)
	{
		while(1)
		{
			ifstream infile;
			char CorrectUsername[255];
			char CorrectPassword[255];
			slowc("Username: ");
			cin>>username;
			cout<<endl;
			slowc("Password: ");
			cin>>password;
			cout<<endl;
			infile.open("/username.txt");
			infile>>CorrectUsername;
			infile.close();
			infile.open("/password.txt");
			infile>>CorrectPassword;
			infile.close();
			cout<<username
			if(strcmp(username, CorrectUsername)+strcmp(password, CorrectPassword)==0)
			{
				slowc("Welcome, ");slowc(username);slowc(".");
				infile.close();
				Sleep(1500);
				system("cls");
				break;
			}
			else
			{
				slowc("Sorry, your input password or name is wrong.");
				cout<<endl<<endl<<endl;
			}
		}
	}
	else if(choice==7)
	{
		slowc("I will create an account for you.\n");
		cout<<endl;
		ofstream outfile;
		
		outfile.open("/username.txt");
		slowc("Name: ");
		cin>>username;
		cout<<endl;
		outfile<<username;
		outfile.close();
		
		outfile.open("/password.txt");
		slowc("Password: ");
		cin>>password;
		cout<<endl;
		outfile<<password;
		outfile.close();
		
		slowc("Sign up successfully!");
		cout<<endl;
		slowc("Welcome,");slowc(username);slowc(".");
		Sleep(2000);
		system("cls");
	}
	SetConsoleTitle("Use - LubsWonder")
	while(1)
	{
		slowc("You can:");cout<<endl<<endl;slowc("1.Calculator 2.Statistical Word 3.Power Off");
		cout<<endl<<endl;
		int function_number;
		cin>>function_number;
		if(function_number==1)
		{
			cout<<endl;
			slowc("Operation Type('+,-,*,/,&(num=x*x),%(a/b=c...num),p(x^y=num),s(num=x*x)')");
			cout<<endl<<endl;
			char OT;
			cin>>OT;
			if(OT=='+')// 1
			{
				cout<<endl;
				slowc("input a and b.");
				cout<<endl<<endl;
				long long a1,b1,c1;
				cin>>a1>>b1;
				c1=a1+b1;
				stringstream ssa;
				ssa<<c1;
				string out_stringa=ssa.str();
				cout<<endl;
				slowc("The answer is : ");slowc(out_stringa);
				cout<<endl<<endl;
				system("pause");
				cout<<endl;
				system("cls");
			}
			else if(OT=='-')
			{
				cout<<endl;
				slowc("input a and b.");
				cout<<endl<<endl;
				long long a2,b2,c2;
				cin>>a2>>b2;
				c2=a2-b2;
				stringstream ssb;
				ssb<<c2;
				string out_stringb=ssb.str();
				cout<<endl;
				slowc("The answer is : ");slowc(out_stringb);
				cout<<endl<<endl;
				system("pause");
				cout<<endl;
				system("cls");
			}
			else if(OT=='*')
			{
				cout<<endl;
				slowc("input a and b.");
				cout<<endl<<endl;
				long long a3,b3,c3;
				cin>>a3>>b3;
				c3=a3*b3;
				stringstream ssc;
				ssc<<c3;
				string out_stringc=ssc.str();
				cout<<endl;
				slowc("The answer is : ");slowc(out_stringc);
				cout<<endl<<endl;
				system("pause");
				cout<<endl;
				system("cls");
			}
			else if(OT=='/')
			{
				cout<<endl;
				slowc("input a and b.");
				cout<<endl<<endl;
				long long a4,b4,c4;
				cin>>a4>>b4;
				c4=a4/b4;
				stringstream ssd;
				ssd<<c4;
				string out_stringd=ssd.str();
				cout<<endl;
				slowc("The answer is : ");slowc(out_stringd);
				cout<<endl<<endl;
				system("pause");
				cout<<endl;
				system("cls");
			}
			else if(OT=='&')
			{
				cout<<endl;
				slowc("input x.");
				cout<<endl<<endl;
				long long x5,xx5;
				cin>>x5;
				xx5=x5*x5;
				stringstream sse;
				sse<<xx5;
				string out_stringe=sse.str();
				cout<<endl;
				slowc("The answer is : ");slowc(out_stringe);
				cout<<endl<<endl;
				system("pause");
				cout<<endl;
				system("cls");
			}
			else if(OT=='%')
			{
				cout<<endl;
				slowc("input a,b.");
				cout<<endl<<endl;
				long long a6,b6,c6;
				cin>>a6>>b6;
				c6=a6%b6;
				stringstream ssf;
				ssf<<c6;
				string out_stringf=ssf.str();
				cout<<endl;
				slowc("The answer is : ");slowc(out_stringf);
				cout<<endl<<endl;
				system("pause");
				cout<<endl;
				system("cls");
			}
			else if(OT=='p')
			{
				cout<<endl;
				slowc("input a,b.");
				cout<<endl<<endl;
				long long a7,b7,c7;
				cin>>a7>>b7;
				c7=pow(a7,b7);
				stringstream ssg;
				ssg<<c7;
				string out_stringg=ssg.str();
				cout<<endl;
				slowc("The answer is : ");slowc(out_stringg);
				cout<<endl<<endl;
				system("pause");
				cout<<endl;
				system("cls");
			}
			else if(OT=='s')
			{
				cout<<endl;
				slowc("input x.");
				cout<<endl<<endl;
				long double x8,xx8;
				cin>>x8;
				xx8=sqrt(x8);
				stringstream ssh;
				ssh<<xx8;
				string out_stringh=ssh.str();
				cout<<endl;
				slowc("The answer is : ");slowc(out_stringh);
				cout<<endl<<endl;
				system("pause");
				cout<<endl;
				system("cls");
			}
		}
		else if(function_number==2)
		{
			cout<<endl;
			slowc("input text you want to statistical.");
			cout<<endl<<endl;
			slowc("if you want to stop,press enter.don't press space.");
			cout<<endl<<endl;
			string ayyr;
			cin>>ayyr;
			int length=0;
			for(int i=0;ayyr[i];i++)
			{
			    if(ayyr[i]<0){i++;}
			    length++;
			}
			slowc("the letter is : ");cout<<length;slowc(".");
			cout<<endl;
			system("pause");
			cout<<endl;
			system("cls");
		}
		else if(function_number==3)
		{
			cout<<endl;
			slowc("Do you want to make the LubsWonder shutdown or the Windows shutdown?");
			cout<<endl<<endl;
			slowc("1.LubsWonder 2.Windows");
			cout<<endl<<endl;
			int ada;
			cin>>ada;
			cout<<endl;
			if(ada==1)
			{
				break;
			}
			else if(ada==2)
			{
				slowc("Do you really want to shutdown?");
				cout<<endl<<endl;
				slowc("1.Yes 2.No");
				cout<<endl<<endl;
				int adada;
				cin>>adada;
				if(adada==1)
				{
					system("shutdown /p");
				}
				else if(adada==2)
				{
					continue;
					cout<<endl;
				}
			}
		}
	}
	slowc("GoodBye. Thanks for your using.");
	Sleep(2500);
	return 0;
}
