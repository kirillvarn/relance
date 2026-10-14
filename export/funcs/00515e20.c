
void FUN_00515e20(int *param_1)

{
  ID_String *this;
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [48];
  
  piVar8 = param_1;
  iVar1 = param_1[0x58];
  if (iVar1 != 0) {
    iVar4 = (**(code **)(*param_1 + 0x20))();
    for (puVar5 = (undefined4 *)**(undefined4 **)(iVar1 + 0xc);
        *(undefined4 **)(iVar1 + 0xc) != puVar5; puVar5 = (undefined4 *)*puVar5) {
      if (puVar5[2] == iVar4) {
        if ((-1 < (char)piVar8[0x61]) || ((*(byte *)((int)piVar8 + 0x185) & 4) != 0))
        goto LAB_00515fde;
        piVar6 = (int *)FUN_0054baf0();
        if (*(int *)(iVar1 + 0x14) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar1 + 0x14) + -8;
        }
        param_1 = (int *)FUN_005140c0(iVar4);
        if (piVar8 == piVar6) {
          *(byte *)(piVar8 + 0x61) = *(byte *)(piVar8 + 0x61) & 0xbf;
          FUN_00515640();
        }
        cVar2 = FUN_00503330();
        if (cVar2 != '\0') {
          FUN_004fcef0(piVar8 + 0x59);
        }
        if (*(int *)(piVar8[0x58] + 0x14) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(piVar8[0x58] + 0x14) + -8;
        }
        if (*(char *)(iVar4 + 0x1f0) == '\0') {
          piVar6 = (int *)FUN_0054baf0();
          if (piVar8 == piVar6) {
            this = (ID_String *)(param_1 + 0x19);
            bVar3 = ID_String::IsEmpty(this);
            if (!bVar3) {
              (**(code **)(*piVar8 + 0x2c))(&param_1,auStack_3c);
              fStack_40 = -(float)param_1;
              uStack_48 = 0;
              uStack_44 = 0;
              FUN_00514010(&uStack_48);
              uVar9 = 0;
              uVar7 = FUN_00422b80(0,0,0);
              FUN_00515dd0(this,auStack_30,uVar7,uVar9);
              goto LAB_00515fd7;
            }
          }
          uVar10 = 0;
          uVar7 = FUN_004b5150(0);
          uVar9 = (**(code **)(*piVar8 + 0x1c))(uVar7);
          FUN_00514070(param_1 + 0x1e,piVar8,uVar9,uVar7,uVar10);
        }
        else {
          FUN_00514bf0(piVar8,0);
        }
LAB_00515fd7:
        *(byte *)((int)piVar8 + 0x185) = *(byte *)((int)piVar8 + 0x185) | 5;
LAB_00515fde:
        piVar6 = (int *)FUN_0054baf0();
        if (piVar8 == piVar6) {
          FUN_00515640();
          *(byte *)(piVar8 + 0x61) = *(byte *)(piVar8 + 0x61) & 0xbf;
        }
        cVar2 = FUN_00503330();
        if (cVar2 != '\0') {
          FUN_004fcef0(piVar8 + 0x59);
        }
        piVar8[0x61] = 0;
        piVar8[0x58] = 0;
        param_1 = puVar5;
        piVar8 = (int *)FUN_0053ab20(auStack_4c,0);
        piVar8 = (int *)*piVar8;
        *(int *)piVar8[1] = *piVar8;
        *(int *)(*piVar8 + 4) = piVar8[1];
        FUN_005b7e1d(piVar8);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
        return;
      }
    }
    puVar5 = (undefined4 *)FUN_00411c50(0x10000,1);
    (**(code **)FDUMP_exref)
              (*puVar5,"%s(%d) : ERROR:General:%s",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\tradelane.cpp",0x367,"bad things (tm)");
  }
  return;
}

