
/* Library Function - Single Match
    _driveandpathC@12
   
   Library: Visual Studio 2005 Release
   __stdcall driveandpathC,12 */

void driveandpathC(char *param_1,undefined1 *param_2,undefined1 *param_3)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar1 = param_1;
  do {
    cVar3 = *pcVar1;
    pcVar1 = pcVar1 + 1;
  } while (cVar3 != '\0');
  if ((pcVar1 == param_1 + 1) || (param_1[1] != ':')) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      FUN_005b7723(param_2,param_1,2);
      param_2[2] = 0;
    }
    param_1 = param_1 + 2;
  }
  cVar3 = *param_1;
  pcVar1 = (char *)0x0;
  pcVar4 = param_1;
  if (cVar3 != '\0') {
    do {
      if ((cVar3 == '/') || (cVar3 == '\\')) {
        pcVar1 = pcVar4 + 1;
      }
      pcVar4 = pcVar4 + 1;
      cVar3 = *pcVar4;
    } while (cVar3 != '\0');
    if (pcVar1 != (char *)0x0) {
      if (param_3 == (undefined1 *)0x0) {
        return;
      }
      uVar2 = (int)pcVar1 - (int)param_1;
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      FUN_005b7723(param_3,param_1,uVar2);
      param_3[uVar2] = 0;
      return;
    }
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  return;
}

