
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00446d90(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int local_90 [6];
  undefined1 auStack_78 [12];
  int local_6c;
  int local_68;
  int local_64;
  undefined1 auStack_48 [24];
  float fStack_30;
  undefined4 uStack_20;
  
  if (*param_1 != 0) {
    iVar1 = param_1[3];
    iVar2 = param_1[5];
    piVar6 = param_1 + 6;
    piVar7 = local_90;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    local_68 = param_1[4];
    local_6c = iVar1;
    local_64 = iVar2;
    uVar4 = (**(code **)(**(int **)Engine_exref + 0xa0))(*(int **)Engine_exref,param_1[2]);
    if (DAT_00668a98 == (int *)0x0) {
      DAT_00668a98 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00668a98 + 0x1c))(DAT_00668a98,&local_68,uVar4,&stack0xffffff68);
    FUN_00406880(auStack_78);
    (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1,0,auStack_48);
    (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1,uStack_20);
    (**(code **)(*(int *)*param_1 + 0x20))((int *)*param_1,uStack_20);
    if ((char)param_1[0xf] == '\0') {
      if ((float)_DAT_005c8ba8 <= (float)param_1[0x10]) {
        fStack_30 = (float)param_1[0x10] - fStack_30;
        param_1[0x10] = (int)fStack_30;
        if (fStack_30 < (float)_DAT_005c8ba8 != (fStack_30 == (float)_DAT_005c8ba8)) {
          piVar6 = (int *)*param_1;
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x34))(piVar6,1);
          }
          *(undefined1 *)(param_1 + 0xf) = 1;
          param_1[0x10] = 0;
          return;
        }
      }
    }
    else {
      cVar3 = (**(code **)(*(int *)*param_1 + 0x2c))((int *)*param_1,4);
      if (cVar3 != '\0') {
        FUN_005574a0();
      }
    }
  }
  return;
}

