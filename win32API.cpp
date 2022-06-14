#include <windows.h>
#include <iostream>
using namespace std;
LRESULT CALLBACK WindowProcedure(HWND, UINT ,WPARAM ,LPARAM);
void AddMenus(HWND);
void AddControls(HWND);
HMENU hMenu;
int WINAPI WinMain(HINSTANCE hInst , HINSTANCE hPrevInst, LPSTR args, int ncmdshow)
{
    WNDCLASSW wc = {0};
    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL,IDC_ARROW);
    wc.hInstance= hInst;
    wc.lpszClassName = L"myWindowClass";
    wc.lpfnWndProc=WindowProcedure;
    if(!RegisterClassW(&wc))
        return -1;

    CreateWindowW(L"myWindowClass",L"MY Window",WS_OVERLAPPEDWINDOW | WS_VISIBLE,950,100,350,350,NULL,NULL,NULL,NULL);
    MSG msg = {0};

    while(GetMessage(&msg,NULL,NULL,NULL))
          {
              TranslateMessage(&msg);
              DispatchMessage(&msg);
          }
    return 0;

}
 LRESULT CALLBACK WindowProcedure(HWND hWnd,UINT msg,WPARAM wp,LPARAM lp)
{
    switch (msg)
    {
    case WM_COMMAND:
        switch(wp)
        {
        case 1:

    std::cout << "\n\nTo view current Doctor status(1-1-3/5)\nto Edit doctor status(1-1-2)\nTo add new Doctor Entry(1-1-1)\n\n\n\n";

        break;

         {
        case 2:

    std::cout << "\n\nTo view current Patient status(1-2-3/5)\nto Edit Patient status(1-2-2)\nTo add new Patient Entry(1-2-1)\n\n\n\n";
}
        break;
                         {
        case 3:

    std::cout << "To know the bed status(1-2-1)";
}
        break;
                 {
        case 4:

    std::cout << "This System Shows the an overview of what key to be pressed after what key";
}
        break;
    case WM_CREATE:
        AddMenus(hWnd);
        AddControls(hWnd);
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
      break;
    default:
      return DefWindowProc(hWnd,msg,wp,lp);
    }
}
void AddMenus(HWND hWnd)
{
    hMenu = CreateMenu();
    HMENU hFileMenu = CreateMenu();
    AppendMenu(hFileMenu,MF_STRING,1,"Doctor");
    AppendMenu(hFileMenu,MF_STRING,2,"Patient");
    AppendMenu(hFileMenu,MF_STRING,3,"Bed_status");
    AppendMenu(hMenu,MF_POPUP,(UINT_PTR)hFileMenu,"View");
    AppendMenu(hMenu,MF_POPUP,(UINT_PTR)hFileMenu,"Edit");
    AppendMenu(hMenu,MF_POPUP,(UINT_PTR)hFileMenu,"New");
    AppendMenu(hMenu,MF_STRING,4,"About");
    AppendMenu(hMenu,MF_STRING,5,"Quit");
    SetMenu(hWnd,hMenu);
}

void AddControls(HWND hWnd)
{
    CreateWindowW(L"static",L"Welcome to SDM HOSPITAL \nThis portal is for management purpose of our hospital\n  ",WS_VISIBLE | WS_CHILD ,50,50,200,200,hWnd,NULL,NULL,NULL);
}
