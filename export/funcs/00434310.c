
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434310(undefined4 param_1,int param_2)

{
  int iVar1;
  HANDLE hHeap;
  char unaff_retaddr;
  undefined4 uVar2;
  float *pfVar3;
  uint *puVar4;
  int *piStack_98;
  int *piStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  int *piStack_88;
  float fStack_84;
  float fStack_80;
  int *piStack_7c;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  DWORD dwFlags;
  int iStack_50;
  int *piStack_4c;
  undefined4 uStack_44;
  uint uStack_38;
  undefined4 uStack_30;
  float fStack_2c;
  byte *pbStack_28;
  int *piStack_24;
  int aiStack_18 [2];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005b90b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005792b0();
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return;
  }
  if (param_2 == -1) {
    ExceptionList = local_c;
    return;
  }
  puStack_74 = (undefined1 *)0x434366;
  (**(code **)(**(int **)Pipeline_exref + 0xf4))();
  puStack_74 = &stack0xffffffa0;
  piStack_7c = *(int **)Pipeline_exref;
  uStack_78 = 0xe;
  fStack_80 = 6.177194e-39;
  (**(code **)(*piStack_7c + 0xf4))();
  if (unaff_retaddr == '\0') {
    piStack_88 = *(int **)Pipeline_exref;
    fStack_80 = 1.12104e-44;
    fStack_84 = 3.22299e-44;
    uStack_8c = 0x4343b3;
    (**(code **)(*piStack_88 + 0xf0))();
  }
  else {
    piStack_88 = *(int **)Pipeline_exref;
    fStack_80 = 5.60519e-45;
    fStack_84 = 3.22299e-44;
    uStack_8c = 0x43439b;
    (**(code **)(*piStack_88 + 0xf0))();
  }
  uStack_8c = (uint)(unaff_retaddr == '\0');
  piStack_94 = *(int **)Pipeline_exref;
  uStack_90 = 0xe;
  piStack_98 = (int *)0x4343c8;
  (**(code **)(*piStack_94 + 0xf0))();
  uStack_8c = 0;
  aiStack_18[0] = 0;
  piStack_98 = (int *)0x4343dd;
  FUN_00526a20();
  piStack_98 = aiStack_18;
  iVar1 = (**(code **)**(undefined4 **)Engine_exref)
                    (*(undefined4 **)Engine_exref,"1.11_IFLAppearance");
  if (iVar1 < 0) {
    if (piStack_24 != (int *)0x0) {
      (**(code **)(*piStack_24 + 8))(piStack_24);
    }
  }
  else {
    (**(code **)(*piStack_24 + 0x20))(piStack_24,uStack_30,&piStack_98);
    FUN_00526a20();
  }
  uStack_8c = 4;
  piStack_88 = (int *)((float)*pbStack_28 * (float)_DAT_005c89c8);
  puVar4 = &uStack_8c;
  fStack_84 = (float)pbStack_28[1] * (float)_DAT_005c89c8;
  fStack_80 = (float)pbStack_28[2] * (float)_DAT_005c89c8;
  piStack_7c = (int *)((float)pbStack_28[3] * (float)_DAT_005c89c8);
  (**(code **)(*piStack_98 + 0x4c))(piStack_98,0,puVar4);
  if (fStack_2c == (float)_DAT_005c89b8) {
    pfVar3 = (float *)0x0;
  }
  else {
    puStack_74 = (undefined1 *)0x3f800000;
    fStack_84 = 1.0;
    uStack_78 = 0;
    piStack_7c = (int *)0x0;
    fStack_80 = 0.0;
    if (DAT_00667e38 == (int *)0x0) {
      DAT_00667e38 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00667e38 + 0x10))(DAT_00667e38,&fStack_84,&fStack_84,fStack_2c);
    pfVar3 = &fStack_84;
    uStack_38 = uStack_38 | 0x30;
  }
  uVar2 = 0x3f800000;
  (**(code **)(**(int **)Renderer_exref + 0x1c))
            (*(int **)Renderer_exref,uStack_44,param_2,0x3f800000,uStack_38,pfVar3,puVar4);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x17,uVar2);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,uStack_44);
  uStack_4 = 0xffffffff;
  if (iStack_50 != 5) {
    if (iStack_50 == 6) {
      if (piStack_4c == (int *)0x0) {
        ExceptionList = local_c;
        return;
      }
      (**(code **)(*piStack_4c + 8))();
      ExceptionList = pvStack_10;
      return;
    }
    if (iStack_50 != 7) {
      ExceptionList = local_c;
      return;
    }
  }
  if (piStack_4c != (int *)0x0) {
    dwFlags = 0;
    hHeap = GetProcessHeap();
    puStack_74 = (undefined1 *)0x4345ea;
    HeapFree(hHeap,dwFlags,piStack_4c);
  }
  ExceptionList = local_c;
  return;
}

