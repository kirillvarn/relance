
undefined4 __thiscall FUN_0044c290(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int **ppiVar5;
  int iVar6;
  float10 fVar7;
  int *apiStack_8c [3];
  int iStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  int *piStack_74;
  int local_58;
  
  *(undefined1 *)(param_1 + 0x1338) = 0;
  DAT_0066d359 = 0;
  iVar4 = *(int *)(param_1 + 0x40);
  iVar6 = 0;
  if (*(int *)(iVar4 + 0x138) == 0) {
    local_58 = 0;
  }
  else {
    local_58 = *(int *)(iVar4 + 0x13c) - *(int *)(iVar4 + 0x138) >> 2;
  }
  if (0 < local_58) {
    do {
      puVar3 = *(undefined4 **)(*(int *)(iVar4 + 0x138) + iVar6 * 4);
      piStack_74 = (int *)0x44c2e8;
      iVar1 = stricmp(param_2,(char *)*puVar3);
      if (iVar1 == 0) {
        if (DAT_00668ac0 == (int *)0x0) {
          DAT_00668ac0 = (int *)FUN_005b73e0();
        }
        piStack_78 = (int *)0x44c328;
        piStack_74 = DAT_00668ac0;
        (**(code **)(*DAT_00668ac0 + 0x50))();
        *(undefined4 *)(param_1 + 0x1358) = puVar3[1];
        *(undefined4 *)(param_1 + 0x135c) = puVar3[2];
        *(undefined4 *)(param_1 + 0x1360) = puVar3[3];
        *(undefined4 *)(param_1 + 0x1364) = puVar3[0xd];
        *(undefined4 *)(param_1 + 0x1368) = puVar3[0xe];
        *(undefined4 *)(param_1 + 0x136c) = puVar3[0xf];
        piStack_78 = *(int **)(param_1 + 0x500);
        uStack_7c = 0x44c36a;
        uVar2 = (**(code **)(*piStack_78 + 0x10))();
        iStack_80 = param_1 + 0x1370;
        if (DAT_00668ac0 == (int *)0x0) {
          uStack_7c = 0x44c380;
          DAT_00668ac0 = (int *)FUN_005b73e0();
        }
        apiStack_8c[1] = (int *)0x44c38d;
        apiStack_8c[2] = DAT_00668ac0;
        uStack_7c = uVar2;
        (**(code **)(*DAT_00668ac0 + 0x50))();
        apiStack_8c[1] = *(int **)(param_1 + 0x500);
        apiStack_8c[0] = (int *)0x44c399;
        puVar3 = (undefined4 *)(**(code **)(*apiStack_8c[1] + 0xc))();
        *(undefined4 *)(param_1 + 0x1380) = *puVar3;
        *(undefined4 *)(param_1 + 0x1384) = puVar3[1];
        *(undefined4 *)(param_1 + 5000) = puVar3[2];
        apiStack_8c[0] = *(int **)(param_1 + 0x500);
        fVar7 = (float10)(**(code **)(*apiStack_8c[0] + 0x18))();
        *(float *)(param_1 + 0x138c) = (float)fVar7;
        fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x500) + 0x20))
                                   (*(int **)(param_1 + 0x500));
        *(float *)(param_1 + 0x1390) = (float)fVar7;
        fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x500) + 0x24))
                                   (*(int **)(param_1 + 0x500));
        *(float *)(param_1 + 0x1394) = (float)fVar7;
        if (DAT_00668ac0 == (int *)0x0) {
          DAT_00668ac0 = (int *)FUN_005b73e0();
        }
        (**(code **)(*DAT_00668ac0 + 0x54))(DAT_00668ac0,&iStack_80,param_1 + 0x1348);
        ppiVar5 = apiStack_8c;
        puVar3 = (undefined4 *)&stack0xffffff98;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar3 = *ppiVar5;
          ppiVar5 = ppiVar5 + 1;
          puVar3 = puVar3 + 1;
        }
        FUN_00556cd0(*(undefined4 *)(param_1 + 0x500),&stack0xffffff98);
        FUN_00556ce0(*(undefined4 *)(param_1 + 0x500),*(undefined4 *)(param_1 + 0x1364));
        FUN_00556e00(*(undefined4 *)(param_1 + 0x500),*(undefined4 *)(param_1 + 0x1368));
        FUN_00556f10(*(undefined4 *)(param_1 + 0x500),*(undefined4 *)(param_1 + 0x136c));
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_58);
  }
  return 0;
}

