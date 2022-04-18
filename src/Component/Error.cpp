#include "Error.h"

#include <string>

#include "Define.h"
#include "DxLib.h"

using namespace std;

void Error::finish(char* errorMessage, LPCTSTR lpszFuncName, int lineN) {
    char funcName[1024];
    printf(funcName, "%s", lpszFuncName);
    printfDx("Error! \n%s\n%s(%d)", errorMessage, funcName, lineN);

    while (!ProcessMessage()) {
        ClearDrawScreen();
        ScreenFlip();
    }
    DxLib_End();
    exit(99);
}