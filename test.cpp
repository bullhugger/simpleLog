#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Lekko{
    public:
        string description;
        string date;

        char insertDate()
        {
            cout << "Enter the date 'DD/MM/YYY'\n";
            getline (cin, date);
        };

        char insertMeal()
        {
            cout << "Describe what his meal is for the day.\n";
            getline(cin, description);  
        };
};

int main(){
    cout << "Lekko's meal log\n";
    Lekko o1, o2;
    char date;
    char description;

    date = o1.insertDate();
    description = o2.insertMeal();
    ofstream myfile;
    myfile.open("lekkoLog.txt", std::fstream::in | std::fstream::out | std::fstream::app);

        if(!myfile){
            cout << "Text file does not exist.\nMaking new text file...";
            myfile.open("lekkoLog.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
            myfile << "\n";
            myfile.close();
        }
        else{
            cout << "Opening lekkoLog.txt\n";
            myfile << o1.date;
            myfile << "\n";
            myfile << o2.description;
            myfile << "\n";
            myfile.close();
        }

    system("PAUSE");
}