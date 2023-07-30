#include"textEditor.h"
void Addingcontent(string file1Name){
    string content;
    fstream fileOUT;

    fileOUT.open (file1Name);

    if (fileOUT.is_open ())
    { cout << "The file has been opened properly"<<endl;

        cin>>content;

        fstream fileOUT("test.txt", ios::app);
        fileOUT<<content<<endl;

        fileOUT.close ();
    }

}

//fstream fileOUT("test.txt", ios::app); // open filename.txt in append mode

//fileOUT << "some stuff" << endl; // append "some stuff" to the end of the file

// fileOUT.close(); // close the file


//---------------------



//----------------
void Displaycontent(string file1Name){
    char fileName[30], ch;
    fstream fp;
    // cout<<"Enter the Name of File: ";
    //gets(fileName);
    fp.open(file1Name, fstream::in);
    if(!fp)
    {
        cout<<"Error Occurred!";

    }
    cout<<"Content of "<<fileName<<endl;
    while(fp>>noskipws>>ch)
        cout<<ch;
    fp.close();
    cout<<endl;


}

//--------------------
void Emptyfile(string file1Name){

    fstream myFileHandler;
    myFileHandler.open (file1Name);

    cout << "The file has been opened properly";
    ofstream ofs;
    ofs.open("test.txt", ofstream::out | ofstream::trunc);

    ofs.close();
}


//-----------------------------
void Encryptfile(string file1Name){

    ifstream MyFile (file1Name);
    ofstream Out ("EncryptedText.txt");
    string MyString;
    while (getline (MyFile, MyString)){
        //  cout << MyString << endl;
        string encrypt;
        for (int i=0;i<MyString.size (); i++){
            char e=MyString [i]+1;
            encrypt+= e;
        }
        Out<<encrypt<<endl;
    }
    MyFile.close ();
    Out.close ();
}
//-----------------
void Decryptingtfile(){

    ifstream MyFile ("EncryptedText.txt");
    ofstream Out ("DncryptedText.txt");
    string MyString;
    while (getline (MyFile, MyString)){
        //cout << MyString << endl;
        string encrypt;
        for (int i=0;i<MyString.size (); i++){
            char e=MyString [i]-1;
            encrypt+= e;
        }
        Out<<encrypt<<endl;
    }
    MyFile.close ();
    Out.close ();


}
//----------------------
void mergeTwoFiles(string file1Name){
    string line;
    ofstream out;
    ifstream in;
    char file2Name[100];
    cout << "please enter the 2nd file name:";
    cin >> file2Name;
    out.open (file1Name, ios ::app);
    in.open(file2Name  );
    if (!in){
        cout << "please enter a valid file: ";
        cin >> file2Name;
    }

    for (string str; getline(in, str); )
    {
        out << str;
    }
    out.close();
    in.close();

}

void countChars(string file1Name){
    char ch;
    fstream in;
    int charCount =0;
    in.open(file1Name  );
    while(in >> ch){
        charCount++;

    }
    cout << "Number of characters is :"<< charCount;
    in.close();
}

void countWords(string file1Name){
    fstream in;
    string word;
    int wordCount =0;
    in.open(file1Name  );
    while(in >> word){
        wordCount++;
    }
    cout << "Number of word is :"<< wordCount;
    in.close();


}
void countlines(string file1Name){
    fstream in;
    string line;
    int lineCount =0;
    in.open(file1Name  );
//    for(string line;getline(in,line);){
//        lineCount++;
//    }
    while(!in.eof()) {
        while (getline(in, line)) {
            lineCount++;
        }
    }
    cout << "Number of lines is :"<< lineCount;
    in.close();


}
void findWord(string file1Name){
    fstream in;
    string line , word;
    in.open(file1Name  );
    cout << "Enter the word to know if it exists or not:";
    cin >> word;

    while(!in.eof()) {
        while (getline(in, line)) {
            if (line.find(word) != string::npos) {
                cout << "word was found in: " << file1Name << endl;
            }

//            if(line.find(word)==1){
//                cout << "Word was found in the file";
//            }
            else {
                cout << "Word was not found in the file";

            }

            break;
        }
    }

    in.close();


}


// function 11
void countWord(string file1Name){
    string word, searchWord;
    int counter = 0;
    cout<< "please enter the word you are searching for: "<< endl;
    cin>> searchWord;
    ifstream file;
    file.open(file1Name);

    while(!file.eof()){
        file >> word;
        if(word == searchWord){
            counter++;
        }

    }

    cout<< "the word "<< searchWord<< " was repeated "<< counter << " times"<< endl;

}
//------------------------
// function 12
void toUpperCase(string file1Name){
    fstream file;
    char name[100] , ch;
    vector<char> vec1;

    file.open(file1Name,ios::in);
    while(!file.eof()){
        file.get(ch);
        vec1.push_back(toupper(ch));
    }
    file.close();
    file.open("upperfile.txt",ios::out);
    for(int i=0 ; i<vec1.size()-1 ; ++i){
        file.put(vec1[i]);
    }
    file.close();
    return;
}


//---------------------------
//function 13

void toLowerCase(string file1Name){
    fstream file;
    char name[100] , ch;
    vector<char> vec2;

    file.open(file1Name,ios::in);
    while(!file.eof()){
        file.get(ch);
        vec2.push_back(tolower(ch));
    }
    file.close();
    file.open("lowerfile.txt",ios::out);
    for(int i=0 ; i<vec2.size()-1 ; ++i){
        file.put(vec2[i]);
    }
    file.close();
    return;
}

//-----------------
//function 14
void firstLetterCaps(string file1Name){
    ifstream inputfile;
    ofstream outputfile;
    stringstream str_stream;
    string str;
    int i=0, temp=0;
    inputfile.open(file1Name);
    str_stream<<inputfile.rdbuf();
    inputfile.close();
    str = str_stream.str();
    while(str[i])
    {
        if(temp==0)
        {
            str[i] = toupper(str[i]);
            temp = 1;
        }
        else if(isspace(str[i]))
            temp = 0;
        i++;
    }
    outputfile.open("capfile.txt");
    outputfile<<str;

}
//----------------
//function 15
void save(){

    cout<< "file saved successfully";

}
//--------------
