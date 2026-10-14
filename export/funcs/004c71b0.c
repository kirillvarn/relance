
void FUN_004c71b0(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int *piStack_24;
  int iStack_20;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  int local_8 [2];
  
  iStack_20 = param_2;
  piStack_24 = local_8;
  puVar4 = local_10;
  puVar5 = &DAT_0067dbf8;
  cVar1 = (**(code **)(DAT_0067dbf8 + 0x34))(&DAT_0067dbf8,puVar4,local_c);
  piVar2 = piStack_24;
  iVar3 = iStack_20;
  if (cVar1 != '\0') {
    piVar2 = (int *)ftol();
    iVar3 = ftol();
  }
  cVar1 = (**(code **)(DAT_0067dbf8 + 0x34))
                    (&DAT_0067dbf8,&piStack_24,&iStack_20,&stack0xffffffe4,local_8[0]);
  if (cVar1 != '\0') {
    puVar5 = (undefined4 *)ftol();
    puVar4 = (undefined1 *)ftol();
  }
  *piStack_24 = (int)piVar2;
  piStack_24[1] = iVar3;
  piStack_24[2] = (int)puVar5;
  piStack_24[3] = (int)puVar4;
  return;
}

