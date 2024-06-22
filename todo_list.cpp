#include<bits/stdc++.h>
using namespace std;

void addTask(vector<pair<string,bool>>&vec){
    cout<<"Enter task: ";
    string task;
    cin>>task;
    vec.push_back(make_pair(task,false));
    cout<<"Task Added Successful."<<endl;
}

void viewTasks(vector<pair<string,bool>>&vec){
    if(vec.size()==0){
        cout<<"TODO list is empty."<<endl;
    }
    for(int i=0;i<vec.size();i++){
        cout<<i+1<<". "<<vec[i].first<<"   Status: ";
        if(vec[i].second){
            cout<<"Completed"<<endl;
        }
        else{
            cout<<"Pending"<<endl;
        }
    }
    cout<<"-------"<<endl;
}

void mark(vector<pair<string,bool>>&vec){
    cout<<"Enter index of task which is completed: ";
    int ind;
    cin>>ind;
    if(ind<=vec.size()&&ind>0){
    ind--;
    vec[ind].second=true;
    cout<<"Mark successful."<<endl;}
    else{
        cout<<"Wrong index."<<endl;
    }
}

void removeTask(vector<pair<string,bool>>&vec){
    cout<<"Enter index of task to remove: ";
    int ind;
    cin>>ind;
    if(ind<=vec.size()&&ind>0){
    ind--;
    vec.erase(vec.begin()+ind);
    cout<<"Task Removed."<<endl;}
    else{
        cout<<"Wrong index."<<endl;
    }
}

int main(){

    vector<pair<string,bool>>todo;
    int choice;
    while(true){
        cout<<"Press:"<<endl<<"1 for add task,"<<endl<<"2 for view tasks,"<<endl<<"3 for mark task as completed,"<<endl<<"4 for remove task"<<endl<<"-1 for Exit"<<endl<<"Enter your choice: ";
        cin>>choice;
        if(choice==1){
            addTask(todo);
        }
        else if(choice==2){
            viewTasks(todo);
        }
        else if(choice==3){
            mark(todo);
        }
        else if(choice==4){
            removeTask(todo);
        }
        else if(choice==-1){
            cout<<"Exiting program...";
            break;
        }
        else{
            cout<<"Invalid choice."<<endl;
        }
    }

    return 0;
}