
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00433f40(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  HANDLE pvVar3;
  uint uVar4;
  bool bVar5;
  DWORD DVar6;
  int *lpMem;
  int *piVar7;
  float *pfVar8;
  int *piStack_a0;
  float fStack_9c;
  float fStack_98;
  int *piStack_94;
  float fStack_90;
  undefined1 *puStack_8c;
  int *piStack_88;
  undefined4 uStack_84;
  undefined4 *puStack_80;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int *piStack_50;
  int *piStack_4c;
  char cStack_48;
  int *piStack_40;
  float fStack_3c;
  int *apiStack_34 [2];
  byte *pbStack_2c;
  int *piStack_28;
  undefined4 auStack_1c [4];
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_005b9088;
  local_c = ExceptionList;
  if (param_2 == -1) {
    return 1;
  }
  puStack_80 = &local_6c;
  local_6c = 0;
  piStack_88 = *(int **)Pipeline_exref;
  uStack_84 = 0x17;
  puStack_8c = (undefined1 *)0x433f9a;
  ExceptionList = &local_c;
  (**(code **)(*piStack_88 + 0xf4))();
  puStack_8c = &stack0xffffff8c;
  piStack_94 = *(int **)Pipeline_exref;
  fStack_90 = 1.96182e-44;
  fStack_98 = 6.175832e-39;
  (**(code **)(*piStack_94 + 0xf4))();
  bVar5 = (char)uStack_4 == '\0';
  if (bVar5) {
    piStack_a0 = *(int **)Pipeline_exref;
    fStack_98 = 1.12104e-44;
    fStack_9c = 3.22299e-44;
    (**(code **)(*piStack_a0 + 0xf0))();
  }
  else {
    piStack_a0 = *(int **)Pipeline_exref;
    fStack_98 = 5.60519e-45;
    fStack_9c = 3.22299e-44;
    (**(code **)(*piStack_a0 + 0xf0))();
  }
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,bVar5);
  piStack_28 = (int *)0x0;
  auStack_1c[0] = 0;
  apiStack_34[0] = (int *)0x0;
  FUN_00526a20();
  iVar1 = (**(code **)**(undefined4 **)Engine_exref)
                    (*(undefined4 **)Engine_exref,"1.11_IFLAppearance",auStack_1c);
  if (iVar1 < 0) {
    piStack_40 = (int *)0xffffffff;
    if (piStack_28 != (int *)0x0) {
      (**(code **)(*piStack_28 + 8))(piStack_28);
    }
  }
  else {
    (**(code **)(*piStack_28 + 0x20))(piStack_28,0,apiStack_34);
    piStack_40 = (int *)0xffffffff;
    FUN_00526a20();
  }
  piStack_a0 = (int *)0x4;
  piStack_28 = (int *)(uint)pbStack_2c[3];
  fStack_9c = (float)*pbStack_2c * (float)_DAT_005c89c8;
  fStack_98 = (float)pbStack_2c[1] * (float)_DAT_005c89c8;
  piStack_40 = (int *)0x1;
  piStack_94 = (int *)((float)pbStack_2c[2] * (float)_DAT_005c89c8);
  fStack_90 = (float)(int)piStack_28 * (float)_DAT_005c89c8;
  (**(code **)(*apiStack_34[0] + 0x4c))(apiStack_34[0],0,&piStack_a0);
  fStack_98 = 1.4013e-45;
  piStack_94 = (int *)(uint)((char)pbStack_2c != '\0');
  piStack_4c = (int *)CONCAT31(piStack_4c._1_3_,2);
  (**(code **)(*piStack_40 + 0x4c))(piStack_40,10,&fStack_98);
  uVar4 = (uint)apiStack_34[0] | 0x100;
  if (cStack_48 == '\0') {
    uVar4 = (uint)apiStack_34[0] | 0x2100;
  }
  if (fStack_3c == (float)_DAT_005c89b8) {
    pfVar8 = (float *)0x0;
  }
  else {
    puStack_80 = (undefined4 *)0x3f800000;
    fStack_90 = 1.0;
    uStack_84 = 0;
    piStack_88 = (int *)0x0;
    puStack_8c = (undefined1 *)0x0;
    uStack_64 = 0;
    uStack_68 = 0;
    local_6c = 0;
    if (DAT_00667e38 == (int *)0x0) {
      DAT_00667e38 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00667e38 + 0x10))(DAT_00667e38,&fStack_90,&fStack_90,fStack_3c);
    pfVar8 = &fStack_90;
    uVar4 = uVar4 | 0x30;
  }
  piVar7 = *(int **)Renderer_exref;
  lpMem = piStack_4c;
  uVar2 = (**(code **)(*piVar7 + 0x1c))(piVar7,piStack_50,param_2,0x3f800000,uVar4);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x17,uVar4);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,param_2);
  puStack_8c = (undefined1 *)CONCAT31(puStack_8c._1_3_,1);
  if (pfVar8 != (float *)0x5) {
    if (pfVar8 == (float *)0x6) {
      if (lpMem != (int *)0x0) {
        (**(code **)(*lpMem + 8))(lpMem);
      }
      goto LAB_00434297;
    }
    if (pfVar8 != (float *)0x7) goto LAB_00434297;
  }
  if (lpMem != (int *)0x0) {
    DVar6 = 0;
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,DVar6,lpMem);
  }
LAB_00434297:
  puStack_8c = (undefined1 *)0xffffffff;
  if (piVar7 != (int *)0x5) {
    if (piVar7 == (int *)0x6) {
      if (piStack_50 == (int *)0x0) {
        ExceptionList = piStack_94;
        return uVar2;
      }
      (**(code **)(*piStack_50 + 8))(piStack_50);
      ExceptionList = piStack_94;
      return uVar2;
    }
    if (piVar7 != (int *)0x7) {
      ExceptionList = piStack_94;
      return uVar2;
    }
  }
  if (piStack_50 != (int *)0x0) {
    DVar6 = 0;
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,DVar6,piStack_50);
  }
  ExceptionList = piStack_94;
  return uVar2;
}

