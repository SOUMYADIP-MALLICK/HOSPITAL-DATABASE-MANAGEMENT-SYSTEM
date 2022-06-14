void getDoctorDatabase(){
	int choice_doc;
	cout<<"\n                         " <<"WELCOME TO DOCTOR'S DATABASE"<<endl<<endl;
	cout<<"			"<<"1.Add New Doctor's Information"<<endl;
	cout<<"			"<<"2.Edit a Doctor's Information"<<endl;
	cout<<"			"<<"3.Display a Doctor's Information"<<endl;
	cout<<"			"<<"4.Delete a Doctor's Information"<<endl;
	cout<<"			"<<"5.Display Entire Doctor Database"<<endl;
	cout<<"			"<<"6.Total Number of Doctors"<<endl;
	cout<<"			"<<"7.Exit"<<endl;
	cout<<right<<setw(80)<<setfill('-')<<"----------"<<endl;

	cout<<right<<setw(60)<<setfill(' ')<<"\nEnter the number corresponding to your choice:"<<endl<<endl;
	cin>>choice_doc;
	system("cls");
	switch(choice_doc){
		case 1:{
		    addDoc();
			break;
		}
		case 2:{
			doctor k;
			editDoc(k);
			break;
		}
		case 3:{
			displayDoc();
			break;
		}
		case 4:{
			deleteDoc();
			break;
		}
		case 5:{
			dispDatabase();
			break;
		}
		case 6:{
			numberofDocs();
			break;
		}

		case 7:{
			exit(0);
			break;
		}

	}
}
