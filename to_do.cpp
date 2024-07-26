#include <iostream>
#include <windows.h>
using namespace std;
void Print_tasks(string tasks[],int task_counter){

    cout<<"Task To Do: "<<endl;
    cout<<"----------------------------------------------------"<<endl;
    for(int i=0;i<task_counter;i++){

        cout<<"Task"<<i<<" : "<<tasks[i]<<endl;
    }
    cout<<"-----------------------------------------------------"<<endl;
}

int main()
{

    system("color d");
    string task[10] = {""};

    // counter variable =>it will help us to know how many task we have
    int task_counter=0;

    int option=-1;

    while(option !=0){

        //we will make menu here
        cout<<"<---------TO DO LIST --------->"<<endl;
        cout<<"1.To Add new Task."<<endl;
        cout<<"2.To View Task."<<endl;
        cout<<"3.Delete The Task."<<endl;
        cout<<"Terminate The Program.(press '0')"<<endl;

        cout<<"Enter your choice => ";
        cin>>(option);

        switch(option){
            case 1:{

                if(task_counter>10){

                    cout<<"<-------TASK LIST IS FULL------->"<<endl;
                }
                else{

                 cout<<"Enter A New Task: ";
                 cin.ignore();
                 getline(cin,task[task_counter++]);
                }

                break;
            }
            case 2:{

                system("cls");
                Print_tasks( task,task_counter);
                break;
            }

            case 3:{
                system("cls");
                Print_tasks(task,task_counter);
                int del_task=0;
                cout<<"Enter a task to delete=> ";
                cin>>del_task;

                if(del_task<0 || del_task>9){

                    cout<<"It is an ERROR !! Please enter a valid Task.";
                    break;
                }

                for(int i=del_task;i<task_counter;i++){

                    task[i]=task[i+1];
                    task_counter=task_counter-1;
                    break;
                }
            }

            case 0:{

                cout<<"Terminating the program- --- ----- -------"<<endl;
                break;
            }

            default:

            cout<<"You Have Entered A invalid Value ."<<endl;
        }

    }

    return 0;
}