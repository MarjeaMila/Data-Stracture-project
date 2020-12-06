#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<unistd.h>

typedef struct voter_information
{
    char id [10];
    char name[20];
    char birth_date[15];
    char father_name[20];
    char mother_name[20];
    struct voter_information *next;
}node;

node*head;

int cunt1=0,cunt2=0,cunt3=0,cunt4=0,cunt5=0;


int main()
{
    system("cls");
    printf("\n\n\n");
    printf("\t                - - - - - -WELCOME TO ONLINE VOTING SYSTEM - - - - - -\n\n");

    printf("\t                    - - -************************************- - - \n\n\n\n\n\n");
    printf("          \t\t- - - - -Please enter 1 for logging vote Main Loges- - - - -\n\n\n\n");
    int B;
    scanf("%d",&B);
    if(B==1)
    {
        main_loges();
    }

    return 0;

}





void main_loges()
{
   system("cls");
    printf("\n\n\n\n\n");
    printf("           \t\t\t\t1.FOR VOTE ENTRY    - - - - -|||\n");
    Sleep(300);
    printf("           \t\t\t\t2.FOR ADMIN PANEL   - - - - -|||\n");
    Sleep(300);
    printf("           \t\t\t\t3.FOR WINNER        - - - - -|||\n");
    Sleep(300);
    printf("           \t\t\t\t4.FOR EXIT          - - - - -|||\n");
    printf("       \t- - - - -After Voter Entry You Can Give Your Vote Otherwise You Can Not- - - - - \n\n\n\n");
    Sleep(500);
    printf("         \t- - - - - - - -  - - - -So Please Enter (1)- - - - - - - - - - - -\n\n\n\n\n");

    int T;
    scanf("%d",&T);
    if(T==1)
    {
        voter_insert();

    }
    if(T==2)
    {
        admin();
    }
    if(T==3)
    {
        winner();

    }
    if(T==4)
    {
        exi();
    }
}

int cunt =0,count = 0,R=3;

