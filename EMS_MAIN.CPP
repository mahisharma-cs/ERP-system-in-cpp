#include<graphics.h>
#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

class employee
{
	public:
		long int empid,salary,m_no;
		char qul[20],desi[20],dep[20],address[50],emp_name[30],pass[40];
		int  exp;
};
void login(){
	employee a;
	int incrt=0,i;

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	long int user_id;
	char pwd[20];
	//Blue
	   repeat_login: 	setcolor(9);
		setfillstyle(1,9);
		rectangle(0,0,639,240);///640,480
		floodfill(1,1,9);
///640,480
	//Border of blue
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,0,639,240);
	//Gray
		setcolor(7);
		setfillstyle(1,7);
		rectangle(0,240,639,480);
		floodfill(1,241,7);
	setcolor(15);
	setfillstyle(1,15);
	rectangle(5,5,635,475);///640,480
	//Border of blue
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,240,639,480);
	//White
		setcolor(15);
		setfillstyle(1,15);
		rectangle(100,60,540,420);
		floodfill(101,81,15);
	//Outer border white
		setcolor(15);
		setfillstyle(1,15);
		rectangle(95,55,545,425);
	//Border_of_white
		setcolor(0);
		setfillstyle(1,0);
		rectangle(100,60,540,420);
	//Login
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(180,180,"Login ID :");
	//Box_of_login
		setcolor(0);
		setfillstyle(1,15);
		rectangle(180,215,465,245);
	//Password
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(180,250,"Password :");
	//Box_of_pwd
		setcolor(0);
		setfillstyle(1,15);
		rectangle(180,280,465,310);
	//Box_of__Ems_back
		setcolor(7);
		setfillstyle(4,7);
		rectangle(275,75,365,115);
		floodfill(276,76,7);
	//Box_of_EMS
		setcolor(9);
		setfillstyle(1,9);
		rectangle(280,80,360,110);
		floodfill(281,81,9);
//bORDER of Ems
		setcolor(15);
		setfillstyle(1,15);
		rectangle(280,80,360,110);
//EMS_in_box
	for(i=0;i<4;i++){
		setcolor(0);
		settextstyle(1,0,4);
		outtextxy(290,75,"EMS");
		delay(80);
		setcolor(15);
		settextstyle(1,0,4);
		outtextxy(290,75,"EMS");
		delay(200);
	}

//EMS_print->E...M...S...
		setcolor(0);
		settextstyle(1,0,4);
		outtextxy(145,120,"E");
		settextstyle(1,0,1);
		outtextxy(165,133,"MPLOYEE");	// Management System");
		settextstyle(1,0,4);
		outtextxy(250,120," M");
		settextstyle(1,0,1);
		outtextxy(288,133,"ANAGEMENT");
		settextstyle(1,0,4);
		outtextxy(400,120," S");
		settextstyle(1,0,1);
		outtextxy(430,133,"YSTEM");
	//Box_Press->Login
		setcolor(7);
		setfillstyle(1,7);
		rectangle(380,330,465,365);
		floodfill(381,331,7);
		setcolor(0);
		setfillstyle(1,0);
		rectangle(380,330,465,365);
	//Submit/Login_Button
		setcolor(15);
		settextstyle(1,0,2);
		outtextxy(395,335,"LOGIN");
	//Cursor_on_user_id
	////////////////////////////////
		//gotoxy(182,231);
	   gotoxy(25,15);
		cin>>user_id;
	//Pwd_ka_cursor
		gotoxy(25,19);
		cin>>pwd;
/*		for(int l=0;l<12;l++){
			gotoxy(25+l,21);
			pwd[l]=getch();
			cout<<"*";
				pwd[l]='\0';
		}  */
		ifstream fin;
		fin.open("EMS.dat",ios::in);
		fin.read((char*)&a,sizeof(a));

		while(!fin.eof()){
			if(user_id==a.empid){
				if(!strcmp(a.pass,pwd)){
					int i;
					for(i=0;i<5;i++){
						setcolor(10);
						settextstyle(1,0,2);
						outtextxy(310,380,"Login successful");
						delay(80);
						setcolor(0);
						settextstyle(1,0,2);
						outtextxy(310,380,"Login successful");
						delay(200);

					}
				}
				else{
					incrt=incrt+1;
					int i;
					for(i=0;i<7;i++){
						setcolor(4);
						settextstyle(1,0,1.5);
						outtextxy(115,380,"Incorrect password, Press Enter to resubmit");
						delay(80);
						setcolor(0);
						settextstyle(1,0,1.5);
						outtextxy(115,380,"Incorrect password, Press Enter to resubmit");
						delay(200);
					}
					getch();
					cleardevice();
					goto repeat_login;
				}
			}
			fin.read((char*)&a,sizeof(a));
		}
		fin.close();
