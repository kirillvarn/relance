
void FUN_005b2c70(CHARACTER_ID *param_1,char param_2)

{
  if (*param_1 != (CHARACTER_ID)0x0) {
    DAT_0067ecc4 = 7;
    CHARACTER_ID::operator=((CHARACTER_ID *)&DAT_0067ea78,param_1);
    if (param_2 != '\0') {
      (**(code **)(*DAT_0067ecd0 + 0x60))(DAT_00673344);
    }
  }
  return;
}

