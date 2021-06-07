#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>
//#include <stdlib>
#include<cstdlib> 
#include<ctime> 
#include<cstdlib>

void Pass_Generator ();
void Pass_Strenth ();
void Sign_in ();
void Reset_Pass ();
char GenRand();
using namespace std;

int main()
{
	char choice;
	do{
		cout << "***************************\n";	
		cout << "******** Main Menu ********\n";	
		cout << "***************************\n";
		cout << "*    1- Pass Generator    *\n";
		cout << "*    2- Pass Strenth      *\n";
		cout << "*    3- Sign in / Sign up *\n";
		cout << "*    4- Reset Pass        *\n";
		cout << "*    5- Exit              *\n";
		cout << "***************************\n";
		cout << "Enter your choice and press return: ";
	
		choice = getch();
	
		if (choice == '1'){
			Pass_Generator ();
		}
		
		else if (choice == '2'){
			Pass_Strenth ();
		}
		
		else if (choice == '3'){
			Sign_in ();
		}
		
		else if (choice == '4'){
			Reset_Pass ();
		}
		
		else 
		cout << "Something Went Wrong!!\nPlease Try Againe.";	
		
		getch() ;
		system("cls") ;
		
	} while ( choice != '5' );
	getch() ;
	return 0 ;
	
}


void Pass_Generator ()
{
	system("cls");
	cout << "Pass Generator\n";
/*This is a simple C++ program that generates a random password*/
/*I have recently modified this code to ensure atleast one number and one special character is included in the password*/
	static const char alphnum[]="0123456789" "!@#$%^&*" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz"; 
	int strLen=sizeof(alphnum)-1; 
	char GenRand()
	{
	 return alphnum[rand()%strLen]; 
	} 
	 int main() 
	 { 
	  int n,c=0,s=0;
	  srand(time(0));
	  cout<<"Enter the length of the password required: ";
	  cin>>n;
	  cout<<n<<endl;
	  cout<<"Your Password is:";
	  N:
	  char C;
	  string D;
	  for(int z=0; z < n; z++) 
	   { 
	     C=GenRand();
	     D+=C;
	     if(isdigit(C))
	     {
	         c++;
	     }
	    if(C=='!' || C=='@' || C=='$' || C=='%' ||  C=='^' || C=='&'|| C=='*'|| C=='#')
	    {
	        s++;
	    }
	   }
	   if(n>2 && (s==0 || c==0))
	   {
	      goto N; 
	   }
	   cout<<D; 
	   cout<<endl<<endl<<"\n**You Will be Safe And Secure With This Password**";
	   cout<<endl<<endl<<"****************** Enjoy It ;) *******************";
	   return 0; 
	}
}

break;


