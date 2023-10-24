#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;


// SignIn/ SignOUT function

void Signing(char name[100],char address[1000]){
			int k=0;
	char c;
int g;
	//Sing in/up
	string email;
	char Password[8];
	ofstream outfile;
   outfile.open("userdata.txt",ios::out | ios::in |ios::app);
   outfile <<"name:\t" << name << endl;
   cin.ignore();
   outfile <<"address:\t" << address << endl;
   outfile.close();
  
   do{
   	cout<<endl<<"Do you already have an account(y\\n):\t";
   	cin>>c;
   	if(c=='y'||c=='Y'){
   		cout<<endl<<"Enter your email please:\t";
   		cin>>email;
  	ofstream outfile;
   outfile.open("userdata.txt",ios::out | ios::in |ios::app);
   outfile <<"Email:\t" << email << endl;
 outfile.close();
 
    cout<<endl<<"Enter your Password please:\t";
   	cin>>Password;
   fstream file;
   outfile.open("userdata.txt",ios::out | ios::in |ios::app);
   outfile <<"Password:\t" << Password << endl;
    outfile.close();
    g=2;
	   }
   	else if(c=='n'||c=='N'){
	   
   		cout<<endl<<"Enter your email please:\t";
   		cin>>email;
  	ofstream outfile;
   outfile.open("userdata.txt",ios::out | ios::in |ios::app);
   outfile <<"Email:\t" << email << endl;
 outfile.close();
 

    cout<<endl<<"Enter your Password please:\t";
   	cin>>Password;
   fstream file;
   outfile.open("userdata.txt",ios::out | ios::in |ios::app);
   outfile <<"Password:\t" << Password << endl;
    outfile.close();
    g=2;

	}
	if(g!=2){
		cout<<endl<<"Invalid input!";
	}
   }while(g!=2);
void feedback();
	}
	
	

// int main
int main(){
	char go='y';
	int option,selection;
	float number_of_items;
char name[100],address[1000];

	cout<<"Enter your name please:\t";
	cin.get(name,100);
	cin.ignore();
	cout<<"\nEnter your current address:";
	cin.get(address,1000);
//	cin.ignore();
//	MenuAndPrice a1;
	Signing(name,address);

}


