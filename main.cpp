#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include<string>
#include<windows.h>
#include<fstream>
#include<string>

using namespace std;

int pass,pos,pso,pro=0,CORRECT,temp,to,wer,der,se,sp,counter;
int ans,ans2,ans3;
int a,b,c,d,e,i,n,m,p,q,r,s,t,f,w=5;
string user,true1;

time_t  stime;
time_t  etime;

int random()
   {
     srand(time(0));
      pos=rand() % 10;
      wer=rand() % 10;
       cout<<pos;
       cout<<"*"<<wer;
    return wer*pos;
   }
int random0()
   {
     srand(time(0));
      sp=rand() % 10;
      se=rand() % 20;
       cout<<se;
       cout<<"*"<<sp;
     return s*pos;;
   }
int random1()
   {
     srand(time(0));
      pos=rand() % 10;
      cout<<pos;
     return pos;
   }

    void questions()
 {
   if(d==2){
     cout<<"WHICH TABLE TEST YOU WANT TO TAKE?\n";
     cin>>a;
     system("pause>null");
     system("Cls");
     for(int k=0;k<=10;k++){
              cout<<"\n"<<a;
              cout<<"*";
              random1();
              cout<<"=";
              cin>>pro;
              int ans=a*pos;
         if(pro==ans){CORRECT=1;}
         else{CORRECT=0;}

             switch(CORRECT)
             {
                   case 1:
                          cout<<"CORRECT\n";
                          b++;
                   break;
                   case 0:
                          cout<<"WRONG\n";
                          c++;
                   break;
             }

             system("pause>null");
             system("Cls");

             cout<<"\n";
        }
    }
}

    void coment()
    {
        if(d==2){
        cout<<"CORRECT=11/"<<b<<"\n";
        cout<<"  WRONG=11/"<<c<<"\n";
         if(c==0){cout<<"exellent !!!!";}
        else if(c<=4){cout<<"very good!!!";}
        else if(c<=8){cout<<"good!!";}
        else if(c<=9){cout<<"practice again!";}
        }
    }
  void questionsRand()
{
    if(d==3){
    system("Cls");
 for(int w=0;w<=10;w++)
    {
    ans2=random();
    system("Cls");
    cout<<"\n\n";
    random();
    cout<<"=";
    cin>>pro;

    if(pro==ans2){CORRECT=1;}
    else  {CORRECT=0;}
    switch(CORRECT)
    {
    case 1:
         cout<<"CORRECT\n";
         m++;
         break;
    case 0:
         cout<<"WRONG\n";
         n++;
         break;
        }

        system("pause>null");
        system("Cls");
        cout<<"\n";

    }
    }
}
 void coment3()
    {
        if(d==3){
        cout<<"CORRECT=11/"<<m<<"\n";
        cout<<"  WRONG=11/"<<n<<"\n";
        if(n==0){cout<<"exellent !!!!";}
        else if(n==1||n==3||n==2||n==4){cout<<"very good!!!";}
        else if(n==6||n==5||n==7||n==8){cout<<"good!!";}
        else if(n==9||n==11||n==10){cout<<"practice again!";}
        }
    }
void questionsRand2()
{
    if(d==4){
    system("Cls");
 for(int w=0;w<=10;w++)
    {
    ans3=random0();
    system("Cls");
    cout<<"\n\n";
    random0();
    cout<<"=";
    cin>>pro;

    if(pro==ans3){CORRECT=1;}
    else  {CORRECT=0;}
    switch(CORRECT)
    {
    case 1:
         cout<<"CORRECT\n";
         r++;
         break;
    case 0:
         cout<<"WRONG\n";
         s++;
         break;
        }

        system("pause>null");
        system("Cls");
        cout<<"\n";

    }
    }
}
 void coment1()
    {
        if(d==4){
        cout<<"CORRECT=11/"<<r<<"\n";
        cout<<"  WRONG=11/"<<s<<"\n";
        if(s==0){cout<<"exellent !!!!";}
        else if(s<=4){cout<<"very good!!!";}
        else if(s<=8){cout<<"good!!";}
        else if(s<=9){cout<<"practice again!";}
        }
    }



void main1()
{
    cout<<"\n LEARN TABLES(1)";
    cout<<"\n TEST (2)";
    cout<<"\n RANDOM TEST 1 to 10(3)";
    cout<<"\n RANDOM TEST 1 TO 20(4)";
    cout<<"\n TIME TEST(5)";
    cout<<"\n QUIT(6)";
    cin>>d;

    system("pause>null");
    system("Cls");
    switch(kbhit())
    {
        case 1:
            d++;
            break;
        case 2:
            d=d+2;
            break;
        case 3:
            d=d+3;
            break;
        case 4:
            d=d+4;
            break;
        case 5:
            d=d+5;
            break;
    }


    if(d==1)
    {
        cout<<"WHICH TABLE YOU WANT TO LEARN?\n";
        cin>>e;

        for(t=0;t<=10;t++){
        temp=e*t;
        cout<<e<<"*"<<t<<"="<<temp<<"\n";
      }
   }
}

void questions4()
 {
     if(d==5){
     cout<<"WHICH TABLE TEST YOU WANT TO TAKE?\n";
     cin>>a;
     system("pause>null");
     system("Cls");
     for(int k=0;k<=10;k++){
              cout<<"\n"<<a;
              cout<<"*";
              random1();
              cout<<"=";
     time(&stime);
              cin>>pro;
     time(&etime);

      int totaltime = etime-stime;
         int ans=a*pos;
         if(totaltime>w){
           CORRECT=2;
         }else{
         if(pro==ans){CORRECT=0;}
         else{CORRECT=1;}
         }

             switch(CORRECT)
             {
                   case 0:
                          cout<<"CORRECT\n";
                          b++;
                   break;
                   case 1:
                          cout<<"WRONG\n";
                          c++;
                   break;
                   case 2:
                          cout<<"TIME OUT!\n";
                          c++;
                   break;
             }

             system("pause>null");
             system("Cls");

             cout<<"\n";
        }
    }
}

    void coment4()
    {
        if(d==5){
        cout<<"CORRECT=11/"<<b<<"\n";
        cout<<"  WRONG=11/"<<c<<"\n";
         if(c==0){cout<<"exellent !!!!";}
        else if(c<=4){cout<<"very good!!!";}
        else if(c<=8){cout<<"good!!";}
        else if(c<=9){cout<<"practice again!";}
        }
    }


int main()
{
    ofstream sathwik ("user pass.txt");
    sathwik.open(user);
    sathwik.close();

    HANDLE h =GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
    cout<<"\t\t\t WELCOME \n\t\t\t   TO\n\t\t\t TABLES \n\t\t\t  APP\n";
    system("pause>null");
    system("Cls");
    cout<<"ENTER USERNAME\n";
    cin>>user;
    cout<<"ENTER PASSWORD\n";
    cin>>pass;
    if(user == "tables.com"||user=="TABLES.COM"){
    if(pass==1502){
    stdp:
    system("Cls");
    SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
    main1();

    if(d==2)
        {
        SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
        questions();
        coment();
        }
    if(d==3)
    {
    SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
    questionsRand();
    coment3();

    }
    if(d==4)
    {
    SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
    questionsRand2();
    coment1();
    }
    if(d==5)
    {
    SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
    questions4();
    coment4();
    }

    system("pause>null");

    if(d==6)
    {
        cout<<"DO YOU WANT TO EXIT?";
        cin>>true1;
    }
    if(true1=="yes")
    {
    return 0;
    }
     goto stdp;
    }
  }
}