void voter_insert()
{
    node *temp;
    char name[25],birth_date[15],f_name[25],m_name[25],id[10];
    system("cls");
    printf("\n\n\n\n");
    printf("\tIF NATIONAL ID,YOUR NAME, BIRTH DATE, YOUR FATHER NAME AND MOTHER NAME MATCH YOU CAN GIVE VOTE OTHERWISE NOT\n\n");
    Sleep(300);
    printf("\t\t\tIF YOU DO WRONG (%d) TIMES , THE PROGRAMME WILL BE STOP ATTOMATICLLY\n\n\n",R);
    Sleep(300);
    printf("\t\tPLEAES---,\n");
    Sleep(300);
    printf("\t\t\t\tENTER YOUR NATIONAL ID NUMBER");
    gets(id);
    gets(id);
    printf("\t\t\t\tENTER YOUR NAME");
    gets(name);
    printf("\t\t\t\tENTER YOUR BIRTH DATE");
    gets(birth_date);
    printf("\t\t\t\tENTER YOUR FATHER NAME");
    gets(f_name);
    printf("\t\t\t\tENTER YOUR MOTHER NAME");
    gets(m_name);
    temp=(node*)malloc(sizeof(node));
    strcpy(temp->id,id);
    strcpy(temp->name,name);
    strcpy(temp->birth_date,birth_date);
    strcpy(temp->father_name,f_name);
    strcpy(temp->mother_name,m_name);
    temp->next=NULL;
    head=temp;
    while(temp!=NULL)
    {
        if((strcmp(temp->id,"10000001")==0 && strcmp(temp->name,"Sheikh Hasina")==0 && strcmp(temp->birth_date,"09-05-1950")==0 &&strcmp(temp->father_name,"sheikh MoJibur")==0&&strcmp(temp->mother_name,"sheikh FOZILA")==0)||

        (strcmp(temp->id,"10000002")==0 && strcmp(temp->name,"monira ")==0 && strcmp(temp->birth_date,"15-08-1940")==0 && strcmp(temp->father_name,"dddio joy")==0 && strcmp(temp->mother_name,"Majomer")==0)||

        (strcmp(temp->id,"10000003")==0 && strcmp(temp->name,"Kelida Zia ")==0&& strcmp(temp->birth_date,"15-08-1945")==0 &&strcmp(temp->father_name,"Sajib ")==0&&strcmp(temp->mother_name,"Taiyaba")==0)||

        (strcmp(temp->id,"10000004")==0 && strcmp(temp->name,"mojnu khan  ")==0&&strcmp(temp->birth_date,"09-05-1951")==0 &&strcmp(temp->father_name,"Mahmud r")==0&&strcmp(temp->mother_name,"sheikh ")==0)||

        (strcmp(temp->id,"10000005")==0 && strcmp(temp->name,"Moida Sundori ")==0&&strcmp(temp->birth_date,"09-05-1952")==0 &&strcmp(temp->father_name," Nusratar")==0&&strcmp(temp->mother_name,"Sokina ")==0)||

        (strcmp(temp->id,"10000006")==0 && strcmp(temp->name,"Sakibur  ")==0&&strcmp(temp->birth_date,"09-05-1911")==0 &&strcmp(temp->father_name,"Razon ")==0&&strcmp(temp->mother_name,"Morjina ")==0)||

        (strcmp(temp->id,"10000007")==0 && strcmp(temp->name,"Anik  ")==0&&strcmp(temp->birth_date,"09-05-1951")==0 &&strcmp(temp->father_name,"Anik r")==0&&strcmp(temp->mother_name,"Fatema ")==0)||

        (strcmp(temp->id,"10000008")==0 && strcmp(temp->name,"Mila ")==0&&strcmp(temp->birth_date,"09-05-1952")==0 &&strcmp(temp->father_name,"Sakibk ")==0&&strcmp(temp->mother_name,"Nusrat ")==0)||

        (strcmp(temp->id,"10000009")==0 && strcmp(temp->name,"Nusrat  ")==0&&strcmp(temp->birth_date,"09-05-1953")==0 &&strcmp(temp->father_name,"Mahadi")==0&&strcmp(temp->mother_name,"MIM ")==0)||

        (strcmp(temp->id,"10000010")==0 && strcmp(temp->name,"Hosnaara  ")==0&&strcmp(temp->birth_date,"09-05-1954")==0 &&strcmp(temp->father_name,"pitbullaha ")==0&&strcmp(temp->mother_name,"Tazim ")==0)||

        (strcmp(temp->id,"10000011")==0 && strcmp(temp->name,"Pitbul")==0&&strcmp(temp->birth_date,"09-05-1955")==0 &&strcmp(temp->father_name,"Rajbir")==0&&strcmp(temp->mother_name,"Mila ")==0)||

        (strcmp(temp->id,"10000012")==0 && strcmp(temp->name,"Anarul  ")==0&&strcmp(temp->birth_date,"09-05-1956")==0 &&strcmp(temp->father_name,"Sagor ")==0&&strcmp(temp->mother_name,"Shama ")==0)||

        (strcmp(temp->id,"10000013")==0 && strcmp(temp->name,"Sazed  ")==0&&strcmp(temp->birth_date,"09-05-1957")==0 &&strcmp(temp->father_name,"Tazim ")==0&&strcmp(temp->mother_name,"Mitu ")==0)||

        (strcmp(temp->id,"10000014")==0 && strcmp(temp->name,"Piku  ")==0&&strcmp(temp->birth_date,"09-05-1958")==0 &&strcmp(temp->father_name,"Taz ")==0&&strcmp(temp->mother_name,"Meghla ")==0)||

        (strcmp(temp->id,"10000015")==0 && strcmp(temp->name,"Mazed ")==0&&strcmp(temp->birth_date,"09-05-1959")==0 &&strcmp(temp->father_name,"Ali ")==0&&strcmp(temp->mother_name,"Khelida ")==0)||

        (strcmp(temp->id,"10000016")==0 && strcmp(temp->name,"Sarmin  ")==0&&strcmp(temp->birth_date,"09-05-1955")==0 &&strcmp(temp->father_name,"Roktim r")==0&&strcmp(temp->mother_name,"Hasena")==0)||

        (strcmp(temp->id,"10000017")==0 && strcmp(temp->name,"Royal  ")==0&&strcmp(temp->birth_date,"09-05-1956")==0 &&strcmp(temp->father_name,"Ornob ")==0&&strcmp(temp->mother_name,"Jinnat ")==0)||

        (strcmp(temp->id,"10000018")==0 && strcmp(temp->name,"Naser  ")==0&&strcmp(temp->birth_date,"09-05-1953")==0 &&strcmp(temp->father_name,"sakil ")==0&&strcmp(temp->mother_name,"Jannat ")==0)||

        (strcmp(temp->id,"10000019")==0 && strcmp(temp->name,"Shadeda  ")==0&&strcmp(temp->birth_date,"09-05-1952")==0 &&strcmp(temp->father_name,"Abir ")==0&&strcmp(temp->mother_name,"Ferdose ")==0)||

        (strcmp(temp->id,"10000020")==0 && strcmp(temp->name,"Pintu  ")==0&&strcmp(temp->birth_date,"09-05-1958")==0 &&strcmp(temp->father_name,"pitu ")==0&&strcmp(temp->mother_name,"Bonna")==0)||

        (strcmp(temp->id,"10000021")==0 && strcmp(temp->name,"Robi ")==0&&strcmp(temp->birth_date,"09-05-1959")==0 &&strcmp(temp->father_name,"Rakibul r")==0&&strcmp(temp->mother_name,"Borna")==0)||

        (strcmp(temp->id,"10000022")==0 && strcmp(temp->name,"Airtel  ")==0&&strcmp(temp->birth_date,"09-05-1953")==0 &&strcmp(temp->father_name,"sakha")==0&&strcmp(temp->mother_name,"Proma ")==0)||

        (strcmp(temp->id,"10000023")==0 && strcmp(temp->name,"Bangllink  ")==0&&strcmp(temp->birth_date,"09-05-1950")==0 &&strcmp(temp->father_name,"Ridoy ")==0&&strcmp(temp->mother_name,"Quarel ")==0)||

        (strcmp(temp->id,"10000024")==0 && strcmp(temp->name,"Gramin  ")==0&&strcmp(temp->birth_date,"09-05-1958")==0 &&strcmp(temp->father_name,"Meghlar")==0&&strcmp(temp->mother_name,"Azisesa")==0)||

        (strcmp(temp->id,"10000025")==0 && strcmp(temp->name,"Sazed ")==0&&strcmp(temp->birth_date,"09-05-1959")==0 &&strcmp(temp->father_name,"Rod Mr")==0&&strcmp(temp->mother_name,"Faresa ")==0)||

        (strcmp(temp->id,"10000026")==0 && strcmp(temp->name,"Mirza  ")==0&&strcmp(temp->birth_date,"09-05-1960")==0 &&strcmp(temp->father_name,"Bristyr")==0&&strcmp(temp->mother_name,"Janura ")==0)||

        (strcmp(temp->id,"10000027")==0 && strcmp(temp->name,"Shanta  ")==0&&strcmp(temp->birth_date,"09-05-1970")==0 &&strcmp(temp->father_name,"Amir")==0&&strcmp(temp->mother_name,"Kaduja ")==0)||

        (strcmp(temp->id,"10000028")==0 && strcmp(temp->name,"Razon  ")==0&&strcmp(temp->birth_date,"09-05-1940")==0 &&strcmp(temp->father_name,"Sojib Mo")==0&&strcmp(temp->mother_name,"sanorita ")==0)||

        (strcmp(temp->id,"10000029")==0 && strcmp(temp->name,"Rohim Hasina ")==0&&strcmp(temp->birth_date,"09-05-1930")==0 &&strcmp(temp->father_name,"Raihanbur")==0&&strcmp(temp->mother_name,"Katrina")==0)||

        (strcmp(temp->id,"10000030")==0 && strcmp(temp->name,"Korim  ")==0&&strcmp(temp->birth_date,"09-05-1920")==0 &&strcmp(temp->father_name,"Galib Mr")==0&&strcmp(temp->mother_name,"Depeka ")==0)||

        (strcmp(temp->id,"10000031")==0 && strcmp(temp->name,"Hasan  ")==0&&strcmp(temp->birth_date,"09-05-1960")==0 &&strcmp(temp->father_name,"Tomal Molibu")==0&& strcmp(temp->mother_name,"maka")==0 )||

        (strcmp(temp->id,"10000032")==0 && strcmp(temp->name,"Hasam H ")==0&&strcmp(temp->birth_date,"09-05-1980")==0 &&strcmp(temp->father_name,"Mahmud Molibur")==0&&strcmp(temp->mother_name,"Neha ")==0)||

        (strcmp(temp->id,"10000033")==0 && strcmp(temp->name,"Bojoy ")==0&&strcmp(temp->birth_date,"09-05-1990")==0 &&strcmp(temp->father_name,"Mahbub ")==0&&strcmp(temp->mother_name,"Sudesna ")==0)||

        (strcmp(temp->id,"10000034")==0 && strcmp(temp->name,"Porajoy  ")==0&&strcmp(temp->birth_date,"09-05-1991")==0 &&strcmp(temp->father_name,"Tarul")==0&&strcmp(temp->mother_name,"Soshdi ")==0)||

        (strcmp(temp->id,"10000035")==0 && strcmp(temp->name,"Sabut  ")==0&&strcmp(temp->birth_date,"09-05-1992")==0 &&strcmp(temp->father_name,"Tazi Molibur")==0&&strcmp(temp->mother_name,"Sokhi ")==0)||

        (strcmp(temp->id,"10000036")==0 && strcmp(temp->name,"Iqbal  ")==0&&strcmp(temp->birth_date,"09-05-1993")==0 &&strcmp(temp->father_name,"Kaji r")==0&&strcmp(temp->mother_name,"Rakiba ")==0)||

        (strcmp(temp->id,"10000037")==0 && strcmp(temp->name,"Robiul  ")==0&&strcmp(temp->birth_date,"09-05-1994")==0 &&strcmp(temp->father_name,"Rokib ")==0&&strcmp(temp->mother_name,"Fariha ")==0)||

        (strcmp(temp->id,"10000038")==0 && strcmp(temp->name,"Sabut  ")==0&&strcmp(temp->birth_date,"09-05-1995")==0 &&strcmp(temp->father_name,"Sakif ")==0&&strcmp(temp->mother_name,"Sajna ")==0)||

        (strcmp(temp->id,"10000039")==0 && strcmp(temp->name,"Pranto   ")==0&&strcmp(temp->birth_date,"09-05-1996")==0 &&strcmp(temp->father_name,"Royal ")==0&&strcmp(temp->mother_name,"Najnin ")==0)||

        (strcmp(temp->id,"10000040")==0 && strcmp(temp->name,"Shama  ")==0&&strcmp(temp->birth_date,"09-05-1997")==0 &&strcmp(temp->father_name,"rkibullaha r")==0&&strcmp(temp->mother_name,"Rokibala ")==0)||

        (strcmp(temp->id,"10000041")==0 && strcmp(temp->name,"Mim  ")==0&&strcmp(temp->birth_date,"09-05-1998")==0 &&strcmp(temp->father_name,"Tahsam ")==0&&strcmp(temp->mother_name,"Barama ")==0)||

        (strcmp(temp->id,"10000042")==0 && strcmp(temp->name,"Milaba  ")==0&&strcmp(temp->birth_date,"09-05-1999")==0 &&strcmp(temp->father_name,"Methelar")==0&&strcmp(temp->mother_name,"Dajida ")==0)||

        (strcmp(temp->id,"10000043")==0&& strcmp(temp->name,"Mitu  ")==0&&strcmp(temp->birth_date,"09-05-1921")==0 &&strcmp(temp->father_name,"bahula")==0&&strcmp(temp->mother_name,"Tituni")==0)||

        (strcmp(temp->id,"10000044")==0 && strcmp(temp->name,"borsha ")  ==0&&strcmp(temp->birth_date,"09-05-1948")==0 &&strcmp(temp->father_name,"sakib ")==0&&strcmp(temp->mother_name,"runa ")==0)||

        (strcmp(temp->id,"10000045")==0 && strcmp(temp->name,"Bristy  ")==0&&strcmp(temp->birth_date,"09-05-1945")==0 &&strcmp(temp->father_name,"Azmain ")==0&&strcmp(temp->mother_name,"Mala ")==0)||

        (strcmp(temp->id,"10000046")==0 && strcmp(temp->name,"Badol  ")==0&&strcmp(temp->birth_date,"09-05-1974")==0 &&strcmp(temp->father_name,"Roky ")==0&&strcmp(temp->mother_name,"Mukta ")==0)||

        (strcmp(temp->id,"10000047")==0 && strcmp(temp->name,"Megh  ")==0&&strcmp(temp->birth_date,"09-05-1989")==0 &&strcmp(temp->father_name,"Sazedat ")==0&&strcmp(temp->mother_name,"Sona ")==0)||

        (strcmp(temp->id,"10000048")==0 && strcmp(temp->name,"Jannate ")==0&&strcmp(temp->birth_date,"09-05-1967")==0 &&strcmp(temp->father_name,"Penauma ")==0&&strcmp(temp->mother_name,"Moina ")==0)||

        (strcmp(temp->id,"10000049")==0 && strcmp(temp->name,"Moyure" )==0&& strcmp(temp->birth_date,"09-05-1985")==0 &&strcmp(temp->father_name,"Sokena")==0&&strcmp(temp->mother_name,"Rabihuna ")==0)||

        (strcmp(temp->id,"10000050")==0 && strcmp(temp->name,"Taiyaba")==0&& strcmp (temp->birth_date,"09-05-1977")==0 &&strcmp(temp->father_name,"Morjina")==0&&strcmp(temp->mother_name,"Rajibullaha")==0) )
            {
            cunt++;
            if(cunt>1)
            {
                not_again();
                break;
            }
            voting();
        }
        else
        {
            R--;
            count++;
            if(count==3)
            {
                stop();
                break;
            }
            printf("\n\n\n\n");
            printf("\t\tYOU'R VOTER ID OR DATE OF BORTH OR FATHER'S NAME IS WRONG\n\n");
            Sleep(300);
            printf("\t\t\t\tPlease Re Enter\n\n");
            Sleep(300);
            system("pause");
            main_loges();
        }

        temp=temp->next;


    }

}
void voting ()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t\t      **** List of the Candidates **** \n\n\n\n");
    Sleep(300);
    printf("\t\t\t     NAME -------------------------------  SYMBOL\n\n");
    Sleep(300);
    printf("\t\t\t  1 Sheik Hasina                  1. Boat\n");
    Sleep(300);
    printf("\t\t\t  2 Begum Khaleda Zia             2.Paddy\n");
    Sleep(300);
    printf("\t\t\t  3 Sojib Wozed Joy               3.Jackfruit\n");
    Sleep(300);
    printf("\t\t\t  4 Tarek Rahman                  4.Mango\n");
    Sleep(300);
    printf("\t\t\t  5 Arshed                        5. Langol\n");


    int j, B;

    printf("\t\t\t Please---\n");
    printf("\t\t\t Enter Your Choice ");

    for(j=1;j<=1;j++)
    {
        scanf("%d", &B);

        if(B==1)
        {
            cunt1++;

        }
        if(B==2)
        {
            cunt2++;
        }
        if(B==3)
        {
            cunt3++;
        }
        if(B==4)
        {
            cunt4++;
        }
        if(B==5)
        {
            cunt5++;
        }
        if(B!=1 && B!=2 && B!=3 && B!=4 && B!=5)
        {
            printf("\t\t\t Your vote is Lnvalid\n");

            main_loges();
        }
    }

    int R;
    system("cls");
    printf("\n\n\n\n");

    printf("\t\t\t If you want to see present Winner Enter one(1)or \n\n\n\t\t\t\t zero(0) For Main Loges\n\n\n");

    scanf("%d", &R);

    if(R==1)
    {
        winner();
    }
    if(R!=1)
    {
        main_loges();
    }

}

