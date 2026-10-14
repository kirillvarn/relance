
int FUN_0041af40(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 4) != 0) &&
       (param_3 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3))) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\MaterialLib.cpp",0x14a,
                 "too many material files passed to the material loader");
    }
    puVar2 = *(undefined4 **)(param_1 + 4);
    if (puVar2 != *(undefined4 **)(param_1 + 8)) {
      do {
        if ((int)param_3 <= iVar3) {
          return iVar3;
        }
        uVar1 = FUN_0041aa50(*puVar2,1,puVar2[1]);
        *(undefined4 *)(param_2 + iVar3 * 4) = uVar1;
        puVar2 = puVar2 + 2;
        iVar3 = iVar3 + 1;
      } while (puVar2 != *(undefined4 **)(param_1 + 8));
    }
  }
  return iVar3;
}

