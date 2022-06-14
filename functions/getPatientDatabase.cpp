void	getPatientDatabase(){
	int choice_pat;
	cout<<"\n                         "<<"WELCOME TO PATIENT'S DATABASE"<<endl<<endl;
	cout<<"			"<<"1.Add New Patient's Information"<<endl;
	cout<<"			"<<"2.Edit a Patient's Information"<<endl;
	cout<<"			"<<"3.Display a Patient's Information"<<endl;
	cout<<"			"<<"4.Delete a Patient's Information"<<endl;
	cout<<"			"<<"5.Display Entire Patient Database"<<endl;
	cout<<"			"<<"6.Total Number of Patients"<<endl;
	cout<<"			"<<"7.Check for doctor availability"<<endl;
	cout<<"			"<<"8.Exit"<<endl;
	cout<<right<<setw(80)<<setfill('-')<<"----------"<<endl;

	cout<<right<<setw(60)<<setfill(' ')<<"\nEnter the number corresponding to your choice:"<<endl<<endl;
	cin>>choice_pat;
	system("cls");
	switch(choice_pat){
		case 1:{
		    addPat();
			break;
		}
		case 2:{
			patient p;
			editPat(p);
			break;
		}
		case 3:{
		    patient p;
			displayPat(p);
			break;
		}
		case 4:{
		    patient p;
			deletePat(p);
			break;
		}
		case 5:{
			dispPatDatabase();
			break;
		}
		case 6:{
			numberofPats();
			break;
		}
		case 7:{
			getDoctor();
			break;
		}
		case 8:{
			exit(0);
			break;
		}

	}
}
