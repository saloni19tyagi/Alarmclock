#include <bits/stdc++.h>
#include "alarm.h"

#define INVALID_INPUT "Please enter a valid input."

using namespace std;

int main() {
    int sel, choice, index, hour, minute;
    alarm alarm;
    cout << "WELCOME TO AUTOMATIC BELLRINGER\n";

    while (1) {

        cout << "        Select from the option :   \n";
        cout << "           1. Add an alarm\n";
        cout << "           2. Update an alarm\n";
        cout << "           3. Remove an existing alarm\n";
        cout << "           4. View the alarm\n";
        cout << " Enter your choice : ";
        cin >> choice;
        switch (choice) {

            case 1 : {
                cout << "\nEnter the time to be added (24hrs ):";
                cout << "\nEnter new hour : ";
                cin >> hour;
                cout << "\nEnter new minute : ";
                cin >> minute;
                alarm.addAlarm(hour, minute);
                alarm.displayAlarms();
                cout << "\nSuccessfully added.";
                break;
            }

            case 2 : {
                alarm.displayAlarms();
                cout << "\nEnter the index of the alarm to update : ";
                cin >> index;
                cout << "\nSelected alarm :- ";
                alarm.displayOneAlarm(index - 1);
                cout << "\nEnter new hour : ";
                cin >> hour;
                cout << "\nEnter new minute : ";
                cin >> minute;
                alarm.updateAlarm(index - 1, hour, minute);
                cout << "\nSuccessfully updated.";
                break;
            }

            case 3 : {
                alarm.displayAlarms();
                cout << "\nEnter the index of the alarm to update : ";
                cin >> index;
                alarm.removeAlarm(index - 1);
                cout << "\nSuccessfully deleted.";
            }
            case 4 : {
                cout << "\nAll the alarms : \n";
                alarm.displayAlarms();
                break;
            }
            default : {
                cout << INVALID_INPUT;
            }
        }

        cout << "\nSelect 1 to continue ans 0 to quit : ";
        cin >> sel;
        if (sel == 0)
            break;
    }
    return 0;
}#include <bits/stdc++.h>
 #include "alarm.h"

 #define INVALID_INPUT "Please enter a valid input."

 using namespace std;

 int main() {
     int sel, choice, index, hour, minute;
     alarm alarm;
     cout << "WELCOME TO AUTOMATIC BELLRINGER\n";

     while (1) {

         cout << "        Select from the option :   \n";
         cout << "           1. Add an alarm\n";
         cout << "           2. Update an alarm\n";
         cout << "           3. Remove an existing alarm\n";
         cout << "           4. View the alarm\n";
         cout << " Enter your choice : ";
         cin >> choice;
         switch (choice) {

             case 1 : {
                 cout << "\nEnter the time to be added (24hrs ):";
                 cout << "\nEnter new hour : ";
                 cin >> hour;
                 cout << "\nEnter new minute : ";
                 cin >> minute;
                 alarm.addAlarm(hour, minute);
                 alarm.displayAlarms();
                 cout << "\nSuccessfully added.";
                 break;
             }

             case 2 : {
                 alarm.displayAlarms();
                 cout << "\nEnter the index of the alarm to update : ";
                 cin >> index;
                 cout << "\nSelected alarm :- ";
                 alarm.displayOneAlarm(index - 1);
                 cout << "\nEnter new hour : ";
                 cin >> hour;
                 cout << "\nEnter new minute : ";
                 cin >> minute;
                 alarm.updateAlarm(index - 1, hour, minute);
                 cout << "\nSuccessfully updated.";
                 break;
             }

             case 3 : {
                 alarm.displayAlarms();
                 cout << "\nEnter the index of the alarm to update : ";
                 cin >> index;
                 alarm.removeAlarm(index - 1);
                 cout << "\nSuccessfully deleted.";
             }
             case 4 : {
                 cout << "\nAll the alarms : \n";
                 alarm.displayAlarms();
                 break;
             }
             default : {
                 cout << INVALID_INPUT;
             }
         }

         cout << "\nSelect 1 to continue ans 0 to quit : ";
         cin >> sel;
         if (sel == 0)
             break;
     }
     return 0;
 }