//			printf("*** %d ***",incrt);

	getch();
	cleardevice();
	closegraph();
}

//**************************************************************************************************************
//Operator page ka function
void optr(){
	int choice;
	char name[20]={"Mahiransh Sharma"},dsgn[20]={"Head Operator"},add[50]={"Vijya Nagar"},qual[20]={"B.Tech Er"};
	int id[6]={1,2,3,4,5,6},phno[10]={0,9,8,7,6,5,4,3,2,1};
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	//Blue
		repeat:setcolor(9);
		setfillstyle(1,9);
		rectangle(0,0,639,60);//640,480
		floodfill(1,1,9);
	//Operator
		setcolor(15);
		settextstyle(1,0,2);
		outtextxy(60,25,"Operator");
	//Blue border
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,0,639,60);//640,480
	//White
		setcolor(15);
		setfillstyle(1,15);
		rectangle(0,60,639,320);
		floodfill(1,61,15);
	//Gray
		setcolor(7);
		setfillstyle(1,7);
		rectangle(0,300,639,480);
		floodfill(1,301,7);
	//Blue slab
		setcolor(9);
		setfillstyle(1,9);
		rectangle(0,275,639,315);
		floodfill(1,276,9);
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,275,639,315);
	//Box_serial_number_white
		setcolor(15);
		setfillstyle(1,15);
		rectangle(470,280,530,310);
		floodfill(471,281,15);
		setcolor(0);
		setfillstyle(1,0);
		rectangle(470,280,530,310);
	//last blue slab
		setcolor(9);
		setfillstyle(1,9);
		rectangle(0,440,639,480);
		floodfill(1,461,9);
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,440,639,480);

	setcolor(15);
	setfillstyle(1,15);
	rectangle(5,5,635,475);///640,480

	//Take choice

	//Print Enter serial numbers
		setcolor(15);
		settextstyle(1,0,2);
		outtextxy(60,282,"Enter the serial number of operation :");
	//Half gray ki border
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,315,320,440);
	//Circle
		setcolor(7);
		setfillstyle(9,7);
		circle(320,61,50);
		floodfill(321,62,7);
		setcolor(0);
		setfillstyle(1,0);
		circle(320,61,50);
	//Print...O...mid of crle
		setcolor(15);
		settextstyle(1,0,6);
		outtextxy(307,27,"O");
	//Name
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,120,"Name");
	//Id
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,152,"Id");
	//Designation
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,184,"Designation");
	//Contact Number
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,216,"Contact Number");
	//Address
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,248,"Address");
	//Print " : ";
		for(int i=0;i<151;i=i+32){
			setcolor(0);
			settextstyle(1,0,2);
			outtextxy(245,120+i," : ");
		}
	//1.Add record
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,315,"1. Add new record");
	//2.Search record
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,345,"2. Search record");
	//Delete record
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,375,"3. Delete record");
	//Update record
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,405,"4. Update record");
	//View record
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(340,315,"5. View record");
	//Logut
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(340,345,"6. Logout ");
	//Enter choice
		gotoxy(35,9);
		puts(name);
		gotoxy(35,11);
			for(int j=0;j<6;j++){
				cout<<id[j];
			}
		gotoxy(35,13);
		puts(dsgn);
		gotoxy(35,15);
			for(int k=0;k<10;k++){
				cout<<phno[k];
			}
		gotoxy(35,17);
		puts(add);
		gotoxy(63,19);
			cin>>choice;
			if(choice>6 || choice<1){
				for(int i=0;i<5;i++){
					setcolor(4);
					outtextxy(75,440,"Incorrect Entry of action, press Enter to retype");
					delay(80);
					setcolor(15);
					outtextxy(75,440,"Incorrect Entry of action, press Enter to retype");
					delay(200);
				}
				getch();
				cleardevice();
				goto repeat;

			}
			if(choice==1){
			//last blue slab
					for(int i=0;i<3;i++){
					setcolor(10);
					outtextxy(75,440,"You have selected Add record. Press Enter key");
					delay(80);
					setcolor(15);
					outtextxy(75,440,"You have selected Add record. Press Enter key");
					delay(200);
					}
			}
			if(choice==2){
							//last blue slab
					for(int i=0;i<3;i++){
					setcolor(10);
					outtextxy(75,440,"You have selected Search record. Press Enter key");
					delay(80);
					setcolor(15);
					outtextxy(75,440,"You have selected Search record. Press Enter key");
					delay(200);
					}
			}
			if(choice==3){
							//last blue slab
					for(int i=0;i<3;i++){
					setcolor(10);
					outtextxy(75,440,"You have selected Delete record. Press Enter key");
					delay(80);
					setcolor(15);
					outtextxy(75,440,"You have selected Delete record. Press Enter key");
					delay(200);
					}
			}
			if(choice==4){
					for(int i=0;i<3;i++){
					setcolor(10);
					outtextxy(75,440,"You have selected Update record. Press Enter key");
					delay(80);
					setcolor(15);
					outtextxy(75,440,"You have selected Update record. Press Enter key");
					delay(200);
					}
			}
			if(choice==5){
					for(int i=0;i<3;i++){
					setcolor(10);
					outtextxy(75,440,"You have selected View record. Press Enter key");
					delay(80);
					setcolor(15);
					outtextxy(75,440,"You have selected View record. Press Enter key");
					delay(200);
					}
			}
			if(choice==6){
					for(int i=0;i<3;i++){
					setcolor(10);
					outtextxy(75,440,"You have selected Logout. Press Enter key");
					delay(80);
					setcolor(15);
					outtextxy(75,440,"You have selected Logout. Press Enter key");
					delay(200);
					login();
					}
			}
