
bool __fastcall FUN_005657d0(int param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 2) & 7) == 1) {
    cVar1 = *(char *)(param_1 + 7);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x10);
  }
  return cVar1 == ' ';
}

