#include<iostream.h>
#include<conio.h>

  char square[10]={'0','1','2','3','4','5','6','7','8','9'};
  int checkwin();
  int date,year;
  int month;
  void board();


  void main()
  {
  int n,y ;
  do{
  clrscr();
  cout<<"\n *********************** PRES 1 FOR TICTACTOE*************************** \n************************ PRESS 2 FOR ZODIAC************************ \n\t\nenter your choice:";
  cin>>n ;

  switch(n)
  {
  case 1:
      int player=1,i,choice;
      char mark;
      clrscr();
      do
      {
	board();
	player=(player%2)?1:2;

	cout<<"player"<<player<<"\t enter the number:";
	cin>>choice;

	mark=(player==1) ?'X' : 'O';

	if(choice == 1 &&  square[1] == '1')
	     {
	       square[1]=mark;
	      }
	   else if(choice==2 && square[2]=='2')
	     {
	      square[2]=mark;
	      }
	   else if(choice==3 && square[3]=='3')
	     {
	      square[3]=mark;
	      }
	   else if(choice==4 && square[4]=='4')
	     {
	      square[4]=mark;
	      }
	   else if(choice==5 && square[5]=='5')
	     {
	      square[5]=mark;
	      }
	   else if(choice==6 && square[6]=='6')
	     {
	      square[6]=mark;
	      }
	   else if(choice==7 && square[7]=='7')
	     {
	      square[7]=mark;
	      }
	  else if(choice==8 && square[8]=='8')
	     {
	      square[8]=mark;
	      }
	  else if(choice==9 && square[9]=='9')
	     {
	      square[9]=mark;
	      }
	  else
	  {
	    cout<<"\ninvalid move ";
	    player--;
	    getch();
	   }

	   i=checkwin();
	   player++;
       }  while(i==-1);
       board();
       if(i==1)
	{
	 cout<<"Player"<<player<<"\t"<<"win";
	}
	else
	{
	  cout<<"Game Draw";
	}
    break;
  case 2:

   cout<<"enter your birth date:";
   cin>>date;
   cout<<"enter your birth month:";
   cin>>month;
   cout<<"enter your birth year:";
   cin>>year;

   if((date>=20) && (month==3) ||  (date<=18) && (month==4))
   {
     cout<<"\n your ZODIAC sign :  ARIES"<<endl<<"congrulations you have dynamically amzaing sign "<<endl<<"you have bright point of view";
   }
  else if((date>=19) && (month==4)  || (date<=19) && (month==5))
   {
     cout<<"\n your ZODIAC sign :  TAURUS"<<endl<<"congrulations you have dynamically amzaing sign "<<endl<<"you can do  great leadership";
    }
  else if((date>=20) && (month==5)  || (date<=20) && (month==6))
   {
     cout<<"\n your ZODIAC sign :  GEMINI"<<endl<<"congrulations you have dynamically amzaing sign "<<endl<<"as onion you have 7 layers of yourself";
    }
   else if((date>=21) && (month==6)  || (date<=21) && (month==7))
   {
     cout<<"\n your ZODIAC sign :  CANCER"<<endl<<"congrulations you have dynamically amzaing sign "<<endl<<"you have innovative idea";
    }
    else if((date>=22) && (month==7)  || (date<=21) && (month==8))
   {
     cout<<"\n your ZODIAC sign :  LEO"<<endl<<"congrulations you have dynamically amzaing sign "<<endl<<"you are resticted but utlimatly you achieve your dream";
    }
    else if((date>=22) && (month==8)  || (date<=21) && (month==9))
   {
     cout<<"\n your ZODIAC sign :  VIRGO"<<endl<<"congrulations you have dynamically amzaing sign "<<endl<<"YOU BELIEVE IN ACTION,RATHER THAN WORDS";
    }
    else if((date>=22) && (month==9)  || (date<=22) && (month==10))
   {
     cout<<"\n your ZODIAC sign :  LIBRA"<<endl<<"congrulations you have dynamically amzaing sign "<<endl<<"by your motivaiton skills you can change perosn life";
    }
     else if((date>=23) && (month==10)  || (date<=20) && (month==11))
   {
     cout<<"\n your ZODIAC sign :  SCORPIO"<<endl<<"congrulations you have dynamically amzaing sign "<<endl<<"you are great in sports";
    }
     else if((date>=21) && (month==11)  || (date<=20) && (month==12))
   {
     cout<<"\n your ZODIAC sign :  SAGITTARIUS"<<endl<<"congrulations you have dynamically amzaing sign "<<endl<<"By god graces you have beautiful voice";
    }
     else if((date>=21) && (month==12)  || (date<=19) && (month==1))
   {
     cout<<"\n your ZODIAC sign :  CAPRICORN"<<endl<<"congrulations you have dynamically amzaing sign "<<endl<<"you can achieve a great success in business";
    }
     else if((date>=20) && (month==1)  || (date<=18) && (month==2))
   {
     cout<<"\n your ZODIAC sign :  AQUARIUS"<<endl<<"congrulations you have dynamically amzaing sign "<<endl<<"you are good speaker";
    }
     else if ((date>=19) && (month==2)  || (date<=19) && (month==3))
   {
     cout<<"\n your ZODIAC sign :  PISCES"<<endl<<"congrulations you have dynamically amzaing sign "<<endl<<"You can serve the nation";
    }
  getch();
  break;
default:  cout<<"\n wrong choice";
  }
	 cout<<"\n\n\t do you want to contiue?(yes =1 / no = 0) : ";
	 cin>>y;
	 }
	 while(y==1);
getch();
}

   void board()
     {
       clrscr();
       cout<<"\n\n\t************************ TIC TAC TOE *******************************\n\n";
       cout<<"player 1 (X)  &&  player 2 (O)"<<endl<<endl;
       cout<<endl;
       cout<<"  "<<square[1]<<" | "<<square[2]<<" | "<<square[3]<<endl;
       cout<<" ___ ___ ___"<<endl;
       cout<<"  "<<square[4]<<" | "<<square[5]<<" | "<<square[6]<<endl;
       cout<<" ___ ___ ___"<<endl;
       cout<<"  "<<square[7]<<" | "<<square[8]<<" | "<<square[9]<<endl;
   }

       int checkwin()
     {
      if(square[1]==square[2] && square[2]==square[3])
	    {
		return 1;
	    }
	 else if(square[4]==square[5] && square[5]==square[6])
	  {
		return 1;
	  }
	 else if(square[7]==square[8] && square[8]==square[9])
	  {
		return 1;
	  }
	  else if(square[1]==square[4] && square[4]==square[7])
	  {
		return 1;
	  }
	   else if(square[2]==square[5] && square[5]==square[8])
	  {
		return 1;
	  }
	   else if(square[3]==square[6] && square[6]==square[9])
	  {
		return 1;
	  }
	    else if(square[1]==square[5] && square[5]==square[9])
	  {
		return 1;
	  }
	   else if(square[3]==square[5] && square[5]==square[7])
	  {
		return 1;
	  }
	  else if(square[1]!='1' && square[2]!='2' &&  square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9' )
	  {
		return 0;
	  }
	  else
	  {
	    return -1;
	  }
     }
