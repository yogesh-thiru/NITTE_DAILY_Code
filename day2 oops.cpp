#include<iostream>
#include<stdbool.h>
#include<string.h>
using namespace std;

void menu(){
    
    cout<<"press 1 : for reg"<<endl;
    cout<<"press 2 : for login"<<endl;
    cout<<"press 3 : for adminlogin"<<endl;
    cout<<"press 4 : for logout"<<endl;
    cout<<"press 5 : for exit"<<endl;

}

void Register(){
    string name ,user_id,pass;
    cout<<"enter name :";
    cin>>name;
    cout<<endl;
     cout<<"enter user_id :";
    cin>>user_id;
     cout<<endl;
     cout<<"enter password :";
    cin>>pass;
     cout<<endl;
      cout<<"regestered..!"<<endl;


}

void login(){
    string user_id,pass;
     cout<<"enter user_id :";
    cin>>user_id;
     cout<<endl;
     cout<<"enter password:";
    cin>>pass;
     cout<<endl;

     cout<<"logged in..!"<<endl;

}

void adminlogin(){
    string admin_user_id, pass;
    cout<<"enter admin_user_id";
    cin>> admin_user_id;
    cout<<endl;
    cout<<"enter password";
    cin>>pass;
    cout<<endl;
    cout<<"Entered admin page..!";
    cout<<endl;
}

void logout(){
    cout<<"loged out..!"<<endl;
}

int main(){

int choice;
bool flag = true;

while(flag){
    menu();
    cin>>choice;
    switch(choice){

        case 1:
           Register();
           break;
    
    case 2:
           login();
           break;
    
    case 3:
           adminlogin();
           break;
    
    case 4:
           logout();
           break;
    
    case 5:
           flag = false;
           break;
    }
}
    return 7;
}

    


