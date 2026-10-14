
void __fastcall FUN_0057b0e0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_c [12];
  
  if ((char)param_1[0x11c] != '\0') {
    iVar2 = (**(code **)(*param_1 + 0xb8))();
    if (iVar2 != 0) {
      FUN_0059da70(auStack_c);
      cVar1 = (**(code **)(*param_1 + 0x10))(auStack_c);
      if (cVar1 != '\0') {
        FUN_004be370(iVar2);
      }
    }
  }
  FUN_005a17b0();
  return;
}

