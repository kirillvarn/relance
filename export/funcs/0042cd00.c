
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __fastcall FUN_0042cd00(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  HANDLE hHeap;
  uint uVar4;
  char *unaff_EBX;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  DWORD dwFlags;
  int *piVar10;
  int *piStack_4a8;
  int *piStack_4a4;
  int *piStack_4a0;
  undefined1 auStack_48c [4];
  undefined4 uStack_488;
  int *piStack_484;
  undefined4 uStack_480;
  undefined4 *local_47c;
  int local_478 [5];
  int iStack_464;
  undefined4 uStack_460;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  char acStack_434 [12];
  undefined1 auStack_428 [1012];
  uint uStack_34;
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005b8d2c;
  pvStack_c = ExceptionList;
  piStack_4a8 = *(int **)MaterialLib_exref;
  pcVar8 = (char *)*param_1;
  piStack_4a0 = local_478;
  piStack_4a4 = (int *)0x0;
  ExceptionList = &pvStack_c;
  local_47c = param_1;
  (**(code **)(*piStack_4a8 + 0x54))();
  piVar5 = (int *)0x0;
  if (piStack_484 != (int *)0x0) {
    do {
      (**(code **)(**(int **)MaterialLib_exref + 0x58))(*(int **)MaterialLib_exref,0);
      (**(code **)(*piStack_4a4 + 0x30))(piStack_4a4,auStack_428);
      uVar4 = 0xffffffff;
      pcVar7 = pcVar8;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar3 = _strnicmp(acStack_434,pcVar8,~uVar4 - 1);
      if (iVar3 == 0) {
        (**(code **)(*piVar5 + 0x40))(piVar5,&piStack_4a8);
        bVar2 = false;
        piVar10 = (int *)0x0;
        if (piVar5 != (int *)0x0) goto LAB_0042cde6;
        goto LAB_0042cf8a;
      }
      (**(code **)(*piVar5 + 8))(piVar5);
      piVar5 = (int *)((int)piVar5 + 1);
    } while (piVar5 < piStack_484);
  }
  ExceptionList = pvStack_18;
  return 0;
LAB_0042cde6:
  local_478[0] = 0;
  local_478[1] = 0;
  iStack_464 = 0;
  uStack_460 = 0;
  uStack_450 = 0;
  uStack_44c = 0;
  uStack_488 = 0;
  piStack_484 = (int *)0x0;
  uStack_480 = 0;
  local_47c = (undefined4 *)0x0;
  uStack_34 = 0;
  (**(code **)(*piVar5 + 0x44))(piVar5,piVar10,&uStack_488);
  iVar3 = 8;
  bVar9 = true;
  piVar6 = piStack_484;
  pcVar8 = "Dt_name";
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar9 = *(char *)piVar6 == *pcVar8;
    piVar6 = (int *)((int)piVar6 + 1);
    pcVar8 = pcVar8 + 1;
  } while (bVar9);
  if (bVar9) {
    piStack_4a4 = (int *)0x0;
    piStack_4a0 = (int *)0x0;
    uStack_34 = CONCAT31(uStack_34._1_3_,1);
    (**(code **)(*piVar5 + 0x48))(piVar5,piVar10,&piStack_4a4);
    if (piStack_4a4 == (int *)0x7) {
      malloc_strcpy((char **)&stack0xfffffb70,(char *)piStack_4a0);
      DACOM_CRC::GetCRC32(unaff_EBX);
      (**(code **)(**(int **)TextureLib_exref + 0x30))
                (*(int **)TextureLib_exref,&stack0xfffffb70,auStack_48c);
      bVar2 = true;
    }
    uStack_34 = uStack_34 & 0xffffff00;
    if (piStack_4a4 == (int *)0x5) {
LAB_0042cec2:
      if (piStack_4a0 != (int *)0x0) {
        dwFlags = 0;
        piVar6 = piStack_4a0;
        hHeap = GetProcessHeap();
        HeapFree(hHeap,dwFlags,piVar6);
      }
    }
    else if (piStack_4a4 == (int *)0x6) {
      FUN_0042d090(0);
    }
    else if (piStack_4a4 == (int *)0x7) goto LAB_0042cec2;
    piStack_4a0 = (int *)0x0;
  }
  uStack_34 = 3;
  uStack_488 = 0;
  piStack_484 = (int *)0x0;
  uStack_480 = 0;
  local_47c = (undefined4 *)0x0;
  FUN_0042cfd0();
  uStack_34 = CONCAT31(uStack_34._1_3_,2);
  if (iStack_464 == 5) {
LAB_0042cf39:
    FUN_0042d030(0);
  }
  else if (iStack_464 == 6) {
    FUN_0042d090(0);
  }
  else if (iStack_464 == 7) goto LAB_0042cf39;
  uStack_460 = 0;
  uStack_34 = 0xffffffff;
  if (local_478[0] == 5) {
LAB_0042cf61:
    FUN_0042d030(0);
  }
  else if (local_478[0] == 6) {
    FUN_0042d090(0);
  }
  else if (local_478[0] == 7) goto LAB_0042cf61;
  piVar10 = (int *)((int)piVar10 + 1);
  local_478[1] = 0;
  if (piVar5 <= piVar10) {
    if (!bVar2) {
LAB_0042cf8a:
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: Cannot find Dt_name parameter in material %s",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\SwappedMaterial.cpp",0x9c,0);
    }
    (**(code **)(*piVar5 + 8))(piVar5);
    ExceptionList = pvStack_18;
    return 1;
  }
  goto LAB_0042cde6;
}

