#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

void get_text(ifstream& file, vector<string>& text_from_file){
    string s;
    if(!file.is_open())//�������� �������� �����
    {
        cout << "no open" << endl;
        return;
    }
    while(getline(file, s)){
        text_from_file.push_back(s);
    }
}

void print_text(vector<string>& text_from_file){

}

void write_text(vector<string>& text_from_file){

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
