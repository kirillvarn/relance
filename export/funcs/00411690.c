
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00411690(int param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 local_90 [16];
  undefined1 local_80 [128];
  
  iVar1 = stricmp(param_2,"pos");
  if (iVar1 == 0) {
    dVar6 = ValueNum(param_3,2);
    local_98 = (float)dVar6;
    dVar6 = ValueNum(param_3,1);
    local_94 = (float)dVar6;
    dVar6 = ValueNum(param_3,0);
    local_a4 = (float)dVar6;
    local_a0 = local_94;
    local_9c = local_98;
    *(float *)(param_1 + 0x98) = local_a4;
    *(float *)(param_1 + 0x9c) = local_94;
    *(float *)(param_1 + 0xa0) = local_98;
    if (*(int *)(param_1 + 0xb0) != 3) {
      *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x98);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x9c);
      *(float *)(param_1 + 0x48) = -*(float *)(param_1 + 0xa0);
    }
    FUN_00410ec0();
    return 1;
  }
  iVar1 = stricmp(param_2,"range");
  if (iVar1 == 0) {
    dVar6 = ValueNum(param_3,0);
    *(float *)(param_1 + 0x58) = (float)dVar6;
    return 1;
  }
  iVar1 = stricmp(param_2,"color");
  if (iVar1 == 0) {
    dVar6 = ValueNum(param_3,2);
    local_94 = (float)dVar6;
    dVar6 = ValueNum(param_3,1);
    local_98 = (float)dVar6;
    dVar6 = ValueNum(param_3,0);
    local_a4 = (float)dVar6;
    local_9c = local_94;
    local_a0 = local_98;
    FUN_00411bc0(&local_a4);
    puVar2 = (undefined4 *)FUN_00411c80(local_90);
    *(undefined4 *)(param_1 + 0xa4) = *puVar2;
    *(undefined4 *)(param_1 + 0xa8) = puVar2[1];
    *(undefined4 *)(param_1 + 0xac) = puVar2[2];
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xac);
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    FUN_00410ec0();
    return 1;
  }
  iVar1 = stricmp(param_2,"type");
  if (iVar1 == 0) {
    iVar1 = stricmp(param_3,"AMBIENT");
    if (iVar1 == 0) {
      uVar3 = 0xfffffffe;
    }
    else {
      iVar1 = stricmp(param_3,"POINT");
      if (iVar1 == 0) {
        uVar3 = 1;
      }
      else {
        iVar1 = stricmp(param_3,"CONE");
        if (iVar1 == 0) {
          uVar3 = 2;
        }
        else {
          iVar1 = stricmp(param_3,"DIRECTIONAL");
          if (iVar1 == 0) {
            uVar3 = 3;
          }
          else {
            puVar2 = (undefined4 *)FUN_00411c50(0x10000,1);
            (**(code **)FDUMP_exref)
                      (*puVar2,"%s(%d) : *** ERROR: invalid [LightSource] type = \'%s\'",
                       "E:\\FL\\Scratch\\Source\\Client\\cmn\\EngineLight.cpp",0x2ec,param_3);
            uVar3 = 0xffffffff;
          }
        }
      }
    }
    *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xfe;
    switch(uVar3) {
    case 1:
    case 2:
    case 3:
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      break;
    case 0xfffffffe:
      break;
    default:
      *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
      return 1;
    }
    *(undefined4 *)(param_1 + 0xb0) = uVar3;
    return 1;
  }
  iVar1 = stricmp(param_2,"attenuation");
  if (iVar1 == 0) {
    dVar6 = ValueNum(param_3,2);
    local_98 = (float)dVar6;
    dVar6 = ValueNum(param_3,1);
    dVar7 = ValueNum(param_3,0);
    *(float *)(param_1 + 0x60) = (float)dVar7;
    *(float *)(param_1 + 100) = (float)dVar6;
    *(float *)(param_1 + 0x68) = local_98;
    return 1;
  }
  iVar1 = stricmp(param_2,"direction");
  if (iVar1 == 0) {
    dVar6 = ValueNum(param_3,2);
    local_98 = (float)dVar6;
    dVar6 = ValueNum(param_3,1);
    dVar7 = ValueNum(param_3,0);
    local_a4 = (float)dVar7;
    local_9c = local_98;
    local_a0 = (float)dVar6;
    fVar5 = (float10)FUN_00410190();
    fVar5 = (float10)_DAT_005c75dc / fVar5;
    local_a4 = (float)((float10)local_a4 * fVar5);
    local_a0 = (float)((float10)local_a0 * fVar5);
    local_9c = (float)((float10)local_9c * fVar5);
    if (*(int *)(param_1 + 0xb0) != 1) {
      *(float *)(param_1 + 0x54) = -local_9c;
      *(float *)(param_1 + 0x4c) = local_a4;
      *(float *)(param_1 + 0x50) = local_a0;
    }
    FUN_00411350(local_90);
    FUN_00411f70(local_90);
    FUN_00410ec0();
    return 1;
  }
  iVar1 = stricmp(param_2,"ambient_curve");
  if (iVar1 == 0) {
    if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb8) + 0x24))();
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    iVar1 = FUN_00419760(param_3);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0xb8) = iVar1;
      *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 2;
      return 1;
    }
    MessageBoxA((HWND)0x0,param_3,"Error: unknown graph name",0);
    return 1;
  }
  iVar1 = stricmp(param_2,"atten_curve");
  if (iVar1 == 0) {
    pcVar4 = StringIndex(param_3,1);
    if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
      uVar8 = 0;
      uVar3 = FUN_00411cd0(pcVar4,0);
      FUN_004110c0(uVar3,uVar8);
    }
    pcVar4 = StringIndex(param_3,0);
    FUN_00411d90(pcVar4);
    return 1;
  }
  iVar1 = stricmp(param_2,"color_curve");
  if (iVar1 == 0) {
    pcVar4 = StringIndex(param_3,0);
    FUN_00411f00(pcVar4);
    dVar6 = ValueNum(param_3,1);
    FUN_00411e90(local_80,(float)dVar6);
    return 1;
  }
  return 0;
}

