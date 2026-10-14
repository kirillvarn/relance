
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00525200(int param_1,Vector *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0x3f800000;
  local_14 = 0x3f800000;
  local_24 = 0x3f800000;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  _control87(0,0);
  PhySys::BeamR(*(CObject **)(param_1 + 0x10),param_2,(Matrix *)&local_24,true);
  iVar4 = rand();
  fVar1 = (float)iVar4 * _DAT_005dce9c - _DAT_005c75dc;
  iVar4 = rand();
  fVar2 = (float)iVar4 * _DAT_005dce9c - _DAT_005c75dc;
  iVar4 = rand();
  fVar3 = (float)iVar4 * _DAT_005dce9c - _DAT_005c75dc;
  local_48 = fVar1 * fVar1;
  if (fVar1 <= _DAT_005c7474) {
    local_48 = -local_48;
  }
  local_44 = fVar2 * fVar2;
  if (fVar2 <= _DAT_005c7474) {
    local_44 = -local_44;
  }
  local_40 = fVar3 * fVar3;
  if (fVar3 <= _DAT_005c7474) {
    local_40 = -local_40;
  }
  local_48 = local_48 * param_3;
  local_44 = local_44 * param_3;
  local_40 = local_40 * param_3;
  PhySys::GetVelocity((CObject *)&local_3c);
  local_30 = local_48 - local_3c;
  local_2c = local_44 - local_38;
  local_28 = local_40 - local_34;
  PhySys::AddToVelocity(*(CObject **)(param_1 + 0x10),(Vector *)&local_30);
  PhySys::GetAngularVelocityOS((CObject *)&local_54);
  iVar4 = rand();
  fVar1 = (float)iVar4 * _DAT_005caeec;
  iVar4 = rand();
  fVar2 = (float)iVar4 * _DAT_005caeec * param_4;
  local_30 = (fVar2 + fVar2) - param_4;
  fVar1 = fVar1 * param_4;
  local_2c = (fVar1 + fVar1) - param_4;
  iVar4 = rand();
  local_48 = local_30 - local_54;
  local_44 = local_2c - local_50;
  local_40 = ((float)iVar4 * param_4 * _DAT_005dce9c - param_4) - local_4c;
  PhySys::AddToAngularVelocityOS(*(CObject **)(param_1 + 0x10),(Vector *)&local_48);
  puVar5 = (undefined4 *)PhySys::GetAngularVelocityOS((CObject *)&local_30);
  local_54 = (float)*puVar5;
  local_50 = (float)puVar5[1];
  local_4c = (float)puVar5[2];
  if (*(int **)(param_1 + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc0) + 0xc))(0);
  }
  return;
}

