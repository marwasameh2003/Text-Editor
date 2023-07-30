// FCAI – Programming 1 – 2022 - Assignment 4
// Last Modification Date: 16/5/2022
// Author1 and ID and Group: Asmaa ElAwady Ibraheem Alawady 20210068
// Author2 and ID and Group: Salma Ameer Jalal Abdelhady 20210505
// Author3 and ID and Group: MArwa Sameh Taha Mostafa 20210514
// Teaching Assistant: Eng. Nesma & Eng. yousra
// Purpose: Text Editor Application


#include"textEditor.h"
int main () {
    string file1Name;
    cout << "please enter the file name with \".txt\":";
    cin >> file1Name;
    ifstream in;
    in.open(file1Name);
    if (!in) {
        cout << "please enter a valid file name:";
        cin >> file1Name;
    }


    int choice;
    bool exit = 0;
    while (!exit) {
        cout << "start program" << endl;
        cout << "1- Add new text to the end of the file" << endl;
        cout << "2-Display the content of the file" << endl;
        cout << "3-Empty the file" << endl;
        cout << "4-Encrypt the file content" << endl;
        cout << "5- Decrypt the file content" << endl;
        cout << "6- Merge Another file " << endl;
        cout << "7- Count the number of words in file" << endl;
        cout << "8- Count the number of characters in file " << endl;
        cout << "9- Count the number of lines in file" << endl;
        cout << "10- Search for a word in file" << endl;
        cout << "11- Count the number of times a word exists in a file" << endl;
        cout << "12- Turn the file content to upper case" << endl;
        cout << "13- Turn the file content to lower case" << endl;
        cout << "14- Turn the file content to 1st caps" << endl;
        cout << "15- Save" << endl;
        cout << "16- Exit " << endl;
        cout << "please choose the number of the process you want: ";
        cin >> choice;
        if (choice == 1) {
            Addingcontent(file1Name);
        }
        if (choice == 2) {
            Displaycontent(file1Name);
        }
        if (choice == 3) {
            Emptyfile(file1Name);
        }
        if (choice == 4) {
            Encryptfile(file1Name);
        }
        if (choice == 5) {
            Decryptingtfile();
        }
        if (choice == 6) {
            mergeTwoFiles(file1Name);
        }
        if (choice == 7) {
            countChars(file1Name);
        }
        if (choice == 8) {
            countWords(file1Name);
        }
        if (choice == 9) {
            countlines(file1Name);
        }
        if (choice == 10) {
            findWord(file1Name);
        }
        if (choice == 11) {
            countWord(file1Name);
        }
        if (choice == 12) {
            toUpperCase(file1Name);
        }
        if (choice == 13) {
            toLowerCase(file1Name);
        }
        if (choice == 14) {
            firstLetterCaps(file1Name);
        }
        if (choice == 15) {
            save();
        }
        if (choice == 16) {
            cout << "thank you for using this text editor" << endl;
            exit = 1;
        }

        cout << "\nfile closed"<<endl;


    }
}

