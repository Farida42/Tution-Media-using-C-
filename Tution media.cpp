#include<bits/stdc++.h>
using namespace std;

class media
{
    char name[20],father[20],mother[20],u[50],semester[10],depart[30],add[50],a[20],b[20],c[40],d[20],e[20],f[20],
    h[20],ad[20],p[20],q[20],g[20],i[20],j[20],k[20],m[20],n[20],w[20],qualification[20],qualification1[20],name1[20];
    string s,me,behaviour,study,sub,sub1;
    int sa;
public:
    void tuition_media();
    void teacher_registration();
    void gurdien_choice();
    void tuition();
    void teacher_qualification();
    void complain_box();
};
void media :: tuition_media()
{

    cout<<"\t\tWelcome to tuition media"<<endl;
    cout<<"\t\tIf you need any tuition ,\n First you have to registration on our group"<<endl;
}
void media ::teacher_registration()
{
    cout<<"    Tuition media"<<endl;
    cout<<"Are you looking for tuition!!"<<endl;
    cout<<"register in our group and find tuition according to your qualification"<<endl<<endl;
    cout<<"Fill up the Tuition media 's registration form"<<endl;
    cout<<"Teacher's name : ";
    cin.ignore();
    cin.getline(name,20);
    cout<<"Father's name : ";
    cin.ignore();
    cin.getline(father,20);
    cout<<"mother's name : ";
    cin.ignore();
    cin.getline(mother,20);
    cout<<"University : ";
    cin.ignore();
    cin.getline(u,20);
    cout<<"Department : ";
    cin.ignore();
    cin.getline(depart,30);
    cout<<"semester : ";
    cin.ignore();
    cin.getline(semester,10);
    cout<<"Address ::";
    cin.ignore();
    cout<<"Interested class on: ";
    cin.ignore();
    cin.getline(w,50);
    cin.getline(add,50);
    cout<<"teaching experience ::";
    cin>>c;
    cout<<"  your registration has been completed!!!";
}

void media :: tuition()
{
    cout<<"Dear "<<name<<endl;
    cout<<"According to you qualification and location,we have a tuition for you"<<endl;
    cout<<"Class 10 (Sub):"<<endl;
    cout<<"Days per week :4, salary: 5k"<<endl;
    cout<<add<<endl<<endl;
    cout<<"If you are intersted to do this tuition then contact us "<<endl;
}

void media :: gurdien_choice()
{
    cout<<"Which type of teacher you require for your child ?"<<endl<<endl;
    cout<<"student's name : ";
    cin.ignore();
    cin.getline(b,20);
    cout<<"Select Area:"<<endl;
    cin.ignore();
    cin.getline(d,20);
    cout<<"Select Class:"<<endl;
    cin.ignore();
    cin.getline(d,20);
    cout<<"Select class : ";
    cin.ignore();
    cin.getline(p,20);
    cout<<"Select subject : ";
    cin.ignore();
    cin.getline(c,40);
    cout<<"Student school/College : "<<endl;
    cin>>s;
    cout<<"Medium:";
    cin>>me;
    cout<<"Salary Range : ";
    cin>>sa;
    cout<<"Desired tutor Gender : ";
    cin.ignore();
    cin.getline(m,20);
    cout<<"Detail address : ";
    cin.ignore();
    cout<<"Mobile No: ";
    cin.ignore();
    cin.getline(n,20);
}
void media :: teacher_qualification()
{
    cout<<"Online Tution::";
    cout<<"Teacher name:";
    cin.ignore();
    cin.getline(name,20);
    cout<<"Teacher qualification:";
    cin.ignore();
    cin.getline(qualification,20);
    cout<<"Teaching:";
    cin>>sub;
    cout<<"Offline Tution::";
    cout<<"Teacher name:";
    cin.ignore();
    cin.getline(name1,20);
    cout<<"Teacher qualification:";
    cin.ignore();
    cin.getline(qualification1,20);
    cout<<"Teaching:";
    cin>>sub1;
}
void  media :: complain_box()
{
    cout<<"Teacher behaviour:";
    cin>>behaviour;
    cout<<"Teacher study:";
    cin>>study;
}
int main()
{
    int ch;
    char x;
    media obj;
    do
    {
        cout<<"\t\t................................................."<<endl;
        cout<<"\t\t\t\t| TUITION MEDIA |"<<endl;
        cout<<"\t\t................................................."<<endl;
        cout<<"n\t\t\t\tHOME SCREEN\n"<<endl;
        cout<<"\t\t\t1) visit our page"<<endl;
        cout<<"\t\t\t2) Teacher registration "<<endl;
        cout<<"\t\t\t3) Find tuition according to your qualification"<<endl;
        cout<<"\t\t\t4) Exit"<<endl;
        cout<<"\t\t\tSelect option from above"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<",,,,,,,,,,,,,,TUITION MEDIA,,,,,,,,,,,,,,,,,,,,,,,,"<<endl;
            obj.tuition_media();
            break;
        case 2:
            cout <<" ,,,,,,,,,,,,,,,,REGISTRATION FORM,,,,,,,,,,,,,,,,,,,"<<endl;
            obj.teacher_registration();
            break;
        case 3:
            cout <<"3)  Find tuition according to your qualification"<<endl;
            obj.tuition();
            break;
        case 4:
            if(ch==4)
            {
                exit(1);
            }
        default:
            cout<<"this is not exist try again"<<endl;
        }
        cout<<"If you want to select next option then press :: y"<<endl;
        cout<<"if you want to exit then press :: n"<<endl;
        cin>>x;

        if(x=='n'||x=='N')
            exit(0);

    }
    while(x=='y'||x=='Y');

    return 0;

}
