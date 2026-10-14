
/* WARNING: Removing unreachable block (ram,0x0042d449) */
/* WARNING: Removing unreachable block (ram,0x0042d455) */

void __fastcall FUN_0042d1d0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  HANDLE pvVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  DWORD DVar9;
  int *lpMem;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  int *piStack_4a0;
  int iStack_49c;
  int *piStack_498;
  uint uStack_480;
  undefined4 *puStack_47c;
  int local_474;
  undefined4 *local_470;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  char acStack_434 [12];
  undefined1 auStack_428 [1012];
  uint uStack_34;
  char *pcStack_2c;
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005b8d8c;
  pvStack_c = ExceptionList;
  piStack_4a0 = *(int **)MaterialLib_exref;
  piStack_498 = &local_474;
  pcVar5 = (char *)*param_1;
  iStack_49c = 0;
  ExceptionList = &pvStack_c;
  local_470 = param_1;
  (**(code **)(*piStack_4a0 + 0x54))();
  uVar7 = 0;
  if (uStack_480 != 0) {
    do {
      piVar12 = (int *)&stack0xfffffb78;
      uVar11 = uVar7;
      (**(code **)(**(int **)MaterialLib_exref + 0x58))(*(int **)MaterialLib_exref,0);
      (**(code **)(*piStack_498 + 0x30))(piStack_498,auStack_428);
      uVar4 = 0xffffffff;
      pcVar6 = pcVar5;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar2 = _strnicmp(acStack_434,pcVar5,~uVar4 - 1);
      if (iVar2 == 0) {
        (**(code **)(*piVar12 + 0x40))(piVar12,&piStack_4a0);
        uVar10 = 0;
        uVar7 = 0;
        if (uVar11 == 0) goto LAB_0042d47e;
        goto LAB_0042d2e0;
      }
      (**(code **)(*piVar12 + 8))(piVar12);
      uVar7 = uVar7 + 1;
      param_1 = puStack_47c;
    } while (uVar7 < uStack_480);
  }
  (**(code **)FDUMP_exref)
            (0x100001,"%s(%d) : *** ERROR: cannot find material name %s\n",
             "E:\\FL\\Scratch\\Source\\Client\\cmn\\SwappedMaterial.cpp",0xdf,*param_1);
  ExceptionList = pvStack_18;
  return;
LAB_0042d2e0:
  local_474 = 0;
  uStack_464 = 0;
  uStack_460 = 0;
  uStack_450 = 0;
  uStack_44c = 0;
  uStack_34 = 0;
  (**(code **)(*piVar12 + 0x44))(piVar12,uVar7,&stack0xfffffb78);
  iVar2 = 8;
  bVar8 = true;
  pcVar5 = (char *)0x0;
  pcVar6 = "Dt_name";
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *pcVar5 == *pcVar6;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar8);
  if (bVar8) {
    iStack_49c = 0;
    piStack_498 = (int *)0x0;
    uStack_34 = CONCAT31(uStack_34._1_3_,1);
    (**(code **)(*piVar12 + 0x48))(piVar12,uVar7,&iStack_49c);
    if (iStack_49c == 7) {
      if (piStack_498 != (int *)0x0) {
        DVar9 = 0;
        lpMem = piStack_498;
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,DVar9,lpMem);
        piStack_498 = (int *)0x0;
      }
      pcVar5 = pcStack_2c;
      if (pcStack_2c != (char *)0x0) {
        uVar4 = 0xffffffff;
        pcVar6 = pcStack_2c;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        DVar9 = 0;
        pvVar3 = GetProcessHeap();
        piStack_498 = HeapAlloc(pvVar3,DVar9,uVar4);
        pcVar6 = (char *)piStack_498;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
      }
      (**(code **)(*piVar12 + 0x4c))(piVar12,uVar7,&iStack_49c);
      uVar10 = 0x1000000;
    }
    uStack_34 = uStack_34 & 0xffffff00;
    if (iStack_49c == 5) {
LAB_0042d3de:
      FUN_0042d030(0);
    }
    else if (iStack_49c == 6) {
      FUN_0042d090(0);
    }
    else if (iStack_49c == 7) goto LAB_0042d3de;
    piStack_498 = (int *)0x0;
  }
  uStack_34 = 3;
  FUN_0042cfd0();
  uStack_34 = CONCAT31(uStack_34._1_3_,2);
  FUN_0042cfd0();
  uStack_34 = 0xffffffff;
  uVar7 = uVar7 + 1;
  local_474 = 0;
  if (uVar11 <= uVar7) {
    if ((char)((uint)uVar10 >> 0x18) == '\0') {
LAB_0042d47e:
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: Cannot find Dt_name parameter in material %s",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\SwappedMaterial.cpp",0xd4,*piStack_4a0);
    }
    (**(code **)(*piVar12 + 0x18))(piVar12,0,0x3f800000);
    (**(code **)(*piVar12 + 8))(piVar12);
    ExceptionList = pvStack_18;
    return;
  }
  goto LAB_0042d2e0;
}

