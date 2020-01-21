#include <iostream>
using namespace std;

int main()
{
    int age, height, asset;
    string status;
    cout << "Enter your age: ";
    cin >> age;
    if(age < 20){
        cout << "Enter your height(centimeter): ";
        cin >> height;
        if(height < 160){
            status = "UNFRIEND";
        }else if(height < 175){
            status = "FRIEND";
        }else{
            cout << "Enter your asset(million baht): ";
            cin >> asset;
            if(asset > 69){
                status = "MARRIED";
            }else{
                status = "ONE-NIGHT STAND";
            }
        }
    }else if(age < 30){
        cout << "Enter your asset(million baht): ";
        cin >> asset;
        if(asset > 10){
            status = "BEST FRIEND";
        }else{
            status = "UNFRIEND";
        }
    }else{
        status = "UNFRIEND";
    }

    cout << "your status is \"" << status << "\"";
    return 0;
}

