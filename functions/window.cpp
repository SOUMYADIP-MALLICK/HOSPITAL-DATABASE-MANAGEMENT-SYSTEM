int window()
 {
	 password A;
	 system("cls");

cout<<endl;
cout<<right<<setw(60)<<setfill(' ')<<"WELCOME TO SDM Hospital"<<endl;
cout<<endl<<endl;
cout<<right<<setw(60)<<setfill(' ')<<"----------------------------------------"<<endl;

cout<<right<<setw(40)<<setfill(' ')<<"1.Main Menu"<<endl;
cout<<right<<setw(35)<<setfill(' ')<<"2.Exit"<<endl;
cout<<right<<setw(60)<<setfill(' ')<<"----------------------------------------"<<endl<<endl;
cout<<"Enter your choice:"<<endl<<endl;
int choice1;
cin>>choice1;

if (choice1==1){
	 system("cls");
	 int var=chooseMain();
	 system("cls");

		switch(var){
		case 1:{
			A.passwordProtect();
			system("cls");
			getDoctorDatabase();
			break;
		}

		case 2:{
				A.passwordProtect();
			system("cls");
			getPatientDatabase();
			break;

		}

		case 3:{
				A.passwordProtect();
			system("cls");
			getBedDatabase();
			break;
		}

		case 4:
			{
			return 0;
			break;
			}
		default:
			cout<<"\nCome on!Enter a valid option."<<endl;
	}

}
else if(choice1==2){
	return 0;
}
else
 cout<<"\nCome on!Enter a valid option."<<endl;

 }
