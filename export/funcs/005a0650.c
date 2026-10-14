
bool __thiscall FUN_005a0650(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 local_c [12];
  
  if (((char)param_1[0xb4] != '\0') && (*param_2 == -1)) {
    return true;
  }
  iVar1 = *param_1;
  uVar3 = FUN_0059da70(local_c);
  cVar2 = (**(code **)(iVar1 + 0x10))(uVar3);
  return cVar2 != '\0';
}

