//#include <iostream>
//#include <tchar.h>
//#include <windows.h>
//
//
//int _tmain(int argc, TCHAR* argv[])
//{
//    //GetCurrentProcess�� handdle table���� �ڽ��� handle object�� �������� ���� �ƴ�
//    //�׳� �ڱ� �ڽ��� ��Ÿ��
//    HANDLE a(GetCurrentProcess());
//    SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS);
//    while (TRUE)
//    {
//        time_t start_time = time(NULL);
//        for (int i = 0; i < 100000; i++)
//            for (int k = 0; k < 10000; k++);
//        _fputts(_T("Operation2.exe \n"), stdout);
//
//        time_t end_time = time(NULL);
//        
//        printf("%d is interval time\n", end_time - start_time);
//    }
//}