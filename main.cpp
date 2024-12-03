#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

void get_text(ifstream& file, vector<string>& text_from_file){
    string s;
    if(!file.is_open())
    {
        cout << "no open" << endl;
        return;
    }
    while(getline(file, s)){
        text_from_file.push_back(s);
    }
}

void print_text(vector<string>& text_from_file){
    for (const auto& line : text_from_file){
        cout << line << endl;
    }
}

void write_text(vector<string>& text_from_file){
    ofstream outputFile("text_output.txt", ios::binary);
    stringstream ss;
    for (const auto& line : text_from_file) {
        ss << line << endl;
    }
    string str = ss.str();
    outputFile.write(str.c_str(), str.length());
    outputFile.close();
}

int main()
{
    vector<string> text_from_file;
    ifstream file("text.txt");
    get_text(file, text_from_file); //������ ������ �� �����
    print_text(text_from_file); //����� �����������
    write_text(text_from_file);//��������� � ����

    file.close();
    return 0;
}
