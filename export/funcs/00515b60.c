
int FUN_00515b60(int *param_1)

{
  ID_String *this;
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  CEquip *pCVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [48];
  
  piVar3 = param_1;
  iVar1 = param_1[0x58];
  if (iVar1 != 0) {
    iVar6 = (**(code **)(*param_1 + 0x20))();
    for (piVar2 = (int *)**(int **)(iVar1 + 0xc); *(int **)(iVar1 + 0xc) != piVar2;
        piVar2 = (int *)*piVar2) {
      if (piVar2[2] == iVar6) {
        if ((-1 < (char)piVar3[0x61]) || ((*(byte *)((int)piVar3 + 0x185) & 4) != 0))
        goto LAB_00515d57;
        piVar7 = (int *)FUN_0054baf0();
        iVar6 = *(int *)(iVar1 + 0x14);
        if (((iVar6 == 0) ||
            (((iVar6 == 8 || (iVar6 == -4)) || (iVar6 = *(int *)(iVar6 + 8), iVar6 == 0)))) ||
           ((*(uint *)(iVar6 + 0x4c) & 0x303) != 0x303)) {
          iVar6 = 0;
        }
        pCVar8 = CEquipManager::FindFirst((CEquipManager *)(iVar6 + 0xe4),0x800000);
        if (pCVar8 == (CEquip *)0x0) {
          param_1 = (int *)0x0;
        }
        else if (*(int *)(pCVar8 + 0xc) == 0) {
          param_1 = (int *)0x0;
        }
        else {
          param_1 = *(int **)(*(int *)(pCVar8 + 0xc) + 4);
        }
        if (piVar3 == piVar7) {
          *(byte *)(piVar3 + 0x61) = *(byte *)(piVar3 + 0x61) & 0xbf;
          FUN_00515640();
        }
        cVar4 = FUN_00503330();
        if (cVar4 != '\0') {
          FUN_004fcef0(piVar3 + 0x59);
        }
        if (*(int *)(piVar3[0x58] + 0x14) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(piVar3[0x58] + 0x14) + -8;
        }
        if (*(char *)(iVar6 + 0x1f0) == '\0') {
          piVar7 = (int *)FUN_0054baf0();
          if (piVar3 == piVar7) {
            this = (ID_String *)(param_1 + 0x19);
            bVar5 = ID_String::IsEmpty(this);
            if (!bVar5) {
              (**(code **)(*piVar3 + 0x2c))(&param_1,auStack_3c);
              fStack_40 = -(float)param_1;
              uStack_48 = 0;
              uStack_44 = 0;
              FUN_00514010(&uStack_48);
              uVar10 = 0;
              uVar9 = FUN_00422b80(0,0,0);
              FUN_00515dd0(this,auStack_30,uVar9,uVar10);
              goto LAB_00515d50;
            }
          }
          uVar11 = 0;
          uVar9 = FUN_004b5150(0);
          uVar10 = (**(code **)(*piVar3 + 0x1c))(uVar9);
          FUN_00514070(param_1 + 0x1e,piVar3,uVar10,uVar9,uVar11);
        }
        else {
          FUN_00514bf0(piVar3,0);
        }
LAB_00515d50:
        *(byte *)((int)piVar3 + 0x185) = *(byte *)((int)piVar3 + 0x185) | 5;
LAB_00515d57:
        piVar7 = (int *)FUN_0054baf0();
        if (piVar3 == piVar7) {
          FUN_00515640();
          *(byte *)(piVar3 + 0x61) = *(byte *)(piVar3 + 0x61) & 0xbf;
        }
        cVar4 = FUN_00503330();
        if (cVar4 != '\0') {
          FUN_004fcef0(piVar3 + 0x59);
        }
        piVar3[0x61] = 0;
        piVar3[0x58] = 0;
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        FUN_005b7e1d(piVar2);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
        return iVar1;
      }
    }
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : ERROR:General:%s",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\tradelane.cpp",0x367,"bad things (tm)");
  }
  return 0;
}

