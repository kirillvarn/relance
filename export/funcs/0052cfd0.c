
void __fastcall FUN_0052cfd0(int param_1)

{
  CELauncher *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  Barrel *pBVar7;
  int iVar8;
  Barrel *pBVar9;
  undefined4 *puVar10;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [12];
  undefined4 auStack_30 [9];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  this = *(CELauncher **)(param_1 + 4);
  iVar8 = 0;
  if ((this != (CELauncher *)0x0) && (*(int *)(this + 0xc) != 0)) {
    iVar8 = *(int *)(*(int *)(this + 0xc) + 4);
  }
  CELauncher::GetBarrelPosWS(this,(uint)&local_54);
  if ((*(int **)(param_1 + 4) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))(), cVar1 == '\0')) {
    if (*(int *)(param_1 + 0x10) != -1) {
      (**(code **)(**(int **)Anim_exref + 0x2c))
                (*(int **)Anim_exref,*(int *)(param_1 + 0x10),0,0,0x3f800000,0,0x3f800000,0x3f800000
                 ,0);
      AnimDB::Add(*(int *)(param_1 + 0x10));
    }
    cVar1 = FUN_0054bc80();
    if (cVar1 != '\0') {
      iVar3 = FUN_0054baf0();
      if ((((iVar3 == 0) || (iVar3 == -0xc)) || (iVar3 = *(int *)(iVar3 + 0x10), iVar3 == 0)) ||
         ((*(uint *)(iVar3 + 0x4c) & 0x503) != 0x503)) {
        iVar3 = 0;
      }
      if (iVar3 == *(int *)(*(int *)(param_1 + 4) + 4)) {
        if (*(int *)(iVar8 + 0x5c) == 0) {
          return;
        }
        iVar3 = FUN_00538e80(iVar8 + 0x60);
        if (iVar3 != 0) {
          uStack_48 = local_54;
          uStack_58 = 0xffffffff;
          uStack_44 = uStack_50;
          uStack_40 = uStack_4c;
          piVar4 = (int *)FUN_00537af0(&uStack_48,&uStack_58,*(undefined4 *)(iVar8 + 0x58));
          if (piVar4 == (int *)0x0) {
            pcVar6 = ID_String::get_string((ID_String *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 8))
            ;
            (**(code **)FDUMP_exref)
                      (0x100002,"%s(%d) : *** WARNING: Light creation for gun failed: %s\n",
                       "E:\\FL\\Scratch\\Source\\Client\\Space\\CliLauncher.cpp",0x13b,pcVar6);
            return;
          }
          uVar5 = (**(code **)(**(int **)(param_1 + 8) + 4))(auStack_3c);
          FUN_005377a0(uVar5);
          cVar1 = FUN_00537960(iVar3,0x3f800000,0x3f800000,0);
          if (cVar1 == '\0') {
            (**(code **)(*piVar4 + 8))();
          }
          FUN_00537ad0();
          return;
        }
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: light animation (%s) is not defined\n",
                   "E:\\FL\\Scratch\\Source\\Client\\Space\\CliLauncher.cpp",0x140,iVar8 + 0x60);
        return;
      }
    }
    bVar2 = ID_String::IsEmpty((ID_String *)(iVar8 + 0x54));
    if (!bVar2) {
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_004f8110();
        (**(code **)(**(int **)(param_1 + 0x28) + 4))();
        FUN_004f7a90();
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      pBVar7 = CELauncher::GetBarrelInfo(*(CELauncher **)(param_1 + 4),0);
      if (*(int *)pBVar7 != -1) {
        uStack_58 = FUN_0040f080((ID_String *)(iVar8 + 0x54));
        iVar8 = FUN_004f79a0(0x84);
        if (iVar8 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_004f8060(0);
        }
        *(undefined4 *)(param_1 + 0x28) = uVar5;
        puVar10 = auStack_30;
        pBVar9 = pBVar7;
        for (iVar8 = 9; pBVar9 = pBVar9 + 4, iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar10 = *(undefined4 *)pBVar9;
          puVar10 = puVar10 + 1;
        }
        uStack_c = *(undefined4 *)(pBVar7 + 0x28);
        uStack_8 = *(undefined4 *)(pBVar7 + 0x2c);
        uStack_4 = *(undefined4 *)(pBVar7 + 0x30);
        FUN_004f7d20(*(undefined4 *)(param_1 + 8),*(undefined4 *)pBVar7,auStack_30);
        cVar1 = (**(code **)**(undefined4 **)(param_1 + 0x28))(uStack_58);
        if (cVar1 == '\0') {
          FUN_004f7a90();
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
      }
    }
  }
  return;
}

