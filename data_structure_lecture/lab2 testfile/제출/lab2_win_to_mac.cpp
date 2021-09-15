// src/lab2_win_to_mac.cpp -> ������ a.out
// a.out�� winfile�� ���� ������ �ΰ� 
// ex) a.out win_file.txt mac_file.txt�� �ٲ�.

#include <iostream>
#include <cstdio>
#include <fstream>

int main(int argc, char** argv)
{
    //const char* input  = "src/windows_file.txt";
    //const char* output = "mac_file.txt";

    std::ifstream input_file(argv[1]);    //src/windows_file.txt
    std::ofstream output_file(argv[2]);   //mac_file.txt

    char ch;

    std::cout << input_file.good() << std::endl;
    //std::cout << output_file.good() << std::endl;

    while (!input_file.eof()) 
    {
        input_file.get(ch);
        if (input_file.bad()) /// �Է����� ��Ʈ���� ������Ʈ�� �����Ѵٸ� ������ ����
            break;
        if (ch == '\n') // carridge return
            continue;
        else
            output_file << ch;
    }

    input_file.close();
    output_file.close();
    return 0;
}