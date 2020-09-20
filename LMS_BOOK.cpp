#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
struct login
{
	string name;
	string pass;
	
};
struct student
{
	string student_name;
	int roll_no;
	string CLASS;
	int semester;
	static int total_book;
};
int student::total_book=1;
struct book
{
	string b_name;
	string a_name;
	int edition;
};
void display()
{
	book b;
	student s;
	cout<<"\nWELOCME TO STUDENT INFO MENU\n\n";
	cout<<"\nENTER STUDENT NAME:\n";
	cin>>s.student_name;
	cout<<"\nENTER STUDENT SEMESTER:\n";
	cin>>s.semester;
	cout<<"\nENTER STUDENT ROLL NO:\n";
	cin>>s.roll_no;
	cout<<"\nENTER STUDENT CLASS:\n";
	cin>>s.CLASS;
	cout<<"\n\nGENERATING STUDENT DATA...\n";
	Sleep(1000);
	system("cls");
	cout<<"\n\tSTUDENT DATA\t\n\n";
	cout<<"\nSTUDENT NAME:\n"<<s.student_name<<endl;	
	cout<<"\nSTUDENT ROLL NO:\n"<<s.roll_no<<endl;
	cout<<"\nSTUDENT SEMESTER:\n"<<s.semester<<endl;
	cout<<"\nSTUDENT CLASS:\n"<<s.CLASS<<endl;
	cout<<"\nTOTAL BOOK ISSued:\n"<<s.total_book<<endl;

}
int main()
{
	login l;
	book b;
	student s;
	L:cout<<"\n\t**********************************\t\n";
	cout<<"\t*  WELCOME TO LIBERARY MANAGMENT *\t\n";
	cout<<"\t*  SYSTEM LOGIN PORTAL           *\t";
	cout<<"\n\t***********************************\t\n\n";
	cout<<"\nEnter your name:\n";
	l.name;
	cin>>l.name;
	cout<<"\nEnter your password:\n";
	cin>>l.pass;
	system("cls");
	L1:cout<<"\n\t\aWELCOME TO LIBERARY MANAGMENT SYSTEM\n\n";
	cout<<"1)SEARCH BOOk\n";
	cout<<"2)ISSUE BOOK\n";
	cout<<"3)REMOVE BOOK\n";
	cout<<"4)SUBMIT BOOK\n";
	cout<<"5)STUDENT INFO\n";
	cout<<"6)REMOVE STUDENT\n";
	cout<<"7)BACK\n";
	cout<<"8)EXIT\n";
	int count;
	cout<<"ENTER YOUR CHOICE:\n";
	cin>>count;
	if(count==1)
	{
		system("cls");
		cout<<"\nWELCOME TO SEARCH MENU\n\n";
		cout<<"ENTER YOUR BOOK NAME:\n";
		cin>>b.b_name;
		cout<<"\nENTER AUTHOR NAME:\n";
		cin>>b.a_name;
		cout<<"\nEnter Edition:\n";
		cin>>b.edition;
		system("cls");
		cout<<"\n\n SEARCHING PLEASE WAIT...\n\n\n";
		Sleep(1000);
		cout<<"\nBOOK NOT AVAILABLE...\n";
		cout<<"\n8)EXIT\n";
		cout<<"\n9)BACK\n";
		cin>>count;
	}
	if(count==2)
	{
		system("cls");
		cout<<"\nWELCOME TO BOOK ISSUE MENU\n\n";
		cout<<"\nENTER YOUR NAME:\n";
		cin>>s.student_name;
		cout<<"\nENTER YOUR ROLL NO:\n";
		cin>>s.roll_no;
		cout<<"\nENTER YOUR CLASS:\n";
		cin>>s.CLASS;
		cout<<"\nENTER YOUR SEMESTER:\n";
		cin>>s.semester;
		cout<<"\nENTER YOUR BOOK NAME:\n";
		cin>>b.b_name;
		cout<<"\nENTER YOUR BOOK AUTHOR NAME:\n";
		cin>>b.a_name;
		cout<<"\nENETR BOOK EDITION:\n";
		cin>>b.edition;
		cout<<"\nBOOK IS SUCCESSFULLY ISSUED...\n";
		cout<<"\n8)EXIT\n";
		cout<<"\n9)BACK\n";
		cin>>count;
		}
		if(count==3)
		{
			system("cls");
			cout<<"WELCOME TO BOOK MENU:\n";
			cout<<"\nENTER BOOK NAME:\n";
			cin>>b.b_name;
			cout<<"\nENTER BOOK AUTHOR NAME:\n";
			cin>>b.a_name;
			cout<<"\nENTER BOOK EDITION:\n";
			cin>>b.edition;
			b.b_name="";
			b.a_name="";
			b.edition=0;
			cout<<"\nBOOK IS SUCCESSFULLY REMOVED...\n";
			cout<<"\n8)EXIT\n";
			cout<<"\n9)BACK\n";
			cin>>count;
		}
		if(count==4)
		{
		system("cls");
		cout<<"\nWELCOME TO BOOK SUBMITION MENU\n\n";
		cout<<"\nENTER YOUR NAME:\n";
		cin>>s.student_name;
		cout<<"\nENTER YOUR ROLL NO:\n";
		cin>>s.roll_no;
		cout<<"\nENTER YOUR CLASS:\n";
		cin>>s.CLASS;
		cout<<"\nENTER YOUR SEMESTER:\n";
		cin>>s.semester;
		cout<<"\nENTER THE BOOK NAME:\n";
		cin>>b.b_name;
		cout<<"\nENTER BOOK AUTHOR NAME:\n";
		cin>>b.a_name;
		cout<<"\nENETR BOOK EDITION:\n";
		cin>>b.edition;
		cout<<"\n\n BOOK SUBMITTED SUCCESFULLY...\n\n";
		cout<<"\n8)EXIT\n";
		cout<<"\n9)BACK\n";
		cin>>count;
		}
		if(count==5)
		{
			system("cls");
			display();
			cout<<"8)EXIT\n";
			cout<<"9)BACK\n";
			cin>>count;
		}
		if(count==6)
		{
			system("cls");
			cout<<"\n\n WELCOME TO REMOVED STUDENT MENU\n\n";
		cout<<"\nENTER STUDENT NAME:\n";
		cin>>s.student_name;
		cout<<"\nENTER STUDENT ROLL NO:\n";
		cin>>s.roll_no;
		cout<<"\nENTER STUDENT CLASS:\n";
		cin>>s.CLASS;
		cout<<"\nENTER STUDENT SEMESTER:\n";
		cin>>s.semester;
		cout<<"\n\nADDRESSING DATA WAIT A WHILE...\n\n";
		Sleep(1000);
		system("cls");
		cout<<"\n\nSTUDENT DATA REMOVED SUCCESSFULLY\n\n";
		s.student_name="";
		s.CLASS="";
		s.roll_no=0;
		s.semester=0;
		s.total_book=0;
		cout<<"8)EXIT\n";
		cout<<"9)BACK\n";
		cin>>count;
		}
		if(count==7)
		{
			system("cls");
			goto L;
		}
		if(count==8)
		{
			return 0;
		}
		
	if(count==9)
	{
		system("cls");
		goto L1;
	}
}
