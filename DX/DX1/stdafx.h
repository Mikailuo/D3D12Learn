#pragma once

#include <windows.h>
#include <d3d12.h>
#include <dxgi1_4.h>
#include <D3Dcompiler.h>
#include <DirectXMath.h>
#include "d3dx12.h"

// 窗口句柄
HWND hwnd = NULL;

// 窗口名字
LPCTSTR WindowName = L"yangshuohao";

// 窗口标题
LPCTSTR WindowTitle = L"Window";

//窗口宽和高
int Width = 800;
int Height = 600;

// 是否为全屏
bool FullScreen = false;

// 创建一个窗口
bool InitializeWindow(HINSTANCE hInstance,
	int ShowWnd,
	int width, int height,
	bool fullscreen);

// 主循环
void mainloop();

// 窗口消息的回调函数
LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);