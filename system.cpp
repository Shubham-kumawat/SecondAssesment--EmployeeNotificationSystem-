#include<bits/stdc++.h>
using namespace std;

class employeeNotificationSystem{
    public:
    virtual void employeeNotification(const string &message)=0;
    virtual ~employeeNotificationSystem(){}
};

class email:public employeeNotificationSystem{
    public:
    void employeeNotification(const string &message) override{
        cout<<"email employeeNotification : "<<message<<endl;
    }
};

class sms:public employeeNotificationSystem{
    public:
    void employeeNotification(const string &message) override{
        cout<<"sms employeeNotification : "<<message<<endl;
    }
};

class push:public employeeNotificationSystem{
    public:
    void employeeNotification(const string &message) override{
        cout<<"push employeeNotification : "<<message<<endl;
    }
};

void notify(employeeNotificationSystem *a, const string &message){
    if(a){
        a->employeeNotification(message);
    }
}

int main(){
    string newPolicy="new policy announced ";
    string eventReminder="office event remainder ";
    string systemAlert="server downtime alert";

    employeeNotificationSystem *a=nullptr;

    a=new email();
    notify(a, newPolicy);
    delete a;

    a=new sms();
    notify(a, eventReminder);
    delete a;

    a=new push();
    notify(a,  systemAlert);
    delete a;

    return 0;
}