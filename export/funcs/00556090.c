
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00556090(int *param_1,int *param_2)

{
  Rect *this;
  int iVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int local_44;
  float local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  piVar6 = (int *)*DAT_0067999c;
  local_44 = 0;
  local_40 = 0.0;
  piVar5 = DAT_0067999c;
  if (piVar6 != DAT_0067999c) {
    do {
      iVar1 = piVar6[2];
      iVar2 = local_44;
      fVar3 = local_40;
      if (*(char *)(iVar1 + 0xc) != '\0') {
        this = (Rect *)(iVar1 + 0x10);
        bVar4 = Rect::point_is_inside(this,*param_1,param_1[1]);
        if (bVar4) {
          local_30 = *(undefined4 *)this;
          local_2c = *(undefined4 *)(iVar1 + 0x14);
          local_28 = *(undefined4 *)(iVar1 + 0x18);
          local_24 = *(undefined4 *)(iVar1 + 0x1c);
          Rect::get_center((Rect *)&local_30,&local_3c,&local_34);
          local_20 = *(undefined4 *)this;
          local_1c = *(undefined4 *)(iVar1 + 0x14);
          local_18 = *(int *)(iVar1 + 0x18);
          local_14 = *(undefined4 *)(iVar1 + 0x1c);
          local_10 = *(undefined4 *)this;
          local_c = *(undefined4 *)(iVar1 + 0x14);
          local_8 = *(undefined4 *)(iVar1 + 0x18);
          local_4 = *(int *)(iVar1 + 0x1c);
          fVar3 = _DAT_005c75dc;
          if ((0 < local_18) && (0 < local_4)) {
            local_38 = param_1[1] - local_34;
            fVar3 = (float)(*param_1 - local_3c) / (float)local_18;
            fVar3 = fVar3 * fVar3 +
                    ((float)local_38 / (float)local_4) * ((float)local_38 / (float)local_4);
          }
          iVar2 = iVar1;
          if ((local_44 != 0) && (local_40 <= fVar3)) {
            iVar2 = local_44;
            fVar3 = local_40;
          }
        }
      }
      local_40 = fVar3;
      local_44 = iVar2;
      piVar6 = (int *)*piVar6;
    } while (piVar6 != DAT_0067999c);
    piVar5 = (int *)0x0;
    if (local_44 != 0) {
      *param_2 = local_44;
      return CONCAT31((int3)((uint)local_44 >> 8),1);
    }
  }
  *param_2 = 0;
  return (uint)piVar5 & 0xffffff00;
}