//last border white color wali...
	setcolor(15);
	setfillstyle(1,15);
	rectangle(5,5,635,475);///640,480

	getch();
	cleardevice();
	closegraph();
}


//**************************************************************************************************************
//Manager page function
void mngr(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	int choice;
	char name[20]={"Mahiransh Sharma"},dsgn[20]={"Head Operator"},add[50]={"Vijya Nagar"},qual[20]={"B.Tech Er"};
	int id[6]={1,2,3,4,5,6},phno[10]={0,9,8,7,6,5,4,3,2,1};

	//Blue
		repeat_mngr : setcolor(9);
		setfillstyle(1,9);
		rectangle(0,0,639,60);//640,480
		floodfill(1,1,9);
	//Manager
		setcolor(15);
		settextstyle(1,0,2);
		outtextxy(60,25,"Manager");
	//Blue border
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,0,639,60);//640,480
	//White
		setcolor(15);
		setfillstyle(1,15);
		rectangle(0,61,639,320);
		floodfill(1,62,15);
	//Gray
		setcolor(7);
		setfillstyle(1,7);
		rectangle(0,300,639,480);
		floodfill(1,322,7);
	//Operations wala box
		setcolor(9);
		setfillstyle(1,9);
		rectangle(0,270,639,300);
		floodfill(1,281,9);
	//operator_border
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,270,639,300);
	//Print Operator
		setcolor(15);
		settextstyle(1,0,2);
		outtextxy(60,272,"Actions");
	//Half gray ki border
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,300,320,480);
	//Circle
		setcolor(7);
		setfillstyle(9,7);
		circle(320,61,50);
		floodfill(321,62,7);
	//Circle_ki_border
		setcolor(0);
		setfillstyle(1,0);
		circle(320,61,50);
	//Print...O...mid of crle
		setcolor(15);
		settextstyle(1,0,6);
		outtextxy(302,27,"M");
	//Name
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,120,"Name");
	//Id
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,152,"Id");
	//Designation
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,184,"Designation");
	//Contact Number
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,216,"Contact Number");
	//Address
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,248,"Address");
	//Print " : ";
		for(int i=0;i<151;i=i+32){
			setcolor(0);
			settextstyle(1,0,2);
			outtextxy(245,120+i," : ");
		}
	//1.Update
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,315,"1. Update");
	//2.Promotion
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,345,"2. Promotion");
	//View overtime
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,375,"3. View overtime");
	//Update record
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,405,"4. Update record");
	//View record
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(340,315,"5. View record");
	//Logut
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(340,345,"6. Logout ");
	//Enter choice
		gotoxy(35,9);
		puts(name);
		gotoxy(35,11);
			for(int j=0;j<6;j++){
				cout<<id[j];
			}
		gotoxy(35,13);
		puts(dsgn);
		gotoxy(35,15);
			for(int k=0;k<10;k++){
				cout<<phno[k];
			}
		gotoxy(35,17);
		puts(add);
		gotoxy(63,19);
			cin>>choice;
			if(choice>6 || choice<1){
				for(int i=0;i<5;i++){
					setcolor(4);
					outtextxy(75,440,"Incorrect Entry of action, press Enter to retype");
					delay(80);
					setcolor(15);
					outtextxy(75,440,"Incorrect Entry of action, press Enter to retype");
					delay(200);
				}
				getch();
				cleardevice();
				goto repeat_mngr;

			}
			if(choice==1){
			//last blue slab
					for(int i=0;i<3;i++){
					setcolor(10);
					outtextxy(75,440,"You have selected Update. Press Enter key");
					delay(80);
					setcolor(15);
					outtextxy(75,440,"You have selected Update. Press Enter key");
					delay(200);
					}
			}
			if(choice==2){
							//last blue slab
					for(int i=0;i<3;i++){
					setcolor(10);
					outtextxy(75,440,"You have selected Promotion. Press Enter key");
					delay(80);
					setcolor(15);
					outtextxy(75,440,"You have selected Promotion. Press Enter key");
					delay(200);
					}
			}
			if(choice==3){
							//last blue slab
					for(int i=0;i<3;i++){
					setcolor(10);
					outtextxy(75,440,"You have selected View overtime. Press Enter key");
					delay(80);
					setcolor(15);
					outtextxy(75,440,"You have selected View overtime. Press Enter key");
					delay(200);
					}
			}
			if(choice==4){
					for(int i=0;i<3;i++){
					setcolor(10);
					outtextxy(75,440,"You have selected Update record. Press Enter key");
					delay(80);
					setcolor(15);
					outtextxy(75,440,"You have selected Update record. Press Enter key");
					delay(200);
					}
			}
			if(choice==5){
					for(int i=0;i<3;i++){
					setcolor(10);
					outtextxy(75,440,"You have selected View record. Press Enter key");
					delay(80);
					setcolor(15);
					outtextxy(75,440,"You have selected View record. Press Enter key");
					delay(200);
					}
			}
			if(choice==6){
					for(int i=0;i<3;i++){
					setcolor(10);
					outtextxy(75,440,"You have selected Logout. Press Enter key");
					delay(80);
					setcolor(15);
					outtextxy(75,440,"You have selected Logout. Press Enter key");
					delay(200);
					}
			}
