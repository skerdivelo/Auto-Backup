#include <iostream>
#include <Windows.h>


using namespace std;

int main() {
    cout << "Press Y to use the script, or N for exit" << endl;
    char scelta;
    cin >> scelta;
    if(scelta == 'Y' || scelta == 'y') {
        while(true){
            //first you give the location of the directory that you want your files to be copied then the location of the directory where you want to save your files
            // the /Y means that the script will automatically replace the older files with the new ones, the /E means that the scipt will copy everything even the empty folders.
            system("xcopy " "C:\\Users..."  " C:\\Users..." " /Y /E");
            //create a timer of 60 seconds which this means it will save your files every minute.
            Sleep(60000);
        }
    } else {
        cout << "Bye" << endl;

    }
    cout << "coded by: AnonGuy" << endl;
}
