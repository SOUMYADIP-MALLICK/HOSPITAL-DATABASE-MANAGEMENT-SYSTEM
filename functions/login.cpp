int login(){
  string pass ="";
  char ch;
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  SDM HOSPITAL \n\n";
  cout<<"\t\t\t\t\t\t\t\t------------------------------";
  cout<<"\n\t\t\t\t\t\t\t\t\t     LOGIN \n";
  cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
  cout << "\t\t\t\t\t\t\t\tEnter the default Password: ";
  ch = _getch();
  while(ch != 13){//character 13 is enter
     pass.push_back(ch);
     cout << '*';
     ch = _getch();
  }
   if(pass == "password"){
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
       window();
   }
   else{
      cout << "\n\n\t\t\t\t\t\t\t\tForgot Password...\n\t\t\t\t\t\t\t\tDo you want to recover it?\n\n";
      cout << "\n\n\t\t\t\t\t\t\t\t1.yes...\n\t\t\t\t\t\t\t\t2.no?\n\n";
      int choice2;
      cin>>choice2;
      if(choice2==1)
      {
        system("cls");
        password A;
        A.getPassword();
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
           cout<<"\nEnter a valid option."<<endl;
       }

     }
     else if(choice1==2){
       return 0;
     }
     else
      cout<<"\nEnter a valid option."<<endl;

      }
      else {
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
    }
   }
}
