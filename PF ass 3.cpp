#include<iostream>
using namespace std;
	void displayMap(int size,int xrow,int xcolumn) {
		cout<<endl;
		for(int i=1;i<=size;i++){
			cout<<i<<" ";
		for(int j=1;j<=size;j++){
			if(i==xrow && j==xcolumn  ){
				cout<<" X ";
			}
			else{
				cout<<" - ";
			}
		}
		cout<<endl;
	}}
int main(){
	int size=0;
	int row=0,column=0;
	int choice;
	int offset;
	while(size<5||size>9){
		cout<<"Enter a size between 5 and 9:";
		cin>>size;
		if(size<5||size>9){
			cout<<"Enter valid size!";
		}
	}
	do{
			cout<<"Initial location of X(row-column):";
		cin>>row>>column;
		if(row<0||row>=size||column<0||column>=size){
			cout<<"Error: Coordinates out of range.\n";
	}}while(row<0||row>=size||column<0||column>=size);
	displayMap(size,row,column);
	while(choice!=4){
		cout<<"1) Update treasure coordinates (row/column)\n";
		cout<<"2) Shift X left or right\n";
		cout<<"3) Shift X up or down\n";
		cout<<"4) Exit program\n";
		cout<<"Select:";
		cin>>choice;
		switch(choice){
			case 1:{
				int newRow,newColumn;
				do{
					cout<<"Enter new row and column:";
					cin>>newRow>>newColumn;
					if(newRow<0||newRow>=size||newColumn<0||newColumn>=size)
						cout<<"Error! Invalid coordinates. try again.\n";
					}
					while(newRow<0||newRow>=size||newColumn<0||newColumn>=size);
					{
					row=newRow;
					column=newColumn;
					displayMap(size,row,column);
				break;}
			}
			case 2:{
				do{
					cout<<"Enter horizontal offset(+ right,- left):";
					cin>>offset;
					int newColumn=column+offset;
					if(newColumn<0||newColumn>size)
						cout<<"Error! Out of bounds, Try again,\n";
					else{
						column=newColumn;
				displayMap(size,row,column);
				break;}
				} while(true);
				break;
			}
			case 3:{
				do{
					cout<<"Enter vertical offset(+ down,-up):";
					cin>>offset;
					int newRow=row+offset;
					if(newRow<0||newRow>size)
						cout<<"Error! Out of bounds. Try again. \n";
					else{
						row=newRow;
				displayMap(size,row,column);
				break;}
				}while(true);
				break;
			}
			case 4:
				cout<<"Exiting Program.....\n";
			break;
			default:
				cout<<"Invalid option. Please select again.\n";
		}
	}
	return 0;
}
