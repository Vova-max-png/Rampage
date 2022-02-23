#pragma once

//массив с классами программ которые ненужно закрывать(совет: добавлять сюда только системные окна такие как панель задач и т.п.)
string NotClose[11]{ "MSTaskListWClass", "DynamicContent1", "Button", "ToolbarWindow32", "InputIndicatorButton", "TrayClockWClass", "TrayButton", "TrayShowDesktopButtonWClass", "Start", "TrayButton", "TrayButton" };

//сколько максимум программ может запомнить вирус(совет: устанавливать минимум 20)
int n = 256;

//мод вируса(1 - Безобидный; 2 - Наносящий не серьезный урон)
int mode = 1;

//сколько секунд будет работать вирус
int times = 20;

//массив с дескрипторами программ которые мы закрыли
HWND* actives = new HWND[n];