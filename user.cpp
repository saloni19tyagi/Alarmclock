#include<iostream>
#include<vector>
#include<set>

using namespace std;

struct Time {
    int hour ;
    int min ;
};

vector<Time> t;

void Update (int time_update_hour , int time_update_min , int new_time_hour ,int new_time_min) {
    for (int i = 0; i < t.size() ; i++) {
        if(t[i].hour == time_update_hour && t[i].min == time_update_min) {
            t[i].hour = new_time_hour;
            t[i].min = new_time_min;
        }
    }
}

void Add(int add_time_hour , int add_time_min) {
    Time input ;
    input.hour = add_time_hour;
    input.min = add_time_min;
    t.push_back(input) ;
    cout << "Your time is added\n";
}

void Remove(int remove_time_hour , int remove_time_min) {
    for (int i = 0; i < t.size(); i++) {
        if(t[i].hour == remove_time_hour && t[i].min == remove_time_min) {
            t.erase(t.begin() + i);
            break;
        }
    }
}

void view() {
    cout << "Set Times are :\n";
    for (int i = 0; i < t.size(); i++) {
        cout << t[i].hour << " : " << t[i].min << "\n";
    }
}

int main() {

    int choice, sel, new_time_hour, new_time_min, time_update_hour, time_update_min;
    int add_time_hour, add_time_min, remove_time_hour, remove_time_min;

    cout << "WELCOME TO AUTOMATIC BELLRINGER\n";

    while(1) {

    cout << "        Select from the option :   \n";
    cout << "           1. Update time\n" ;
    cout << "           2. Add a new time\n" ;
    cout << "           3. Remove an existing time\n" ;
    cout << "           4. View the time list\n" ;

    cin >> choice;
    switch (choice) {
        case 1 : {
            cout << "Please Enter the time to be updated\n";
            cout << "Enter hour\n";
            cin >> time_update_hour;
            cout << "Enter minutes\n";
            cin >> time_update_min;
            cout << "Enter the new_time\n";
            cout << "Enter Hour\n";
            cin >> new_time_hour ;
            cout << "Enter Minutes\n";
            cin >> new_time_min;
            
            Update( time_update_hour, time_update_min , new_time_hour , new_time_min);
            break;
        }
        case 2 : {
            cout << "Enter the time to be added\n";
            cout << "Enter hour\n";
            cin >> add_time_hour ;
            cout << "Enter minute\n";
            cin >> add_time_min;
            
            Add( add_time_hour , add_time_min);
            break;
        }
        case 3 : {
            cout << "Enter the time to be removed\n";
            cout << "Enter hour\n";
            cin >> remove_time_hour;
            cout << "Enter minutes\n";
            cin >> remove_time_min;
            
            Remove(remove_time_hour , remove_time_min);
            break;
        }
        case 4 : {
            view();
            break; 
        }
        default : {
            cout << "Invalid Choice\n";
        }
    }

    cout << "Select 1 to continue ans 0 to quit\n";
    cin >> sel;
    if(sel == 0)
        break;
    }
    return 0;
}