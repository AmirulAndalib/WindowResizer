#include "stdafx.h"
#include "Common.h"

void CCommon::SetWindowAlwaysOnTop(HWND hWnd, bool top)
{
    if (top)
        SetWindowPos(hWnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE);			//�����ö�
    else
        SetWindowPos(hWnd, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE);		//ȡ���ö�
}

bool CCommon::IsWindowAlwaysOnTop(HWND hWnd)
{
    return (::GetWindowLong(hWnd, GWL_EXSTYLE) & WS_EX_TOPMOST) != 0;
}
