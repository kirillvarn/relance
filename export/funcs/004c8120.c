
void FUN_004c8120(uint param_1,char param_2)

{
  uint local_80 [32];
  
  if (param_2 == '\0') {
    DAT_00612274 = DAT_00612274 & ~param_1;
  }
  else {
    DAT_00612274 = DAT_00612274 | param_1;
  }
  local_80[0] = DAT_00612274;
  if (DAT_0067ecd0 != (int *)0x0) {
    (**(code **)(*DAT_0067ecd0 + 0x134))(DAT_00673344,local_80,4);
  }
  return;
}

