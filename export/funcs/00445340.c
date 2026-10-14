
undefined4 * __thiscall FUN_00445340(int param_1,char *param_2,undefined1 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  IScriptEngine *pIVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int local_d8;
  undefined4 local_c0 [12];
  IScriptEngine local_90 [48];
  int local_60 [12];
  undefined1 local_30 [48];
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_00456540(*(undefined4 *)(param_1 + 8),0);
  if (puVar2 == (undefined4 *)0x0) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %s",
               "E:\\FL\\Scratch\\Source\\Client\\gf\\ObjectDeformable.cpp",0x453,
               "Cannot allocate thorn script\n");
  }
  else {
    pIVar3 = ThornScriptLoad(param_2);
    ThornScriptGetCsys(local_90,(char *)pIVar3);
    local_c0[2] = 0;
    local_c0[0] = 0;
    local_c0[1] = 0;
    FUN_004215b0();
    piVar1 = *(int **)(param_1 + 0x1b8);
    local_d8 = 0;
    if (piVar1 != (int *)0x0) {
      piVar7 = local_60;
      piVar6 = piVar1;
      for (iVar5 = 0xc; piVar6 = piVar6 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar7 = *piVar6;
        piVar7 = piVar7 + 1;
      }
      local_d8 = *piVar1;
      puVar4 = (undefined4 *)FUN_00435c90(local_30,local_90,local_60);
      puVar8 = local_c0;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    FUN_00454eb0(param_2,0,local_c0,pIVar3);
    FUN_00453a40(param_1,0);
    *puVar2 = 1;
    *(undefined1 *)((int)puVar2 + 5) = 1;
    *(undefined1 *)(puVar2 + 1) = 1;
    *(undefined1 *)((int)puVar2 + 6) = 0;
    *(undefined1 *)(puVar2 + 2) = param_3;
    *(undefined1 *)((int)puVar2 + 9) = 0;
    *(undefined1 *)((int)puVar2 + 0xf) = 0;
    puVar2[4] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    if (local_d8 != 0) {
      FUN_00454e80(local_d8);
      return puVar2;
    }
  }
  return puVar2;
}

