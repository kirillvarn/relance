
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __fastcall FUN_0052d280(int *param_1)

{
  float fVar1;
  char cVar2;
  undefined4 unaff_EBX;
  uint auStack_58 [2];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  vector<unsigned_short,std::allocator<unsigned_short>_> avStack_20 [4];
  undefined4 uStack_1c;
  ushort *puStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c0498;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CELauncher::GetAvgBarrelPosWS((CELauncher *)param_1[1]);
  CELauncher::GetAvgBarrelDirWS((CELauncher *)param_1[1]);
  fVar1 = _DAT_005dd55c / SQRT(local_50 * local_50 + local_48 * local_48 + local_4c * local_4c);
  local_50 = local_50 * fVar1;
  local_4c = local_4c * fVar1;
  local_48 = local_48 * fVar1;
  local_3c = local_48 + local_30;
  local_40 = local_4c + local_34;
  local_44 = local_38 + local_50;
  cVar2 = (**(code **)(*param_1 + 0xc))(&local_44);
  if (cVar2 != '\0') {
    avStack_20[0] = SUB41((uint)unaff_EBX >> 0x18,0);
    local_30 = 0.0;
    fStack_2c = 3.4028235e+38;
    fStack_28 = 3.4028235e+38;
    fStack_24 = 3.4028235e+38;
    uStack_1c = 0;
    puStack_18 = (ushort *)0x0;
    uStack_14 = 0;
    puStack_8 = (undefined1 *)0x0;
    local_30 = (float)(**(code **)(*(int *)param_1[2] + 0x20))();
    auStack_58[0] = (uint)*(ushort *)(param_1[1] + 8);
    std::vector<unsigned_short,std::allocator<unsigned_short>_>::insert
              (avStack_20,puStack_18,1,(ushort *)auStack_58);
    fStack_24 = local_40;
    fStack_2c = local_48;
    fStack_28 = local_44;
    (**(code **)*DAT_0067ecd0)(DAT_00673344,&local_30);
    FUN_005b7e1d(uStack_1c);
  }
  ExceptionList = pvStack_10;
  return cVar2;
}

