#pragma once

//������ � �������� �������� ������� ������� ���������(�����: ��������� ���� ������ ��������� ���� ����� ��� ������ ����� � �.�.)
string NotClose[11]{ "MSTaskListWClass", "DynamicContent1", "Button", "ToolbarWindow32", "InputIndicatorButton", "TrayClockWClass", "TrayButton", "TrayShowDesktopButtonWClass", "Start", "TrayButton", "TrayButton" };

//������� �������� �������� ����� ��������� �����(�����: ������������� ������� 20)
int n = 256;

//��� ������(1 - ����������; 2 - ��������� �� ��������� ����)
int mode = 1;

//������� ������ ����� �������� �����
int times = 20;

//������ � ������������� �������� ������� �� �������
HWND* actives = new HWND[n];