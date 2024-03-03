#include<iostream>
#include<fstream>
using namespace std;
class student
{
    int roll;
    char name[25];
    public: void read_data()
    {
        cout<<"enter the name and roll";
        cin>>name>>roll;
    }
    void show_data()
    {
        cout<<"name and roll are"<<name<<roll;
    }
};
void write2file()
{
    student stu;
    ofstream outfile("record.data",ios::binary/ios::app);
    stu.read_data();
    outfile.write(reinterpret_cast<char*>(&stu),sizeof(stu));
}
void readfromfile()
{
    student stu;
    
        cout<<"data read from a file are";
        ifsteram infile("record.dat",ios::binary);
        while(!infile.eof())
        {
            if(infile.read(reinterpret_cast<*char>(&stu),sizeof(stu))>0)
            stu.show_data();
        }
    
}
 int main()
 {
    int choice;
    cout<<"select one option bellow";
    cout<<"\n 1 for writing to file";
    cout<<"\n 2 for readin a file";
    cout<<"\n 3 for exit from file";
    while(true)
    {
        cout<<"enter your choice";
        switch(choice)
        {
            case 1: write2file();
            break ;
            case 2: readfromfile();
            break;
            case 3: exit(0);
            break;   
            defult:cout<<"\n wrong choce";  
        }

    }
   return 0;

 }