#include <windows.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
 {
    switch(msg)
    {
        case WM_DESTROY: 
        {
            PostQuitMessage(0);
            return 0;
        } break;

        default:
        {
            return DefWindowProc(hwnd, msg, wParam, lParam);
        } break;
    }
    return 0;
}
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE pInstance, PWSTR cmd, int showCmd  )
{
    WNDCLASS wc = {0};

    const wchar_t CLASS_NAME[] = L"Test";
    wc.lpszClassName = CLASS_NAME;
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;

    RegisterClass(&wc);

    HWND hwnd;

    hwnd = CreateWindow(CLASS_NAME, CLASS_NAME, WS_OVERLAPPEDWINDOW|WS_VISIBLE, 0, 0, 640, 480, 0, 0, hInstance, 0);

    if (hwnd == null) {
        return 0;
    }

    ShowWindow(hwnd, showCmd);

    MSG msg = {0};

    int running = 1;

    while(running)
    {
        while(PeekMessage(&msg, 0, 0, 0, PM_REMOVE))
        {
            if (msg.message == WM_QUIT)
            {
                running = 0;
            }

            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }


}