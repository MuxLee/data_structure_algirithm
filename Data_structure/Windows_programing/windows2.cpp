#include <iostream>
#include <Windows.h>



int StackPointerResgister();
int StackPointer2();



DWORD WINAPI ThreadProcess(LPVOID lpParam)
{
    DWORD threadNum = (DWORD)lpParam;

}

// _tmain�� wmain�� main�� ��� ȣȯ�Ͽ� ����ϱ� ����, ���Ұ� ���� ��.
// ANCI���� ���� c++���� �߰������� �ʾ�.
int main(int argc, char* argv[])
{
    int student_score[30] = { 0 };
    int first{ 0 };
    int second{ 1 };
    

    // �̷��ٿ��� element ��� for�� ���� ����.
    // index�� �ȿ� �ִ°� ����.
    // auto�� ������ ���̵���.
    // ���� data�ڷḦ �ٲ㵵 ���� ����.
    //int index = 0;
    //for (auto &score : student_score)
    //    score = index++;

    //// print score
    //for (auto const score : student_score)
    //    std::cout << score << std::endl;

    //// process handle�� structure �̹Ƿ� structure�� �� ���� ����Ű�� pointer�� ��µ�
    //HANDLE current_handle{ GetCurrentProcess() };
    //std::cout << current_handle;    


    StackPointerResgister();
    
    return 0;
};



int StackPointer2()
{
    std::cout << "StackPointer2 is called\n";
    return 0;
}

int StackPointerResgister()
{
    int a = 1;
    std::cout << "stack1 Pointer called\n";
    StackPointer2();
    return 0;
}