void admin()
{
    int B;

    printf("\n\n\n\n");
    printf("\t\t\tEnter Password To Unlock Admin Panel\n\n");
    scanf("%d",&B);

    if (B==10715)
    {
        show();
    }
    else
    {
        printf("wrong password\n");
    }
}




void show()
{
  system("cls");
    printf("\n\n\n\n");
    printf("\t\t\t How Many Votes Who Get\n\n\n");
    Sleep(500);
    printf("\t\t\t   Sheik Hasina got %d   Votes\n", cunt1);
    Sleep(500);
    printf("\t\t\t   Begum Khaleda Zia got %d   Votes\n", cunt2);
    Sleep(500);
    printf("\t\t\t   Sojib Wozed Joy got %d   Votes\n", cunt3);
    Sleep(500);
    printf("\t\t\t   Tarek Rahman got %d   Votes\n", cunt4);
    Sleep(500);
    printf("\t\t\t   Arshed got %d   Votes\n\n\n", cunt5);


    int R;

    printf("\t\t\t Enter One(1)For Main Loges OR \n\n\n\t\t\t\t zero(0) Roe Exit\n");

    scanf("%d", &R);
    if(R==1)
    {
        main_loges();
    }
    else
    {
        exi();
    }
}
void winner()
{
 system("cls");
    printf("\n\n\n\n\n");
    if(cunt2<cunt1 && cunt3<cunt1 && cunt4<cunt1 && cunt5<cunt1)
        printf("\t\t\tThe present winner person is Sheaik Hasina and she got %d votes\n\n\n\n\n\n ",cunt1);
    if(cunt1<cunt2 && cunt3<cunt2 && cunt4<cunt2 && cunt5<cunt2)
        printf("\t\t\tThe present winner person is Begum Khalade Zia and she got %d votes\n\n\n\n\n\n ",cunt2);
    if(cunt1<cunt3 && cunt2<cunt3 && cunt4<cunt3 && cunt5<cunt3)
        printf("\t\t\tThe present winner person is Sojib Wozed Joy and he got %d votes\n\n\n\n\n\n ",cunt3);
    if(cunt1<cunt4 && cunt2<cunt4 && cunt3<cunt4 && cunt5<cunt4)
        printf("\t\t\tThe present winner person is Tarek Rahman and he got %d votes\n\n\n\n\n\n ",cunt4);
    if(cunt1<cunt5 && cunt2<cunt5 && cunt3<cunt5 && cunt4<cunt5)
        printf("\t\t\tThe present winner person is Arshed and he got %d votes\n\n\n\n\n\n ",cunt5);

        int T;
        printf("\t\t\t\t Enter (1) For Main Loges OR \n\n\t\t\t\t\t Zero(0) For Exit\n");
        scanf("%d",&T);
        if(T==1)
        {
            main_loges();
        }
        if(T!=1)
        {
            exi();
        }

}


