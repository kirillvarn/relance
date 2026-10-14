
void __fastcall FUN_004a2370(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  ISystem *pIVar6;
  undefined4 uVar7;
  uint uVar8;
  size_t _Count;
  byte bStack_16e;
  byte local_16d;
  wchar_t *pwStack_16c;
  undefined4 uStack_168;
  int local_164;
  int local_160;
  void *pvStack_15c;
  undefined4 uStack_158;
  int local_154;
  uint uStack_150;
  uint uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined4 uStack_128;
  undefined4 uStack_124;
  char acStack_120 [64];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  int iStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined4 uStack_54;
  undefined1 uStack_50;
  byte bStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bcb36;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x1004) == '\0') {
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0x1004) = 1;
    local_154 = param_1;
    FUN_004a2fd0(*(undefined4 *)(param_1 + 0xfd8),*(undefined4 *)(param_1 + 0xfdc));
    FUN_004a3240(*(undefined4 *)(param_1 + 0xfe8),*(undefined4 *)(param_1 + 0xfec));
    FUN_004a3240(*(undefined4 *)(param_1 + 0xff8),*(undefined4 *)(param_1 + 0xffc));
    local_164 = 0;
    pIVar6 = Universe::GetFirstSystem();
    if (pIVar6 != (ISystem *)0x0) {
      local_160 = -1;
      do {
        local_16d = 0;
        uVar7 = (*(code *)**(undefined4 **)pIVar6)(&local_16d,0,0);
        FUN_004c4da0(uVar7);
        bVar4 = (**(code **)(*(int *)pIVar6 + 0x48))();
        local_16d = local_16d | bVar4;
        if ((local_16d & 1) != 0) {
          uVar7 = (**(code **)(*(int *)pIVar6 + 0xc))(&DAT_0066fc60,DAT_006119f8);
          FUN_004347e0(DAT_0067eca8,uVar7);
          pvStack_15c = (void *)0x0;
          uStack_158 = 0;
          FUN_00413df0(&DAT_0066fc60,0xffffffff);
          uStack_4 = 0;
          FUN_004a3360(*(undefined4 *)(param_1 + 0xffc),1,&pvStack_15c);
          uStack_4 = 0xffffffff;
          if (pvStack_15c != (void *)0x0) {
            free(pvStack_15c);
            pvStack_15c = (void *)0x0;
            uStack_158 = 0;
          }
          local_160 = local_160 + 1;
          uStack_124 = 0;
          acStack_120[0] = '\0';
          uStack_c8 = 0;
          uStack_c4 = 0;
          uStack_98 = 0;
          uStack_94 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_14c = (**(code **)(*(int *)pIVar6 + 0x3c))();
          uStack_150 = 0;
          if (uStack_14c != 0) {
            do {
              cVar5 = (**(code **)(*(int *)pIVar6 + 0x40))(uStack_150,&uStack_124);
              if ((cVar5 != '\0') && (iStack_9c != 0)) {
                bStack_16e = 0;
                uVar8 = CreateID(acStack_120);
                FUN_004c4da0(uVar8,&bStack_16e,0,0);
                uVar3 = uStack_dc;
                uVar7 = uStack_e0;
                iVar1 = local_164;
                bStack_16e = bStack_16e | bStack_10;
                if ((((bStack_16e & 1) != 0) &&
                    ((((iStack_d0 != 0x3fc27 && (iStack_d0 != 0x3fc2e)) && (iStack_d0 != 0x3fc28))
                     && ((iStack_d0 != 0xeb41 && (iStack_d0 != 0)))))) &&
                   ((iStack_d0 != 0xeb3f &&
                    (((iStack_d0 != 0x300ea && (iStack_d0 != 0x30052)) &&
                     ((iStack_d0 != 0x3009c && ((iStack_d0 != 0x3009d && (iStack_d0 != 0x300bf))))))
                    )))) {
                  uStack_128 = uStack_d8;
                  uStack_148 = (*(code *)**(undefined4 **)pIVar6)();
                  iVar2 = local_154;
                  local_164 = iVar1 + 1;
                  uStack_140 = uVar3;
                  iStack_134 = local_160;
                  uStack_13c = uStack_128;
                  uStack_144 = uVar7;
                  iStack_138 = iVar1;
                  FUN_004a3680(*(undefined4 *)(local_154 + 0xfdc),1,&uStack_148);
                  FUN_004347e0(DAT_0067eca8,iStack_d0,&DAT_0066fc60,DAT_006119f8);
                  pwStack_16c = (wchar_t *)0x0;
                  uStack_168 = 0;
                  _Count = wcslen(&DAT_0066fc60);
                  FUN_004142a0(_Count + 1);
                  wcsncpy(pwStack_16c,&DAT_0066fc60,_Count);
                  pwStack_16c[_Count] = L'\0';
                  uStack_4 = 1;
                  FUN_004a3360(*(undefined4 *)(iVar2 + 0xfec),1,&pwStack_16c);
                  uStack_4 = 0xffffffff;
                  if (pwStack_16c != (wchar_t *)0x0) {
                    free(pwStack_16c);
                    pwStack_16c = (wchar_t *)0x0;
                    uStack_168 = 0;
                  }
                }
              }
              uStack_150 = uStack_150 + 1;
              param_1 = local_154;
            } while (uStack_150 < uStack_14c);
          }
        }
        pIVar6 = Universe::GetNextSystem();
      } while (pIVar6 != (ISystem *)0x0);
    }
    FUN_004a2760(1);
  }
  ExceptionList = local_c;
  return;
}