void Reset_Pass ()
{
	system("cls");
// Created by A.o
/* This code was written to simulate the process you go through when you forgot your password and are trying to reset it. */

/* The first part verifies your identity (to check if the person trying to change the password is the owner of the account). The user can choose to do this by receiving a text message with a security code (scenario 1). The user can also choose to answer the security questions (scenario 2). */ 

/* If the user's identity is verified, the user is then asked to enter a new password twice. */

    /* NOTE: The program is made for a fictional         person (John Doe). Since the person trying to reset his/her password usually already has a security profile (i.e. security questions and answers have been pre-determined), this program is written to simulate that. This means the program will only run completely if the right answers are entered (provided in the next comment; you can either ignore the answers or part of the answers and see what happens if you enter the wrong input or you can enter the answers below and see what happens if the program runs succesfully). */
    
    /* SPOILER (lol): Correct user input 
       - scenario 1:
          y
          6849
          *password of your choice
          *repeat password of your choice
       - scenario 2:
          n
          Fluffy
          Sunshine Drive
          The Hitchhiker's Guide to the Galaxy
          *password of your choice
          *repeat password of your choice */

	int main() 
	{
	    cout << "First we need to verify your identity." << endl << endl;
	            
	    cout << "We can send a one-time code to the phone number you provided." << endl;
	           
	    cout << "Would you like to reset password this way?" << endl << "Enter 'y' for yes or 'n' for no." << endl << endl;
	
	    char TextMessage;        // either 'y' or 'n'
	    cin >> TextMessage;
	        
	    if (TextMessage == 'y')
	        // ID verification through text message
	    {
	        cout << "You have selected 'yes'." << endl << endl;
	        
	        int SecureCode = 6849;
	        
	            /* I wanted to insert a function to generate a random 4 digit number to simulate the random code the user would receive, but unfortunately I don't know how to do that yet. For simplicity sake, I used an external random generator and just used that number as the value */ 
	        
	        cout << "Please enter the code you received." << endl << endl;
	        
	        int UserCode; 
	        cin >> UserCode;
	            
	        for (int attempts = 3; attempts > 0; --attempts)
	        {
	            if (UserCode == SecureCode)
	            {
	                cout << "Identity verified." << endl << endl;
	                
	                cout << "Please enter new password." << endl << "Password cannot contain spaces." << endl << endl;
	                    
	                 string password1;
	                 cin >> password1;
	                    
	                 cout << "Please enter new password again." << endl << endl;
	                    
	                 string password2;
	                 cin >> password2;
	                 
	                 for (int attempts2 = 2; attempts2 > 0; --attempts2)
	                 {
	                    if (password1 == password2 )
	                    {
	                        cout << "Password successfully reset." << endl;
	                        break;
	                       
	                    }
	                    else
	                    {
	                        cout << "Error: Passwords don't match." << endl << "Please try again." << endl << endl << "Number of attempts remaining: " << attempts2 << endl << endl;
	                    }
	                                        
	                }
	                    
	                if (password1 != password2)
	                {
	                    cout << "Unable to reset password at this time." << endl << "Please try again later." << endl;
	                }   
	                
	                break;
	            }
	        
	            else 
	            { 
	                cout << "Error: The codes don't match." << endl << "Please try again." << endl << endl;
	                
	                cout << "Number of attempts remaining: " << attempts << endl << endl;
	            }
	        }  
	        
	        if (UserCode != SecureCode)
	        {
	            cout << "Limit of attempts reached." << endl << "Unable to verify identity at this time." << endl << "Please try again later. " << endl; 
	        }
	        
	    }
	    
	    if (TextMessage == 'n')
	    {
	        cout << "You have selected 'no'." << endl << endl;
	        
	        cout << "Please answer the following security questions to verify your identity." << endl << endl; 
	        
	        cout << "What was the name of your first pet?" << endl;
	        
	        string answer1 = "Fluffy";
	            // random fictional answer
	            
	        string answer1U;
	            // User's answer
	        
	        cin >> answer1U;
	        cin.ignore (1000, '\n');
	        
	        cout << "Your answer: " << answer1U << endl << endl;
	        
	        cout << "What was the name of the street you grew up on?" << endl;
	        
	        string answer2 = "Sunshine Drive";
	            // Random fictional answer
	            
	        string answer2U;
	        
	        getline (cin, answer2U);
	            // getline () can insert an entire string while cin will stop when a space is detected
	        
	        cout << "Your answer: " << answer2U << endl << endl;
	        
	        cout << "What is the name of your favorite book?" << endl;
	        
	        string answer3 = "The Hitchhiker's Guide to the Galaxy";
	        
	        string answer3U;
	        
	        getline (cin, answer3U);
	        
	        cout << "Your answer: " << answer3U << endl << endl;
	        
	        for (int tries = 2; tries > 0; --tries)
	        {
	            if (answer1U == answer1 && answer2U == answer2 && answer3U == answer3)
	            {
	                cout << "Identity verified." << endl << endl;
	                
	                cout << "Please enter new password." << endl << "Password cannot contain spaces." << endl << endl;
	                
	                string password1N;
	                   
	                cin >> password1N;
	                   
	                cout << "Please enter new password again." << endl << endl;
	                   
	                string password2N;
	                   
	                cin >> password2N;
	                   
	                for (int tries2 = 2; tries2 > 0; --tries2)
	                { 
	                    if (password1N == password2N)
	                    {
	                       cout << "Password successfully reset." << endl;
	                       break;
		                    }
   	                
 	                   else
 	                   {
	                       cout << "Error: Passwords don't match." << endl << "Please try again." << endl << endl << "Number of attempts remaining: " << tries2 << endl << endl;
	                    }
	                    
	                }
	                
	                if (password1N != password2N )
    	            {
    	                cout << "Unable to reset password at this time." << endl << "Please try again later." << endl;
    	            } 
    	            
    	            break;    
                   
	            }
	            
	            else
	            {
	                cout << "Error: one or more of the answers given do not match." << endl << "Please try again." << endl << endl;
	                
	                cout << "Number of attempts remaining: " << tries << endl << endl;
	            }
	        }
	        
	        if ((answer1U != answer1) && (answer2U != answer2) && (answer3U != answer3))
	        {
	            cout << "Limit of attempts reached." << endl << "Unable to verify identity at this time." << endl << "Please try again later." << endl;
	        }
	        
	    } 
	    
	    if (TextMessage != 'y' && TextMessage != 'n')
	    {
	        cout << "Error: Input not recognized." << endl; 
	    }
	                
	    return 0;        
	            
	}
}
break;


cout << "End of Program.\n";
PassOn = false;
break;

default:
cout << "Not a Valid Choice. \n";
cout << "Choose again.\n";
getch() ;
system("cls") ;
break;
}

}while (choice ==5);
return 0;
system("pause");

