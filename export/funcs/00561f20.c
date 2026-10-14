
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00561f20(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  float10 fVar6;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  fVar6 = (float10)FUN_0059d570();
  cVar2 = FUN_0059d560();
  cVar3 = ftol();
  cVar4 = ftol();
  bVar5 = (char)((uint)param_2 >> 8) - cVar4;
  local_8._0_2_ = CONCAT11(bVar5,(char)param_2 - cVar3);
  cVar3 = ftol();
  uVar1 = (undefined1)
          ((ulonglong)
           ((longlong)
            (int)((uint)(byte)(param_2._2_1_ - cVar3) + (uint)bVar5 + ((ushort)local_8 & 0xff)) *
           0x55555556) >> 0x20);
  param_2 = CONCAT13(0xff,CONCAT12(uVar1,CONCAT11(uVar1,uVar1)));
  if (cVar2 == '\0') {
    if ((float)fVar6 < (float)_DAT_005c75e8) {
      goto LAB_00562060;
    }
  }
  else if ((float)fVar6 < (float)_DAT_005c75e8) {
    local_c = DAT_00679ba4;
    goto LAB_00562060;
  }
  local_c = param_2;
LAB_00562060:
  cVar2 = ftol();
  cVar3 = ftol();
  local_8._0_2_ = CONCAT11(cVar3 + (char)((uint)local_c >> 8),cVar2 + (char)local_c);
  cVar2 = ftol();
  cVar3 = ftol();
  local_8 = CONCAT13(cVar3 + (char)((uint)local_c >> 0x18),
                     CONCAT12(cVar2 + (char)((uint)local_c >> 0x10),(ushort)local_8));
  *param_1 = local_8;
  return;
}

