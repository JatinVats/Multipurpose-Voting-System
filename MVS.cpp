//pass:jatinvats

#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    int NumCan,isfound,i,j,NumStu,VoteFor[10],Vote,max;
    char CanName[10][1000],id[100][1000],ch;
    char pass[50];
    cout<<endl<<"                    Multipurpose Voting System / CR Election System                   "<< endl;
    cout<<"                     _________________________________________                   "<< endl;
    cout<<endl<<"                        :::::::::: DRONACHARYA COLLEGE OF ENGINEERING ::::::::::" << endl;
    cout<<endl<<"+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl<< "    Number of Candidates: ";
    cin>>NumCan;
    if(NumCan>1)
    {
        for(i=1; i<=NumCan; i++)
        {
            cout<<"    Candidate-"<<i<<" Name: ";
            cin>>CanName[i];
            VoteFor[i]=0;
        }
        cout<< "    Number of Students: ";
        cin>>NumStu;
        cout <<endl<< "  Thank You ! we are going to start our election with " <<NumStu<<" Students and "<<NumCan<<" Candidates."<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                            Enter The Password: ";
        cin>>pass;
        while(strcmp(pass,"mypass")!=0)
        {
          cout<< endl;
              cout<<endl<<"                            Wrong Password! ."<<endl;
              cout<<endl;
              cout<<"                       Enter The Correct Password: ";
          cin>>pass;
          cout<<endl;
        }
        system("CLS");
        for(i=1; i<=NumStu; i++)
            {
                cout<<endl<<"                    Multipurpose Voting System / CR Election System                   "<< endl;
                cout<<"                     _________________________________________                   "<< endl;
                cout<<endl<<"                        :::::::::: VOTING ::::::::::" << endl;
                cout<<endl<<"                                   Student - "<<i<<endl;
                cout<<endl<<"+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+"<<endl;
                cout<<endl;
                cout<<endl;
                FILE *filepointer;
                char datatoberead[50];
                filepointer = fopen("ID.txt","r");
                char inputid[50];
                cout<<endl<<"                             Enter Your Roll Number: ";
                cin >> inputid;
                strcat(inputid,"\n");
                int c=0;
                while(fgets(datatoberead,50,filepointer)!=NULL)
                {
                    c++;
                    if(strcmp(inputid,datatoberead)==0)
                    {
                        cout << "                                    Data " << endl;
                        FILE *filepointer2;
                        char datatoberead2[50];
                        filepointer2 = fopen("Name.txt","r");
                        int d=0;
                        while(fgets(datatoberead2,50,filepointer2)!=NULL)
                        {
                            d++;
                            if(c==d)
                            {
                                cout<<endl<<endl<<"    Name: "<<datatoberead2<<endl;
                                cout<<"    Roll Number "<<inputid<<endl;
                            }

                        }
                        fclose(filepointer2);
                        fclose(filepointer);
                        break;
                    }
                   
                }
                cout<<endl<<"                 +_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_"<<endl;
                cout<<endl;
                cout<<endl;

                for(j=1; j<=NumCan; j++)
                {
                    cout<<"                              Press "<<j<<" For "<<CanName[j]<<endl;
                }
                cout<<endl;
                cout<<endl<<"                 +_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_"<<endl;
                cout<<endl<<"   Please Put Your Vote: ";
                ch=getch();
                Vote=ch-48;
                cout<<"(Hidden)";
                //cin>>Vote;

                FILE *filepointer3;
                char datatobewrite[50];
                strcpy(datatobewrite,inputid);
                filepointer3 = fopen("VoteDoneBy.txt","a");
                if ( strlen (  datatobewrite  ) > 0 )
                {
                    fputs(datatobewrite, filepointer3) ;
                }

                fclose(filepointer3) ;

                FILE *filepointer4;
                char datatobewrite2[50];
                strcpy(datatobewrite2,inputid);
                strcat(datatobewrite2,CanName[Vote]);
                strcat(datatobewrite2,"\n");
                filepointer4 = fopen("VoteDetails.txt","a");
                if ( strlen (  datatobewrite2  ) > 0 )
                {
                    fputs(datatobewrite2, filepointer4) ;
                }

                fclose(filepointer4) ;

                for(j=1; j<=NumCan; j++)
                {
                    if(Vote==j)
                    {
                        VoteFor[j]++;
                        break;
                    }
                }
                cout<<endl;
                cout<<endl;
                cout<<endl<<"                  Thanks"<<id[i]<<" For Your Vote.(Press Enter for Next)"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+"<<endl;
                getch();
                system("CLS");
            }
            system("CLS");
            cout<<endl<<"                    Multipurpose Voting System / CR Election System                   "<< endl;
            cout<<"                     _________________________________________                   "<< endl;
            cout<<endl<<"                        :::::::::: RESULT  ::::::::::" << endl;
            cout<<endl<<"+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                            Enter The Password: ";
            cin>>pass;
            while(strcmp(pass,"jatin")!=0)
            {
              cout<< endl;
              cout<<endl<<"                            Wrong Password! Try Again."<<endl;
              cout<<endl;
              cout<<"                       Enter The Correct Password: ";
              cin>>pass;
              cout<<endl;
            }
            cout<<endl;
            cout<<endl;
            cout<<endl<<"                 +_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_"<<endl;
            cout<<endl;
            cout<<endl;
            for(j=1; j<=NumCan; j++)
            {
                cout<<"                              "<<CanName[j]<<" Get "<<VoteFor[j]<<" Vote."<<endl;
            }
            cout<<endl;
            cout<<endl;
            cout<<endl<<"                 +_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_"<<endl;
            max=0;
            for(j=1; j<=NumCan; j++)
            {
                if(max<VoteFor[j])
                {
                    max=VoteFor[j];
                }
            }
            for(j=1; j<=NumCan; j++)
            {
                if(max==VoteFor[j])
                {
                    cout<<endl;
                    cout<<endl<<"           Congratulations "<<CanName[j]<<". You are Elected ."<< endl;
                    break;
                }
            }
            cout<<endl;
            cout<<endl;
            cout<<"+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+"<<endl;
        }
    else
    {
        cout<<endl<<"Sorry! CandidateS must be more than one person."<<endl;
    }
    getch();
}


