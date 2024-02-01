#pragma once

#include <windows.h>
#include <d3d12.h>
#include <dxgi1_4.h>
#include <D3Dcompiler.h>
#include <DirectXMath.h>
#include "d3dx12.h"

// ���ھ��
HWND hwnd = NULL;

// ��������
LPCTSTR WindowName = L"yangshuohao";

// ���ڱ���
LPCTSTR WindowTitle = L"Window";

//���ڿ�͸�
int Width = 800;
int Height = 600;

// �Ƿ�Ϊȫ��
bool FullScreen = false;

// ����һ������
bool InitializeWindow(HINSTANCE hInstance,
	int ShowWnd,
	int width, int height,
	bool fullscreen);

// ��ѭ��
void mainloop();

// ������Ϣ�Ļص�����
LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);