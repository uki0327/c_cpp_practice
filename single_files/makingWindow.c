#include <stdio.h>
#include <stdafx.h>

int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPreInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASS wc;
	
	wc.cbClsExtra = NULL;
	wc.cbWndExtra = NULL;
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hInstance = hInstance;
	wc.lpfnWndProc = WinProc;
	wc.lpszClassName = L"inux.kr";
	wc.lpszMenuName = NULL;
	wc.style = NULL;
	
	ResisterClass(&wc);
}
	
main() {
}