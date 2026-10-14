
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall FUN_0059c010(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar3 = FUN_00583e30(param_2,0);
  if (cVar3 != '\0') {
    if (param_3 != (float *)0x0) {
      fVar2 = param_3[1] * _DAT_005cef60;
      fVar1 = *param_3;
      *(undefined4 *)(param_1 + 0x578) = 0;
      *(float *)(param_1 + 0x570) = fVar1 * _DAT_005c75e0;
      *(float *)(param_1 + 0x574) = fVar2;
    }
    local_c = 0;
    local_8 = 0;
    local_4 = 0x41f00000;
    FUN_005868e0(&local_c);
    local_c = 0;
    local_8 = 0x43870000;
    local_4 = 0;
    FUN_00586900(&local_c);
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_00586a10(&local_c);
    FUN_00586a30(0);
    FUN_00586a50(1);
    FUN_00586a70(&DAT_006156f4);
    FUN_00586af0(&DAT_00615704);
  }
  return cVar3;
}