void stop()
{
   system("cls");
    printf("\n\n\n");
    printf("\t - - - - - - - (:- SORRY YOU CAN NOT GIVE YOUR VOTE FOR WRONG ENTRY THREE (3) TIMES -:)- - - - - - - \n\n\n");

    printf("\t\t\t\t * * * * *  ~ ~ ~ ~ ~ THANK YOU * * * * * ~ ~ ~ ~ ~\n\n");


}
void not_again ()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t- - - - - - - - - - -YOU HAVE GIVE YOUR VOTE SUCCESSFULLY- - - - - - -- - - - -\n\n\n\n");
    Sleep(300);
    printf("         \t\t- - - - - -SO, YOU CAN NOT GIVE MORE THAN ONE TIME- - - - -\n\n\n\n");
    Sleep(300);
    printf("\t\t   If You want to See Present Winner Enter (1) OR \n\t\t\t\t\t (2) For main loges\n ");
    Sleep(300);
    printf("\t\t\t\t  (0) For Exit \n\n");
    scanf("%d",&R);
    if(R==1)
    {
        winner();
    }
     if(R==2)
     {
         main_loges();
     }
      if((R!=1) || (R!=2))
      {
          exi();
      }
}

void exi()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t- - - - - - - - - - -@ YOU HAVE GIVE YOUR VOTE SUCCESSFULLY @- - - - - - -- - - - -\n\n\n\n");
    Sleep(500);
    printf("\t\t\t\t\t* * * * * ~ THANK YOU ~ * * * * * \n\n\n");
    Sleep(500);
}



