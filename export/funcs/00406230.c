
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00406230(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int *unaff_EBX;
  short sVar9;
  int *piVar10;
  int *piVar11;
  undefined1 *puVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  int iVar17;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  int *apiStack_40 [2];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [44];
  
  local_50 = 0;
  local_54 = 0;
  local_48 = 0;
  local_5c = (int *)0x0;
  local_4c = 0;
  if ((param_1[2] != 0) && (param_1[3] == 0)) {
    piStack_74 = (int *)0x406271;
    pvVar2 = operator_new(param_1[2] * 2);
    piStack_74 = (int *)0x0;
    param_1[3] = pvVar2;
    piStack_78 = param_2;
    piStack_7c = (int *)0x406280;
    (**(code **)(*param_2 + 0x24))();
    piStack_7c = (int *)0x80;
    (**(code **)(*param_2 + 0x48))(param_2);
    (**(code **)(*param_2 + 0x58))(param_2,0x80,&stack0xffffffa0,auStack_34,auStack_38,&local_48);
    pvVar2 = operator_new((int)unaff_EBX << 4);
    param_1[1] = pvVar2;
    (**(code **)(*param_2 + 0x28))(param_2);
    piStack_74 = (int *)0x4062cd;
    local_5c = operator_new((int)unaff_EBX * 2);
    piVar11 = local_5c;
    for (uVar6 = ((uint)unaff_EBX & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      *piVar11 = -1;
      piVar11 = piVar11 + 1;
    }
    for (uVar6 = (int)unaff_EBX * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)piVar11 = 0xff;
      piVar11 = (int *)((int)piVar11 + 1);
    }
  }
  piVar11 = local_5c;
  piStack_74 = param_2;
  local_58 = 0;
  piStack_78 = (int *)0x4062fe;
  (**(code **)(*param_2 + 0x20))();
  apiStack_40[0] = (int *)0x0;
  if (unaff_EBX != (int *)0x0) {
    do {
      piVar10 = apiStack_40[0];
      piStack_78 = (int *)0x1;
      piStack_7c = apiStack_40[0];
      iVar3 = (**(code **)(*param_2 + 0x24))(param_2);
      if (-1 < iVar3) {
        piStack_78 = (int *)0x180;
        piStack_7c = param_2;
        iVar3 = (**(code **)(*param_2 + 0x48))();
        if (iVar3 == -8) {
          (**(code **)(*param_2 + 0x28))(param_2);
          return 0;
        }
        iVar17 = 0x180;
        (**(code **)(*param_2 + 0x50))(param_2);
        puVar16 = auStack_30;
        iVar3 = 0x100;
        piVar13 = param_2;
        (**(code **)(*param_2 + 0x58))(param_2,0x100,auStack_44,auStack_2c,puVar16,auStack_34);
        puVar7 = &stack0xffffffa0;
        piVar10 = param_2;
        (**(code **)(*param_2 + 0x60))(param_2,0x100,puVar7,apiStack_40);
        (**(code **)(*param_2 + 0x60))(param_2,0x80,&stack0xffffff98,&piStack_7c);
        uVar6 = 0;
        if (((uint)puVar16 & 0xfffffffe) != 0) {
          do {
            if ((*(char *)((int)param_1 + 0x1b) == '\0') &&
               ((float)piStack_7c[*(ushort *)(iVar17 + uVar6 * 2)] < (float)_DAT_005c7720 !=
                ((float)piStack_7c[*(ushort *)(iVar17 + uVar6 * 2)] == (float)_DAT_005c7720)))
            break;
            if (param_1[3] != 0) {
              local_4c = uVar6 * 4;
              iVar14 = 2;
              puVar12 = puVar7;
              uVar15 = uVar6;
              do {
                uVar4 = (uint)*(ushort *)(local_4c + (int)piStack_78);
                sVar9 = *(short *)((int)piVar11 + uVar4 * 2);
                puVar7 = puVar12;
                if (sVar9 == -1) {
                  puVar7 = puVar12 + 1;
                  *(short *)((int)piVar11 + uVar4 * 2) = (short)puVar12;
                  piVar1 = piVar13 + uVar4 * 3;
                  piVar11 = piVar10;
                  uVar6 = uVar15;
                  if (DAT_0061649c == (int *)0x0) {
                    DAT_0061649c = (int *)FUN_005b73e0();
                    piVar11 = piVar10;
                    uVar6 = uVar15;
                  }
                  (**(code **)(*DAT_0061649c + 0x28))(DAT_0061649c,&local_5c,local_48,piVar1);
                  iVar5 = ((uint)puVar12 & 0xffff) * 0x10;
                  puVar8 = (undefined4 *)(param_1[1] + iVar5);
                  *puVar8 = local_5c;
                  puVar8[1] = local_58;
                  puVar8[2] = local_54;
                  *(undefined4 *)(param_1[1] + 0xc + iVar5) = param_1[5];
                  piVar10 = piVar11;
                  uVar15 = uVar6;
                  sVar9 = (short)puVar12;
                }
                *(short *)(param_1[3] + iVar3 * 2) = sVar9;
                iVar3 = iVar3 + 1;
                local_4c = local_4c + 2;
                iVar14 = iVar14 + -1;
                puVar12 = puVar7;
              } while (iVar14 != 0);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)puVar16 >> 1);
        }
        (**(code **)(*param_2 + 0x28))(param_2);
        piVar10 = apiStack_40[0];
      }
      apiStack_40[0] = (int *)((int)piVar10 + 1);
    } while (apiStack_40[0] < unaff_EBX);
  }
  if (param_1[1] != 0) {
    *param_1 = local_5c;
  }
  if (piVar11 != (int *)0x0) {
    piStack_7c = (int *)0x4064e7;
    piStack_78 = piVar11;
    FUN_005b7e1d();
  }
  return local_58;
}

