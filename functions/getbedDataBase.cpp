void getBedDatabase(){
int choice_bed;
	cout<<"\n                         "<<"WELCOME TO BED DATABASE"<<endl<<endl;
	cout<<"			"<<"1.Check Bed Status"<<endl;
	cout<<"			"<<"2.Exit"<<endl<<endl;
		cout<<right<<setw(80)<<setfill('-')<<"----------"<<endl;

	cout<<right<<setw(60)<<setfill(' ')<<"\nEnter the number corresponding to your choice:"<<endl<<endl;
	cin>>choice_bed;
	system("cls");
	switch(choice_bed)
	{
		case 1:{
		    getStatus();
			break;
		}
		case 2:{
			exit(0);
			break;
		}
	}
}