//last border white color wali...
	setcolor(15);
	setfillstyle(1,15);
	rectangle(5,5,635,475);///640,480


	getch();
	cleardevice();
	closegraph();
}
/*
//***************************************************************************************************
//Employee function page
void eply(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	//Blue
		setcolor(9);
		setfillstyle(1,9);
		rectangle(0,0,639,60);//640,480
		floodfill(1,1,9);
	//Operator
		setcolor(15);
		settextstyle(1,0,2);
		outtextxy(60,25,"Employee");
	//Blue border
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,0,639,60);//640,480
	//White
		setcolor(15);
		setfillstyle(1,15);
		rectangle(0,61,639,320);
		floodfill(1,62,15);
	//Gray
		setcolor(7);
		setfillstyle(1,7);
		rectangle(0,300,639,480);
		floodfill(1,322,7);
	//Operations wala box
		setcolor(9);
		setfillstyle(1,9);
		rectangle(0,270,639,300);
		floodfill(1,281,9);
	//operator_border
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,270,639,300);
	//Print Operator
		setcolor(15);
		settextstyle(1,0,2);
		outtextxy(60,272,"<Employee ka-ka krrta hai...!! >");
	//Half gray ki border
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,300,320,480);
	//Circle
		setcolor(7);
		setfillstyle(9,7);
		circle(320,61,50);
		floodfill(321,62,7);
	//Circle_ki_border
		setcolor(0);
		setfillstyle(1,0);
		circle(320,61,50);
	//Print...O...mid of crle
		setcolor(15);
		settextstyle(1,0,6);
		outtextxy(307,27,"E");
	//Name
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,112,"Name");
	//Id
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,142,"Id");
	//Designation
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,172,"Designation");
	//Contact Number
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,202,"Contact Number");
	//Address
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,232,"Address");
	//Print " : ";
		for(int i=0;i<150;i=i+30){
			setcolor(0);
			settextstyle(1,0,2);
			outtextxy(245,112+i," : ");
		}
	//1.Add record
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,305,"1. ");
	//2.Search record
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,335,"2. ");
	//Delete record
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,365,"3. ");
	//Update record
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(70,395,"4. ");
	//View record
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(340,305,"5. Update Password");
	//Logut
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(340,335,"6. Logout ");
	//Submit button
		setcolor(9);
		setfillstyle(1,9);
		rectangle(0,430,639,480);
		floodfill(1,461,9);
	//Submit Border
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,430,639,480);
	//Take choice
		setcolor(15);
		settextstyle(1,0,2);
		outtextxy(60,437,"Enter the serial number of action :");
	//Box_serial_number_white
		setcolor(15);
		setfillstyle(1,15);
		rectangle(440,435,500,465);
		floodfill(441,451,15);
	//Box of number
		setcolor(0);
		setfillstyle(1,0);
		rectangle(440,435,500,465);

	getch();
	cleardevice();
	closegraph();

}
//**********************************************************************************************************************************
//Add another account of employee*/
void add_accnt(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	char name[30],pwd[8],contact[10],dept[20],dsgn[20],add[50],id[10],slry[15];
	int choice;
	//Blue
		setcolor(9);
		setfillstyle(1,9);
		rectangle(0,0,639,40);//640,480
		floodfill(1,1,9);
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,0,639,40);//640,480
	//White
		setcolor(15);
		setfillstyle(1,15);
		rectangle(0,40,639,360);
		floodfill(1,82,15);
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,40,639,360);

	//Square(upside block)
		setcolor(7);
		setfillstyle(9,7);
		rectangle(70,15,570,65);
		floodfill(71,51,7);
		setcolor(0);
		setfillstyle(9,0);
		rectangle(70,15,570,65);
	//Gray
		setcolor(7);
		setfillstyle(1,7);
		rectangle(0,345,639,480);//640,480
		floodfill(1,346,7);
		setcolor(0);
		setfillstyle(1,0);
		rectangle(0,345,639,480);//640,480
	//blue slab
		setcolor(9);
		setfillstyle(1,9);
		rectangle(0,340,639,380);//640,480
		floodfill(1,341,9);
		setcolor(0);
		setfillstyle(10,0);
		rectangle(0,340,639,380);//640,480

	//white wala box

	//Print Enter serial numbers
		setcolor(15);
		settextstyle(1,0,2);
		outtextxy(60,343,"Enter the serial number of operation :");

	//Add New avccount
		setcolor(15);
		settextstyle(1,0,4);
		outtextxy(75,18,"1. Add new record");
	//Name
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(50,75,"New Id");
	//New Id
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(50,107,"Contact number");
	//Passworrd
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(50,139,"Salary");
	//Contact number
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(50,171,"Name");

	//Department
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(50,203,"Password");
	//designation
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(50,235,"Department");
	//address
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(50,267,"Designation");
	//Salary
		setcolor(0);
		settextstyle(1,0,2);
		outtextxy(50,299,"Address");


	//Print " : ";
		for(int i=0;i<226;i=i+32){
			setcolor(0);
			settextstyle(1,0,2);
			outtextxy(218,75+i," : ");
		}
	//Box in front of name
		for(int j=0;j<250;j=j+32){
			setcolor(0);
			setfillstyle(1,0);
			rectangle(250,75+j,580,100+j);//640,480
		}
	//ID cursor
		setcolor(10);
		gotoxy(33,6);
		gets(id);
	//Id cursor
		gotoxy(33,8);
		gets(contact);
	//	//Salary cursor
		gotoxy(33,10);
		gets(slry);
	//nAME cursor
		gotoxy(33,12);
		gets(name);
	//Pwd cursor
		for(i=0;i<9;++i){
			if(i==8){
				pwd[8]=getch();
				cout<<"";
				break;
			}
			gotoxy(33+i,14);
			pwd[i]=getch();
			cout<<"*";
			pwd[i]='\0';
		}
		getch();
	//Dept cursor
		gotoxy(33,16);
		gets(dept);
	//dsgn cursor
		gotoxy(33,18);
		gets(dsgn);
	//Address cursor
		gotoxy(33,20);
		gets(add);
		gotoxy(63,23);
	cin>>choice;

	getch();
	cleardevice();
	closegraph();

}

void main(){
	int incrt,choice;
	add_accnt();

	if(incrt==0){
		optr();
		switch (choice){
			case 1:add_accnt();
		}
	}
/*	optr();
	eply();
	mngr();
	add_accnt();*/
}
