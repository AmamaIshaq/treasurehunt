#include <iostream>
using namespace std;
	char grades(int marks){
	char grade;
		if(marks>=85&&marks<75)
    	grade='A';
 		else if(marks>=75&&marks<55)
 		grade='B';
 		else if(marks>=55&&marks<40)
 		grade='C';
 		else if(marks>=40){
 		grade='D';}
 		return grade;
}
int main (){
	unsigned int num;//num is from 1 to 7 list
	string name1="N",name2="NV",name3="NV",name4="NV",name5="NV";
	int marks1=69,marks2,marks3,marks4,marks5;
    string name,update,del,UserName,Password;
	int numof=0;
	int aa,ab,ac,ad,ae,az;
	int lp=6;
	int add;
	char grade,grade1,grade2,grade3,grade4,grade5;
    grade1=grades(marks1);
    grade2=grades(marks2);
    grade3=grades(marks3);
    grade4=grades(marks4);
    grade5=grades(marks5);
cout<<"*************************************************************************\n                       University Grading System"<<endl;
cout<<"*************************************************************************\n              Please Enter The Administration Cridentials!\n"<<endl;
cout<<"*************************************************************************\nEnter UserName : ";
cin>>UserName;
cout<<"Enter Password : ";
cin>>Password;
if(UserName=="Administration"&&Password=="PF2025"){

   do{//for loop

	cout<<"     ..................     \nChose from the following menu:\nEnter 1 to add a student\nEnter 2 to search a student"<<endl;
	cout<<"Enter 3 to delete a student\nEnter 4 to update the data of a student\nEnter 5 to display number of students in the system"<<endl;
	cout<<"Enter 6 to display list of all studnets without grade\nEnter 7 to display list of all studnets with grade"<<endl;
	cout<<"Enter 0 to close program\n    ...................    \nPlease enter input: ";
	cin>>num;

	switch(num){//switch
	
 
 case 1:{
 		cout<<"You can add a student in vacant NV spot:\nStudent 1) "<<name1<<"\nStudent 2) "<<name2<<"\nStudent 3) "<<name3<<"\nStudent 4) "<<name4<<"\nStudent 5) "<<name5<<"\n"<<endl;
 	    cout<<"Choose an option from 1 to 5 according to student no: ";
		 cin>>add;
		 cout<<"------------------------------"<<endl;
 	    if(add<=5&&add>=1){
 	    switch(add){
 	    	case 1:{
			 if(name1!="NV"){
			 	cout<<"\nError space already occupied!\n"<<endl;
			 }
		     else{
			 	cout<<"Enter student 1: ";
		    	cin>>name1;	
		    	cout<<"Enter student marks: ";
		    	cin>>marks1;
		    	cout<<"------------------------------"<<endl;
			        cout<<"Here is the updated list of students: \nStudent 1) "<<name1<<"\nStudent 2) "<<name2<<"\nStudent 3) "<<name3<<"\nStudent 4) "<<name4<<"\nStudent 5) "<<name5<<"\n"<<endl;
 	    		}	break;
			 }
 	    	case 2:{
 	    		if(name2!="NV"){
			 	cout<<"Error space already occupied!\n"<<endl;
			 }
		     else{
 	    		cout<<"Enter student 2: ";
 	    		cin>>name2;
 	    		cout<<"Enter student marks: ";
 	    		cin>>marks2;
 	    		cout<<"------------------------------"<<endl;
 	    			cout<<"Here is the updated list of students: \nStudent 1) "<<name1<<"\nStudent 2) "<<name2<<"\nStudent 3) "<<name3<<"\nStudent 4) "<<name4<<"\nStudent 5) "<<name5<<"\n"<<endl;
	            	}break;
			 }
			case 3:{
				if(name3!="NV"){
			 	cout<<"Error space already occupied!\n"<<endl;
			 }
		     else{
				cout<<"Enter student 3: ";
				cin>>name3;
				cout<<"Enter student marks: ";
				cin>>marks3;
				cout<<"------------------------------"<<endl;
				   	cout<<"Here is the updated list of students: \nStudent 1) "<<name1<<"\nStudent 2) "<<name2<<"\nStudent 3) "<<name3<<"\nStudent 4) "<<name4<<"\nStudent 5) "<<name5<<"\n"<<endl;
				  }  break;
			}
			case 4:{
				if(name4!="NV"){
			 	cout<<"Error space already occupied!\n"<<endl;
			 }
		     else{
				cout<<"Enter student 4: ";
				cin>>name4;
				cout<<"Enter student marks: ";
				cin>>marks4;
				cout<<"------------------------------"<<endl;
				   	cout<<"Here is the updated list of students: \nStudent 1) "<<name1<<"\nStudent 2) "<<name2<<"\nStudent 3) "<<name3<<"\nStudent 4) "<<name4<<"\nStudent 5) "<<name5<<"\n"<<endl;
				}	break;
			}
			case 5:{
				if(name5!="NV"){
			 	cout<<"Error space already occupied!\n"<<endl;
			 }
		     else{
				cout<<"Enter student 5: ";
				cin>>name5;
				cout<<"Enter student marks: ";
				cin>>marks5;
				cout<<"------------------------------"<<endl;
				   	cout<<"Here is the updated list of students: \nStudent 1) "<<name1<<"\nStudent 2) "<<name2<<"\nStudent 3) "<<name3<<"\nStudent 4) "<<name4<<"\nStudent 5) "<<name5<<"\n"<<endl;
	            }	break;
			} 
			default:
			cout<<"invalid option entered!" <<endl;
			 break;
			    	 }
 }
 else{
 cout<<"invalid option!\n"<<endl;}
	break;
  }
 case 2:{
 	cout<<"Please enter your name: ";
 	cin>>name;
 	cout<<"\n"<<endl;
 	if(name==name1){
     	cout<<"Name      : "<<name1<<"\nMarks     : "<<marks1<<"\nGrade     : "<<grade1<<"\n"<<endl;}
 	else if(name==name2){
 		cout<<"Name      : "<<name2<<"\nMarks     : "<<marks2<<"\nGrade     : "<<grade2<<"\n"<<endl;}
 	else if(name==name3){
 		cout<<"Name      : "<<name3<<"\nMarks     : "<<marks3<<"\nGrade     : "<<grade3<<"\n"<<endl;}
 	else if(name==name4){
 		cout<<"Name      : "<<name4<<"\nMarks     : "<<marks4<<"\nGrade     : "<<grade4<<"\n"<<endl;}
 	else if(name==name5){
 		cout<<"Name      : "<<name5<<"\nMarks     : "<<marks5<<"\nGrade     : "<<grade5<<"\n"<<endl;}
 	else 
 	    cout<<"No data found\n   ..........   \n"<<endl;
 	
	break;
 }
 case 3:{
 	cout<<"enter the student you want to delete:\nStudent 1) "<<name1<<"\nStudent 2) "<<name2<<"\nStudent 3) "<<name3<<"\nStudent 4) "<<name4<<"\nStudent 5) "<<name5<<"\n"<<endl;
 	cin>>del;
 	if(del==name1){
 		name1="NV";
 		cout<<"Here is the updated list of students: \nStudent 1) "<<name1<<"\nStudent 2) "<<name2<<"\nStudent 3) "<<name3<<"\nStudent 4) "<<name4<<"\nStudent 5) "<<name5<<"\n"<<endl;
	 }
 	else if(del==name2){
 		name2="NV";
 		cout<<"Here is the updated list of students: \nStudent 1) "<<name1<<"\nStudent2) "<<name2<<"\nStudent 3) "<<name3<<"\nStudent 4) "<<name4<<"\nStudent 5) "<<name5<<"\n"<<endl;
	 }
	else if(del==name3){
 	    name3="NV";
 	   	cout<<"Here is the updated list of students: \nStudent 1) "<<name1<<"\nStudent 2) "<<name2<<"\nStudent 3) "<<name3<<"\nStudent 4) "<<name4<<"\nStudent 5) "<<name5<<"\n"<<endl;
     }
    else if(del==name4){
        name4="NV";
       	cout<<"Here is the updated list of students: \nStudent 1) "<<name1<<"\nStudent 2) "<<name2<<"\nStudent 3) "<<name3<<"\nStudent 4) "<<name4<<"\nStudent 5) "<<name5<<"\n"<<endl;
     }
    else if(del==name5){
        name5="NV";
         cout<<"Here is the updated list of students: \nStudent 1) "<<name1<<"\nStudent 2) "<<name2<<"\nStudent 3) "<<name3<<"\nStudent 4) "<<name4<<"\nStudent 5) "<<name5<<endl;
     }
 	else
 	cout<<"Record not found!\n"<<endl;
	break;
 }
 case 4:{cout<<"-------------------------------\n                     Update Student Record\n           Enter student name : ";
        cin>>update;
        if(update==name1){
        	cout<<"Student Name : "<<name1<<"\nStudent Marks : "<<marks1<<"\nEnter updated marks: ";
        	cin>>marks1;
        	cout<<"-------------------------------\nStudent updated successfully!\nName  : "<<name1<<"\nMarks : "<<marks1<<endl;
		}
		else if(update==name2){
				cout<<"Student Name : "<<name2<<"\nStudent Marks : "<<marks2<<"\nEnter updated marks: ";
        	cin>>marks2;
        	cout<<"-------------------------------\nStudent updated successfully!\nName  : "<<name2<<"\nMarks : "<<marks2<<endl;
        	
		}
		else if(update==name3){
				cout<<"Student Name : "<<name3<<"\nStudent Marks : "<<marks3<<"\nEnter updated marks: ";
        	cin>>marks3;
        	cout<<"-------------------------------\nStudent updated successfully!\nName  : "<<name3<<"\nMarks : "<<marks3<<endl;
        	
		}
		else if(update==name4){
				cout<<"Student Name : "<<name4<<"\nStudent Marks : "<<marks4<<"\nEnter updated marks: ";
        	cin>>marks4;
        	cout<<"-------------------------------\nStudent updated successfully!\nName  : "<<name4<<"\nMarks : "<<marks4<<endl;
        	
		}
		else if(update==name5){
				cout<<"Student Name : "<<name5<<"\nStudent Marks : "<<marks5<<"\nEnter updated marks: ";
        	cin>>marks5;
        	cout<<"-------------------------------\nStudent updated successfully!\nName  : "<<name5<<"\nMarks : "<<marks5<<endl;
        	
		}
		else{
			cout<<"Record not found!\n"<<endl;
		}
	break;
 }
 case 5:
 
	{
		if(name1=="NV")
 	 aa=0;
 	    else
 	     aa=1;
 	}
 	{ if(name2=="NV")
 	 ab=0;
 	    else
 	     ab=1;
	 }
	 {if(name3=="NV")
	  ac=0;
	    else
	    ac=1;
	 }
	 {if(name4=="NV")
	  ad=0;
	    else
	     ad=1;
	 }
	{
	  if(name5=="NV")
	   ae=0;
	    else
	    ae=1;
	  }
	  az=aa+ab+ac+ad+ae;
	  cout<<"total number of students in system: "<<az<<"\n\n"<<endl;
	 if(num=5&&az==5){
	 cout<<"memory is full\n\n\n"<<endl;}
 	break;
 case 6:{cout<<"****************************************"<<endl;
         cout<<"Student Name                Marks\n****************************************"<<endl;
         if(name1!="NV"){
         cout<<name1;
         cout<<"                            "<<marks1<<endl;
		 }
         else if(name2!="NV"){
         cout<<name2;
         cout<<"                            "<<marks2<<endl;	
		 }
		 else if(name3!="NV"){
		 cout<<name3;
         cout<<"                            "<<marks3<<endl;
		 }
		 else if(name4!="NV"){
		 cout<<name4;
         cout<<"                            "<<marks4<<endl;
		 }
		 else if(name5!="NV"){
		 cout<<name5;
         cout<<"                            "<<marks5<<endl;
		 }
		 cout<<"****************************************"<<endl;
	break;
 }
 case 7:{cout<<"**********************************************************"<<endl;
         cout<<"Student Name                Marks\n**********************************************************"<<endl;
         if(name1!="NV"){
         cout<<name1;
         cout<<"                            "<<marks1<<"             "<<grade1<<endl;
		 }
         if(name2!="NV"){
         cout<<name2;
         cout<<"                            "<<marks2<<"             "<<grade2<<endl;	
		 }
		 if(name3!="NV"){
		 cout<<name3;
         cout<<"                            "<<marks3<<"             "<<grade3<<endl;
		 }
		 if(name4!="NV"){
		 cout<<name4;
         cout<<"                            "<<marks4<<"             "<<grade4<<endl;
		 }
		 if(name5!="NV"){
		 cout<<name5;
         cout<<"                            "<<marks5<<"             "<<grade5<<endl;
		 }
		 cout<<"**********************************************************"<<endl;
	break;
 }
case 0:
	cout<<"*************************************************************************"<<endl;
break;
default:
	
	cout<<"input is invalid"<<endl;
break;
}//switch
	}//for loop
	while(num!=0);
	cout<<"----Program closed successfully----"<<endl;}
else{
	cout<<"                        Cridentials are invalid!\n                            Login failed!"<<endl;
	cout<<"*************************************************************************"<<endl;
}
return 0;
}
